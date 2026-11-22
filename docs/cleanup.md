# Cleanup

The following thing were cleaned up:

1. Remove binaries executables from project
2. Add binaries directory to .gitignore
3. a) Rename `sources` to `data` directory.
   b) Update .vcxproject include assets path. i.e. `<None Include="sources\shaders\SkyboxFrag.glsl" />` to `<None Include="data\shaders\SkyboxFrag.glsl" />`
   c) Cleanup code using asset names to match. i.e. `setMeshTextureFile(chunk.opaqueMeshObj, "sources/textures/all.png");` to `setMeshTextureFile(chunk.opaqueMeshObj, "data/textures/all.png");`
4. Make build directory
5. Move MSVC Solution and Project files to build\
   a) Fix include dirs: Properties > C++ > General > Additional Include Directories > `$(SolutionDir)..\GLFW\include;$(SolutionDir)..\GLEW\include;$(SolutionDir)..\;%(AdditionalIncludeDirectories)`
   b) Fix linker dirs: Properties > Linker > General > Additional Library Directories > `$(SolutionDir)..\GLFW\lib-vc2022;$(SolutionDir)..\GLEW\lib\Release\x64;%(AdditionalLibraryDirectories)`
   c) Fix debugging dir: Properties > Debugging > Working Directory > `$(ProjectDir)..\`
