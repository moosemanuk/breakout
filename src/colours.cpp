#include "colours.h"
#include <vector>
#include <raylib.h>

const Color green = {0, 117, 44, 255};
const Color red = {139, 0, 0, 255};
const Color yellow = {255, 171, 0, 255};
const Color purple = {112, 31, 126, 255};

std::vector<Color> GetCellColours()
{
    return {green, red, yellow, purple};
}