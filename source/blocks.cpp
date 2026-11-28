#include <iostream>
#include "blocks.h"

// Keys: BlockId, FaceId return the tile index in the texture atlas
// NOTE: This table can be entirely optimized away if we use a sampler2DArray, and pass z == layer
// TODO: This really should be built dynamically from the available texture blocks.
//
// Face   E    N    W    S    U    D
//       +X   +Z   -X   -Z   +Y   -Y
const int BLOCK_FACE_TO_TILE[NUM_BLOCKS][NUM_FACES] = {
      { 255, 255, 255, 255, 255, 255 } //  0: air
    , {   0,   0,   0,   0,   0,   0 } //  1: stone
    , {   3,   3,   3,   3,   3,   3 } //  2: dirt
    , {   4,   4,   4,   4,   5,   3 } //  3: grass  (tiles: 3)
    , {  10,  10,  10,  10,  10,  10 } //  4: sand
    , {  13,  13,  13,  13,  14,   3 } //  5: snowy_grass (tile: 3)
    , {   2,   2,   2,   2,   2,   2 } //  6: glass
    , {   6,   6,   6,   6,   6,   6 } //  7: diamond_ore
    , {   1,   1,   1,   1,   1,   1 } //  8: oak_planks
    , {   8,   8,   8,   8,   9,   9 } //  9: oak_log +  oak_log_top
    , {   7,   7,   7,   7,   7,   7 } // 10: oak_leaves
    , {  16,  16,  16,  16,  17,  17 } // 11: cactus + cactus_top
    , {  18,  18,  18,  18,  19,  19 } // 12: spruce_log + spruce_log_top
    , {  20,  20,  20,  20,  20,  20 } // 13: spruce_leaves
    , {  12,  12,  12,  12,  12,  12 } // 14: water
    , {  21,  21,  21,  21,  21,  21 } // 15: short_grass
    , {  22,  22,  22,  22,  22,  22 } // 16: poppy
    , {  23,  23,  23,  23,  23,  23 } // 17: dandelion
    , {  24,  24,  24,  24,  24,  24 } // 18: dead_bush
    , {  25,  25,  25,  25,  25,  25 } // 19: sweet_berry
    , {  27,  27,  27,  27,  27,  27 } // 20: kelp
    , {  11,  11,  11,  11,  11,  11 } // 21: gravel
    , {  15,  15,  15,  15,  15,  15 } // 22: coal_ore
    , {  26,  26,  26,  26,  26,  26 } // 23: ice
    , {  29,  29,  29,  29,  29,  29 } // 24: bedrock
    , {  30,  30,  30,  30,  30,  30 } // 25: brain_coral_fan  FAN
    , {  31,  31,  31,  31,  31,  31 } // 26: tube_coral_fan   FAN
    , {  32,  32,  32,  32,  32,  32 } // 27: fire_coral_block BLOCK
    , {  33,  33,  33,  33,  33,  33 } // 28: tube_coral_block BLOCK
};

const char* BLOCK_FILENAMES[NUM_BLOCKS] = {
      NULL                      // BLOCK_AIR
    , "stone"                   // BLOCK_STONE
    , "dirt"                    // BLOCK_DIRT  3: grass_block_side + grass_block_top + dirt (v3.3)
    , "grass_block_side"        // BLOCK_GRASS
    , "sand"                    // BLOCK_SAND
    , "grass_block_snow"        // BLOCK_GRASS_SNOWY  3: grass_block_snow + snow + dirt
    , "glass"                   // BLOCK_GLASS
    , "diamond_ore"             // BLOCK_ORE_DIAMOND
    , "oak_planks"              // BLOCK_OAK_PLANK
    , "oak_log"                 // BLOCK_OAK_LOG  2: oak_log, oak_log_top
    , "leaves_oak"              // BLOCK_OAK_LEAVES
    , "cactus_side"             // BLOCK_PLANT_CACTUS 3: cactus_side + cactus_top + cactus_top
    , "spruce_log"              // BLOCK_SPRUCE_LOG  2: spruce_log + spruce_log_top
    , "spruce_leaves"           // BLOCK_SPRUCE_LEAVES
    , NULL                      // BLOCK_WATER (missing texture)
    , "short_grass"             // BLOCK_GRASS_SHORT (also see tallgrass)
    , "poppy"                   // BLOCK_FLOWER_POPPY
    , "flower_dandelion"        // BLOCK_FLOWER_DANDELION
    , "deadbush"                // BLOCK_DEAD_BUSH
    , "sweet_berry_bush_stage3" // BLOCK_PLANT_SWEET_BERRY
    , "kelp"                    // BLOCK_PLANT_KELP -- ANIMATED
    , "gravel"                  // BLOCK_GRAVEL
    , "coal_ore"                // BLOCK_ORE_COAL
    , "ice"                     // BLOCK_ICE
    , "bedrock"                 // BLOCK_BEDROCK (v3.3)
    , "brain_coral"             // BLOCK_CORAL_BRAIN_FAN
    , "tube_coral_fan"          // BLOCK_CORAL_TUBE_FAN
    , "fire_coral_block"        // BLOCK_CORAL_FIRE_BLOCK
    , "tube_coral_block"        // BLOCK_CORAL_TUBE_BLOCK
};
static_assert(sizeof(BLOCK_FILENAMES) / sizeof(BLOCK_FILENAMES[0]) == NUM_BLOCKS,
              "BLOCK_FILENAMES[ size ] != NUM_BLOCKS");

const uint32_t BLOCK_PROPERTIES[ NUM_BLOCKS ] = {
                IS_SEE_THROUGH                                       // air
    ,IS_SOLID                                                        // stone
    ,IS_SOLID                                                        // dirt
    ,IS_SOLID                                                        // grass
    ,IS_SOLID                                                        // sand
    ,IS_SOLID                                                        // snowy_gras
    ,IS_SOLID | IS_SEE_THROUGH | HAS_NO_SHADOW                       // glass
    ,IS_SOLID                                                        // diamond
    ,IS_SOLID                                                        // oka_plank
    ,IS_SOLID                                                        // oka_log
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_DOUBLESIDED      // oka_leaves
    ,IS_SOLID                                                        // cactus
    ,IS_SOLID                                                        // spruce_log
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_DOUBLESIDED      // spruce_leaves
    ,           IS_SEE_THROUGH | HAS_NO_SHADOW | IS_SEMI_TRANSPARENT // water
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // short grass
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // poppy
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // dandelion
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // dead bush
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // sweet berry
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // kelp
    ,IS_SOLID                                                        // gravel
    ,IS_SOLID                                                        // coal_ore
    ,IS_SOLID | IS_SEE_THROUGH                                       // ice
    ,IS_SOLID                                                        // bedrock
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // brain_coral_fan
    ,           IS_SEE_THROUGH | HAS_WIND_SWAY | IS_CROSS_SHAPED     // tube_coral_fan
    ,IS_SOLID                                                        // fire_coral_block
    ,IS_SOLID                                                        // tube_coral_block
};

