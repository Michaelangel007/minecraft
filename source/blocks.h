#pragma once
#include <stdint.h>

enum Block_e {
      BLOCK_AIR
    , BLOCK_STONE
    , BLOCK_DIRT
    , BLOCK_GRASS
    , BLOCK_SAND
    , BLOCK_GRASS_SNOWY
    , BLOCK_GLASS
    , BLOCK_ORE_DIAMOND
    , BLOCK_OAK_PLANK
    , BLOCK_OAK_LOG
    , BLOCK_OAK_LEAVES
    , BLOCK_PLANT_CACTUS
    , BLOCK_SPRUCE_LOG
    , BLOCK_SPRUCE_LEAVES
    , BLOCK_WATER
    , BLOCK_GRASS_SHORT
    , BLOCK_FLOWER_POPPY
    , BLOCK_FLOWER_DANDELION
    , BLOCK_DEAD_BUSH
    , BLOCK_PLANT_SWEET_BERRY
    , BLOCK_PLANT_KELP // Technically not a plant, but kindgom Protista, a stramenopile
    , BLOCK_GRAVEL
    , BLOCK_ORE_COAL
    , BLOCK_ICE
    , BLOCK_BEDROCK
    , BLOCK_CORAL_BRAIN_FAN  // Pink
    , BLOCK_CORAL_TUBE_FAN   // Blue
    , BLOCK_CORAL_FIRE_BLOCK // Red
    , BLOCK_CORAL_TUBE_BLOCK // Blue
    , NUM_BLOCKS = 29
};

// There is NOT a 1:1 mapping to render mesh types
// e.g. transpNoShadowMesh == HAS_NO_SHADOW, IS_SEMI_TRANSPARENT
enum BlockProperties_e {
    IS_SOLID            = 1 << 0, // physics collision
    IS_SEE_THROUGH      = 1 << 1, // glass, leaves, water, short grass
    IS_DOUBLESIDED      = 1 << 2, // leaves
    HAS_WIND_SWAY       = 1 << 3, // move with wind
    HAS_NO_SHADOW       = 1 << 4, // glass, water don't cast shadows
    IS_SEMI_TRANSPARENT = 1 << 5, // semi-transparent blocks like water
    IS_CROSS_SHAPED     = 1 << 6, // cross shaped like dandelion, poppy, short grass
// IS_ORE
// IS_UNBREAKABLE
};

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

inline bool hasProp(int block_id, BlockProperties_e prop) {
    return (BLOCK_PROPERTIES[block_id] & prop) != 0;
}

inline bool hasAllProp(int block_id, uint32_t properties) {
    return (BLOCK_PROPERTIES[block_id] & properties) == properties;
}

inline bool hasAnyProp(int block_id, uint32_t properties) {
    return (BLOCK_PROPERTIES[block_id] & properties) != 0;
}
