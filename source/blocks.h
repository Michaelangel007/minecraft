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

enum BP {//block properties
	SOLID = 1 << 0,
	TRANSPARENT = 1 << 1, //glass, leaves, water, short grass
	RENDER_INSIDE = 1 << 2, //water
	PLANT = 1 << 3, //move with wind
	DONT_CAST_SHADOW = 1 << 4, //glass, water
	SEMI_TRANSPARENT = 1 << 5, //semi-transparent blocks like water
	CROSS_SHAPE = 1 << 6, //blocks that have a cross shape like dandelion, poppy, short grass

};

const uint32_t BLOCK_PROP[] = {
    TRANSPARENT,              // air 
    SOLID,                            // stone 
    SOLID,                            // dirt 
    SOLID,                            // grass 
    SOLID,                            // sand 
    SOLID,                            // snowy_gras 
    SOLID|TRANSPARENT|DONT_CAST_SHADOW,// glass 
    SOLID,                            // diamond 
    SOLID,                            // oka_plank
    SOLID,                            // oka_log 
    TRANSPARENT|RENDER_INSIDE|PLANT,  // oka_leaves
    SOLID,                            // cactus 
    SOLID,                            // spruce_log
    TRANSPARENT|RENDER_INSIDE | PLANT,// spruce_leaves
    TRANSPARENT|DONT_CAST_SHADOW|SEMI_TRANSPARENT,// water
    PLANT|TRANSPARENT | CROSS_SHAPE,// short grass
    PLANT|TRANSPARENT | CROSS_SHAPE,//poppy
    PLANT | TRANSPARENT | CROSS_SHAPE,//dandelion
    PLANT | TRANSPARENT  | CROSS_SHAPE,//dead bush
    PLANT | TRANSPARENT | CROSS_SHAPE,//sweet berry
    PLANT | TRANSPARENT | CROSS_SHAPE,//kelp
    SOLID,                            // gravel 
	SOLID,                            // coal_ore
    SOLID | TRANSPARENT ,   // ice
    SOLID,                            // bedrock
    PLANT | TRANSPARENT | CROSS_SHAPE, // brain_coral
    PLANT | TRANSPARENT | CROSS_SHAPE, // tube_coral
    SOLID, // fire_coral_block
	SOLID, // tube_coral_block

};

bool hasProp(int block_id, BP prop);

bool hasAllProp(int block_id, uint32_t properties);

bool hasAnyProp(int block_id, uint32_t properties);
