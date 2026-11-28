#include "chunk.h"

std::unordered_map<ChunkKey, Chunk> chunks;
std::vector<ChunkKey>               chunksToLoadQueue;
std::vector<ChunkKey>               chunksToUnloadQueue;
