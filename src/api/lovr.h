#include "luax.h"
#include "filesystem/blob.h"
#include "graphics/mesh.h"
#include "math/math.h"
#include "physics/physics.h"
#include "lib/map/map.h"

int l_lovrAudioInit(lua_State* L);
int l_lovrEventInit(lua_State* L);
int l_lovrFilesystemInit(lua_State* L);
int l_lovrGraphicsInit(lua_State* L);
int l_lovrHeadsetInit(lua_State* L);
int l_lovrMathInit(lua_State* L);
int l_lovrPhysicsInit(lua_State* L);
int l_lovrTimerInit(lua_State* L);

extern const luaL_Reg lovrAudio[];
extern const luaL_Reg lovrBoxShape[];
extern const luaL_Reg lovrCapsuleShape[];
extern const luaL_Reg lovrController[];
extern const luaL_Reg lovrCylinderShape[];
extern const luaL_Reg lovrBlob[];
extern const luaL_Reg lovrBody[];
extern const luaL_Reg lovrEvent[];
extern const luaL_Reg lovrFilesystem[];
extern const luaL_Reg lovrFont[];
extern const luaL_Reg lovrGraphics[];
extern const luaL_Reg lovrHeadset[];
extern const luaL_Reg lovrMath[];
extern const luaL_Reg lovrMesh[];
extern const luaL_Reg lovrModel[];
extern const luaL_Reg lovrPhysics[];
extern const luaL_Reg lovrShader[];
extern const luaL_Reg lovrShape[];
extern const luaL_Reg lovrSkybox[];
extern const luaL_Reg lovrSource[];
extern const luaL_Reg lovrSphereShape[];
extern const luaL_Reg lovrTexture[];
extern const luaL_Reg lovrTimer[];
extern const luaL_Reg lovrTransform[];
extern const luaL_Reg lovrWorld[];

extern map_int_t BlendAlphaModes;
extern map_int_t BlendModes;
extern map_int_t CompareModes;
extern map_int_t ControllerAxes;
extern map_int_t ControllerButtons;
extern map_int_t DrawModes;
extern map_int_t EventTypes;
extern map_int_t FilterModes;
extern map_int_t HeadsetEyes;
extern map_int_t HorizontalAligns;
extern map_int_t MeshAttributeTypes;
extern map_int_t MeshDrawModes;
extern map_int_t MeshUsages;
extern map_int_t PolygonWindings;
extern map_int_t ShapeTypes;
extern map_int_t TextureProjections;
extern map_int_t TimeUnits;
extern map_int_t VerticalAligns;
extern map_int_t WrapModes;

void luax_checkmeshformat(lua_State* L, int index, MeshFormat* format);
int luax_readtransform(lua_State* L, int index, mat4 transform);
Blob* luax_readblob(lua_State* L, int index, const char* debug);
int luax_pushshape(lua_State* L, Shape* shape);
