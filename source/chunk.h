#pragma once

#ifndef CHUNK_H_INCLUDE
#define CHUNK_H_INCLUDE

#include <vector>
#include <unordered_map>

#include "mesh.h"

struct ChunkKey {
    int x;
    int y;

    bool operator==(const ChunkKey& other) const {
        return (x == other.x) && (y == other.y);
    }
};

namespace std {
    template<>
    struct hash<ChunkKey> {
        std::size_t operator()(const ChunkKey& key) const {
            return hash<int>()(key.x) ^ (hash<int>()(key.y) << 1);
        }
    };
}

typedef struct chunk {
    ChunkKey key;
    std::vector<std::vector<std::vector<signed char>>> blocks;
    std::vector<float> opaqueMesh;
    std::vector<float> opaqueNoShadowMesh;
    std::vector<float> transpMesh;
    std::vector<float> transpNoShadowMesh;
    std::vector<float> plantMesh;
    Mesh* opaqueMeshObj = nullptr;
    Mesh* transpMeshObj = nullptr;
    Mesh* opaqueNoShadowMeshObj = nullptr;
    Mesh* transpNoShadowMeshObj = nullptr;
    Mesh* plantMeshObj = nullptr;
    bool isActive = false;
} Chunk;

extern std::unordered_map<ChunkKey, Chunk> chunks;
extern std::vector<ChunkKey> chunksToLoadQueue;
extern std::vector<ChunkKey> chunksToUnloadQueue;

#endif