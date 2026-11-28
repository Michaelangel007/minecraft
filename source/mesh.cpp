#include "mesh.h"
#include "camera.h"

MeshList_t gMeshList[ NUM_MESH_TYPES ];

#define XYZ_INT_TO_FLOAT                    \
    const float x = static_cast<float>(ix); \
    const float y = static_cast<float>(iy); \
    const float z = static_cast<float>(iz); \
    const float s = 1.0f/static_cast<float>(camera.TextureAtlasTilesDimension);

void addTopFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x, y, z, ou, ov + s,
        x, y, z + 1, ou + s, ov + s,
        x + 1, y, z + 1, ou + s, ov,
        x, y, z, ou, ov + s,
        x + 1, y, z + 1, ou + s, ov,
        x + 1, y, z, ou, ov
        });
}

void addBottomFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x + 1, y, z, ou, ov + s,
        x + 1, y, z + 1, ou + s, ov + s,
        x, y, z + 1, ou + s, ov,
        x + 1, y, z, ou, ov + s,
        x, y, z + 1, ou + s, ov,
        x, y, z, ou, ov
        });
}

void addXPosFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x, y, z, ou, ov + s,
        x, y + 1, z, ou, ov,
        x, y + 1, z + 1, ou + s, ov,
        x, y, z, ou, ov + s,
        x, y + 1, z + 1, ou + s, ov,
        x, y, z + 1, ou + s, ov + s
        });
}

void addXNegFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x, y, z + 1, ou, ov + s,
        x, y + 1, z + 1, ou, ov,
        x, y + 1, z, ou + s, ov,
        x, y, z + 1, ou, ov + s,
        x, y + 1, z, ou + s, ov,
        x, y, z, ou + s, ov + s
        });
}

void addZPosFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x, y, z, ou, ov + s,
        x + 1, y, z, ou + s, ov + s,
        x + 1, y + 1, z, ou + s, ov,
        x, y, z, ou, ov + s,
        x + 1, y + 1, z, ou + s, ov,
        x, y + 1, z, ou, ov
        });
}

void addZNegFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x + 1, y, z, ou, ov + s,
        x, y, z, ou + s, ov + s,
        x, y + 1, z, ou + s, ov,
        x + 1, y, z, ou, ov + s,
        x, y + 1, z, ou + s, ov,
        x + 1, y + 1, z, ou, ov
        });
}

void addPlantFace(std::vector<float>& vertices, int ix, int iy, int iz, float ou, float ov) {
    XYZ_INT_TO_FLOAT
    vertices.insert(vertices.end(), {
        x-1, y, z, ou, ov + s,
        x-1, y + 1, z, ou, ov,
        x, y + 1, z + 1, ou + s, ov,
        x-1, y, z, ou, ov + s,
        x, y + 1, z + 1, ou + s, ov,
        x, y, z + 1, ou + s, ov + s,

        x, y, z, ou, ov + s,
        x, y + 1, z, ou, ov,
        x-1, y + 1, z + 1, ou + s, ov,
        x, y, z, ou, ov + s,
        x-1, y + 1, z + 1, ou + s, ov,
        x-1, y, z + 1, ou + s, ov + s,

        x - 1, y + 1, z, ou, ov,
        x - 1, y, z, ou, ov + s,
        x, y + 1, z + 1, ou + s, ov,
        x, y + 1, z + 1, ou + s, ov,
        x - 1, y, z, ou, ov + s,
        x, y, z + 1, ou + s, ov + s,

        x, y + 1, z, ou, ov,
        x, y, z, ou, ov + s,
        x - 1, y + 1, z + 1, ou + s, ov,
        x - 1, y + 1, z + 1, ou + s, ov,
        x, y, z, ou, ov + s,
        x - 1, y, z + 1, ou + s, ov + s
    });
}

void cleanupMesh(Mesh* mesh) {
    assert(mesh);
    if (mesh == nullptr) {
        return;
    }

    glDeleteVertexArrays(1, &mesh->VAO);
    glDeleteBuffers(1, &mesh->VBO);
    glDeleteBuffers(1, &mesh->VBONorm);

    mesh->VAO = 0;
    mesh->VBO = 0;
    mesh->VBONorm = 0;
}

void cleanupMeshList(std::vector<Mesh*>& meshList) {
    for (Mesh* mesh : meshList) {
        if (mesh != nullptr) {
            cleanupMesh(mesh);
            delete mesh;
        }
    }
    meshList.clear();
}

void cleanupMeshes() {
    for (int iMesh = 0; iMesh < NUM_MESH_TYPES; iMesh++) {
        cleanupMeshList( gMeshList[ iMesh ] );
    }
}

void deleteMesh(Mesh* mesh) {
    if (mesh == nullptr) {
        return;
    }

    for (int iMesh = 0; iMesh < NUM_MESH_TYPES; iMesh++) {
        MeshList_t *pMeshes = &gMeshList[ iMesh ];
        auto it = std::find(pMeshes->begin(), pMeshes->end(), mesh);
        if (it != pMeshes->end()) {
            pMeshes->erase(it);
        }
    }

    cleanupMesh(mesh);

    mesh->vertices.clear();
    mesh->vertices.shrink_to_fit();
    mesh->normales.clear();
    mesh->normales.shrink_to_fit();

    delete mesh;
}
