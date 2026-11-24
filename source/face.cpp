#include "face.h"

const char *FACE_NAME[NUM_FACES] = {
      "E (+X)"
    , "N (+Z)"
    , "W (-X)"
    , "S (-Z)"
    , "U (+Y)"
    , "D (-Y)"
};

const char* getFaceName(const Face_e face) {
    if (face >= NUM_FACES)
        return "NONE";
    return FACE_NAME[ face ];
}


const char* getFacingName(const Facing_e face) {
    switch (face) {
        case FACING_E: return "E (+X)";
        case FACING_W: return "W (-X)";
        case FACING_N: return "N (+Z)";
        case FACING_S: return "S (-Z)";
        case FACING_U: return "U (+Y)";
        case FACING_D: return "D (-Y)";
        default:       return "NONE";
    }
}
