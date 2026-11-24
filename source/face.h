#pragma once

enum Face_e {
      FACE_E // +X
    , FACE_N // +Z
    , FACE_W // -X
    , FACE_S // -Z
    , FACE_U // +Y
    , FACE_D // -Y
    , NUM_FACES
    , FACE_NONE = -1
};

enum Facing_e {
      FACING_E
    , FACING_N
    , FACING_W
    , FACING_S
    , FACING_U
    , FACING_D
    , NUM_FACING
    , FACING_NONE = -1
};

const char* getFaceName(const Face_e face);
const char* getFacingName(const Facing_e face);
