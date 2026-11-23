#pragma once
#include <vector>
#include "blocks.h"


//3 co x y z, block_type, should replace existing block
inline const std::vector<std::tuple<int, int, int, int, int>> oak_tree_1 = {
    { 0, 1, 0, BLOCK_OAK_LOG, 1},
    { 0, 2, 0, BLOCK_OAK_LOG, 1},
    { 0, 3, 0, BLOCK_OAK_LOG, 1},
    { 0, 4, 0, BLOCK_OAK_LOG, 1},

    { 1, 3, 0, BLOCK_OAK_LEAVES, 0},
    { 2, 3, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 1, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 3, 2, BLOCK_OAK_LEAVES, 0},
    { 0, 3,-2, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 1, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 0, BLOCK_OAK_LEAVES, 0},
    {-2, 3, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 1, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 2, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 4, 1, BLOCK_OAK_LEAVES, 0},
    { 1, 4,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 4,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 2, BLOCK_OAK_LEAVES, 0},
    { 0, 4,-2, BLOCK_OAK_LEAVES, 0},
    {-1, 4, 1, BLOCK_OAK_LEAVES, 0},
    {-1, 4, 0, BLOCK_OAK_LEAVES, 0},
    {-2, 4, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 4,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 5, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 5, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 5, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 5, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 5,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 6, 0, BLOCK_OAK_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> oak_tree_2 = {
    { 0, 1, 0, BLOCK_OAK_LOG, 1},
    { 0, 2, 0, BLOCK_OAK_LOG, 1},
    { 0, 3, 0, BLOCK_OAK_LOG, 1},

    { 1, 2, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 2, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 2, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 2,-1, BLOCK_OAK_LEAVES, 0},
    { 1, 3, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 1, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 3,-1, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 1, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 4, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 4,-1, BLOCK_OAK_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> oak_tree_3 = {
    { 0, 1, 0, BLOCK_OAK_LOG, 1},
    { 0, 2, 0, BLOCK_OAK_LOG, 1},
    { 0, 3, 0, BLOCK_OAK_LOG, 1},
    { 0, 4, 0, BLOCK_OAK_LOG, 1},

    { 1, 3, 0, BLOCK_OAK_LEAVES, 0},
    { 2, 3, 0, BLOCK_OAK_LEAVES, 0},
    { 2, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 2, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 1, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 1, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 3, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 3,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 3, 2, BLOCK_OAK_LEAVES, 0},
    { 1, 3, 2, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 2, BLOCK_OAK_LEAVES, 0},
    { 0, 3,-2, BLOCK_OAK_LEAVES, 0},
    { 1, 3,-2, BLOCK_OAK_LEAVES, 0},
    {-1, 3,-2, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 1, BLOCK_OAK_LEAVES, 0},
    {-1, 3, 0, BLOCK_OAK_LEAVES, 0},
    {-2, 3, 0, BLOCK_OAK_LEAVES, 0},
    {-2, 3, 1, BLOCK_OAK_LEAVES, 0},
    {-2, 3,-1, BLOCK_OAK_LEAVES, 0},
    {-1, 3,-1, BLOCK_OAK_LEAVES, 0},

    { 1, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 2, 4, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 4, 1, BLOCK_OAK_LEAVES, 0},
    { 1, 4,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 4,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 4, 2, BLOCK_OAK_LEAVES, 0},
    { 0, 4,-2, BLOCK_OAK_LEAVES, 0},
    {-1, 4, 1, BLOCK_OAK_LEAVES, 0},
    {-1, 4, 0, BLOCK_OAK_LEAVES, 0},
    {-2, 4, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 4,-1, BLOCK_OAK_LEAVES, 0},

    { 0, 5, 0, BLOCK_OAK_LEAVES, 0},
    { 1, 5, 0, BLOCK_OAK_LEAVES, 0},
    {-1, 5, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 5, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 5,-1, BLOCK_OAK_LEAVES, 0},
    { 0, 6, 0, BLOCK_OAK_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_OAK_SHRUB_2 = {
    { 1, 1, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 1, 1, BLOCK_OAK_LEAVES, 0},
    { 0, 1,-1, BLOCK_OAK_LEAVES, 0},
    {-1, 1, 0, BLOCK_OAK_LEAVES, 0},
    { 0, 2, 0, BLOCK_OAK_LEAVES, 0},
};


inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_SPRUCE_TREE_8 = {
    { 0, 1, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 2, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 3, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 4, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 5, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 6, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 7, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 8, 0, BLOCK_SPRUCE_LOG, 1},

    { 1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3, 2, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3, 2, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 2, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3,-2, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3,-2, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3,-2, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-2, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-2, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-2, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4,-1, BLOCK_SPRUCE_LEAVES, 0},


    { 1, 5, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 5, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 5, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 5,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 5, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 5,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 5, 2, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 5,-2, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 5, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 5, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-2, 5, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 5,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 6, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 6, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 6, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 6,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 7, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 7, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 7,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 7, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 7,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 7, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 7, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 7,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 8, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 8, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 8, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 8, -1, BLOCK_SPRUCE_LEAVES, 0},

    { 0, 9, 0, BLOCK_SPRUCE_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_SPRUCE_TREE_5 = {
    { 0, 1, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 2, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 3, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 4, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 5, 0, BLOCK_SPRUCE_LOG, 1},
    
    { 1, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 2, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 2,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2, 2, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2,-2, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 2, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-2, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 2,-1, BLOCK_SPRUCE_LEAVES, 0},
    
    { 1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    
    { 1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4,-1, BLOCK_SPRUCE_LEAVES, 0},
    
    { 0, 5, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 5,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 5, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 5, 0, BLOCK_SPRUCE_LEAVES, 0},

    { 0, 6, 0, BLOCK_SPRUCE_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_SPRUCE_TREE_4 = {
    { 0, 1, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 2, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 3, 0, BLOCK_SPRUCE_LOG, 1},
    { 0, 4, 0, BLOCK_SPRUCE_LOG, 1},

    { 1, 2, 0, BLOCK_SPRUCE_LEAVES, 0}, 
    {-1, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 2, 2, 0, BLOCK_SPRUCE_LEAVES, 0}, 
    {-2, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2, 1, BLOCK_SPRUCE_LEAVES, 0}, 
    { 0, 2,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2, 2, BLOCK_SPRUCE_LEAVES, 0}, 
    { 0, 2,-2, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 2, 1, BLOCK_SPRUCE_LEAVES, 0}, 
    { 1, 2,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 2, 1, BLOCK_SPRUCE_LEAVES, 0}, 
    {-1, 2,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 3, 1, BLOCK_SPRUCE_LEAVES, 0},

    { 1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 4, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 4,-1, BLOCK_SPRUCE_LEAVES, 0},

    { 0, 5, 0, BLOCK_SPRUCE_LEAVES, 0}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_SPRUCE_SHRUB_2 = {
    { 1, 1, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 1, 1, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 1,-1, BLOCK_SPRUCE_LEAVES, 0},
    {-1, 1, 0, BLOCK_SPRUCE_LEAVES, 0},
    { 0, 2, 0, BLOCK_SPRUCE_LEAVES, 0},
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_CACTUS_2 = {
    {0, 1, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 2, 0, BLOCK_PLANT_CACTUS, 1}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_CACTUS_3 = {
    {0, 1, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 2, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 3, 0, BLOCK_PLANT_CACTUS, 1}
};

inline const std::vector<std::tuple<int, int, int, int, int>> STRUCTURE_CACTUS_4 = {
    {0, 1, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 2, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 3, 0, BLOCK_PLANT_CACTUS, 1},
    {0, 4, 0, BLOCK_PLANT_CACTUS, 1}
};


inline const std::vector<std::tuple<int, int, int, int, int>> coral_1 = {
    { 0, 0, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    {-1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1,-1, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_2 = {
    {0, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    {1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    {1, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    {0, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    {0, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_3 = {
    { 0, 0, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    {-1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_4 = {
    { 0, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    {-1, 1,-1, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_5 = {
    { 0, 0, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_6 = {
    { 0, 0, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    {-1, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_7 = {
    { 0, 0, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 1, 1, 1, BLOCK_CORAL_FIRE_BLOCK, 1},
    {-1, 1,-1, BLOCK_CORAL_FIRE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_FIRE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_8 = {
    { 0, 0, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    {-1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1,-1, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_9 = {
    { 0, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_10 = {
    { 0, 0, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    {-1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_11 = {
    { 0, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    {-1, 1,-1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_12 = {
    { 0, 0, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_13 = {
    { 0, 0, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    {-1, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
};

inline const std::vector<std::tuple<int, int, int, int, int>> coral_14 = {
    { 0, 0, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 1, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 1, 1, 1, BLOCK_CORAL_TUBE_BLOCK, 1},
    {-1, 1,-1, BLOCK_CORAL_TUBE_BLOCK, 1},
    { 0, 2, 0, BLOCK_CORAL_TUBE_BLOCK, 1},
};