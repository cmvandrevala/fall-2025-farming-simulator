#include <string>
#include <iostream>

#include "farm.hpp"
#include "soil.hpp"

Farm::Farm(int rows, int columns) : rows(rows), columns(columns) {
  for(int i = 0; i < rows; i++) {
    std::vector<Plot*> initialColumns;
    for(int j = 0; j < columns; j++) {
      Soil *soil = new Soil();
      initialColumns.push_back(soil);
    }
    plots.push_back(initialColumns);
  }
}

int Farm::numberOfRows() {
  return rows;
}

int Farm::numberOfColumns() {
  return columns;
}

std::string Farm::getSymbol(int row, int column) {
  return plots.at(row).at(column)->symbol();
}

void Farm::plant(int row, int column, Plot *vegetable) {
  plots.at(row).at(column) = vegetable;
}
