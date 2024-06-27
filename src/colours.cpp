#include "colours.h"
#include <vector>
#include <raylib.h>

/*const Color green = {47,230,23,255};
const Color red = {232,18,18,255};
const Color yellow = {237,234,4,255};
const Color purple = {166,0,247,255}; */

const Color green = {0, 117, 44, 255};
const Color red = {139, 0, 0, 255};
const Color yellow = {255, 171, 0, 255};
const Color purple = {112, 31, 126, 255};

std::vector<Color> GetCellColours()
{
    return {green, red, yellow, purple};
}