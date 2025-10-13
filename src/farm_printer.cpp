#include <string>

#include "farm_printer.hpp"
#include "farm.hpp"

FarmPrinter::FarmPrinter(Farm *farm) : farm(farm) {};

std::string FarmPrinter::pp() {
  std::string output = "";
  for(int i = 0; i < farm->numberOfRows(); i++) {
    for(int j = 0; j < farm->numberOfColumns(); j++) {
      output += farm->getSymbol(i, j);
      output += " ";
    }
    output += "\n";
  }
  return output;
}
