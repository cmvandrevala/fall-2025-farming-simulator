#pragma once

#include <vector>
#include <string>

#include "plot.hpp"

class Farm {
  private:
    int rows;
    int columns;
    int playerRow = 0;
    int playerColumn = 0;
    std::vector<std::vector<Plot *>> plots;

  public:
    Farm(int rows, int columns);
    int numberOfRows();
    int numberOfColumns();
    std::string getSymbol(int row, int column);
    void plant(int row, int column, Plot *vegetable);
    void plant(Plot *vegetable);
    void endDay();
    void moveRight();
    void moveLeft();
};
