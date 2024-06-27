#include "grid.h"

Grid::Grid()
{
    this->rows = GRID_ROWS;
    this->columns = GRID_COLUMNS;
    this->width = BLOCK_WIDTH;
    this->height = BLOCK_HEIGHT;
}

void Grid::Initialise()
{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            switch(i){
                case 0: grid[i][j] = 0;
                    break;
                case 1: grid[i][j] = 0;
                    break;
                case 2: grid[i][j] = 1;
                    break;
                case 3: grid[i][j] = 1;
                    break;
                case 4: grid[i][j] = 2;
                    break;
                case 5: grid[i][j] = 2;
                    break;
                case 6: grid[i][j] = 3;
                    break;
                case 7: grid[i][j] = 3;
                    break;
            } 
        }
    }
    colours = GetCellColours(); 
       
}

void Grid::PrintToConsole()
{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Grid::Draw()
{
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            int cellValue = grid[i][j];
            if(cellValue != 0){
                DrawRectangle(j*width + 1, i*height + 1, width - 5, height - 5, colours[cellValue]);
            }
        }
    }
}
