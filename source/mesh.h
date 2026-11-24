#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <vector>

// Structure Mesh
struct Mesh {
    unsigned int VAO;
    unsigned int VBO;
    unsigned int VBONorm;
    unsigned int texture;
    std::vector<float> vertices;
    std::vector<float> normales;
    glm::mat4 model;

    glm::vec4 color;
    float ambianteLightMult;
    int shininess;
    bool enableTexture;
};

extern std::vector<Mesh*> opaqueMeshList;
extern std::vector<Mesh*> transpMeshList;
extern std::vector<Mesh*> opaqueNoShadowMeshList;
extern std::vector<Mesh*> transpNoShadowMeshList;
extern std::vector<Mesh*> plantMeshList;

extern int textureMapWidth;

void cleanupMeshes();

void addTopFace   (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addBottomFace(std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addXPosFace  (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addXNegFace  (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addZPosFace  (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addZNegFace  (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
void addPlantFace (std::vector<float>& vertices, int ix, int iy, int iz, float u, float v);
