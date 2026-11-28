#pragma once

#ifndef CHUNK_H_INCLUDE
#define CHUNK_H_INCLUDE

#include <vector>
#include <unordered_map>

#include "mesh.h"

#define CHUNKWIDTH 30
#define CHUNKHEIGHT 120

struct ChunkKey {
    int x;
    int z;

    bool operator==(const ChunkKey& other) const {
        return (x == other.x) && (z == other.z);
    }
};


namespace std {
    template<>
    struct hash<ChunkKey> {
        std::size_t operator()(const ChunkKey& key) const {
            return hash<int>()(key.x) ^ (hash<int>()(key.z) << 1);
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

inline glm::vec3 ChunkKeyToWorldPosition(Chunk& chunk) {
    return glm::vec3(chunk.key.x * CHUNKWIDTH, 0, chunk.key.z * CHUNKWIDTH);
}

extern std::unordered_map<ChunkKey, Chunk> chunks;
extern std::vector<ChunkKey> chunksToLoadQueue;
extern std::vector<ChunkKey> chunksToUnloadQueue;

#endif