#pragma once

#include <vector>
#include <string>

#include "plot.hpp"

class Farm {
  private:
    int rows;
    int columns;
    std::vector<std::vector<Plot *>> plots;

  public:
    Farm(int rows, int columns);
    int numberOfRows();
    int numberOfColumns();
    std::string getSymbol(int row, int column);
};
