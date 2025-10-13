#include <iostream>

#include "src/farm.hpp"
#include "src/farm_printer.hpp"
#include "src/carrot.hpp"

int main() {
  Farm farm(20, 5);
  FarmPrinter printer(&farm);

  Carrot carrot;
  farm.plant(3, 4, &carrot);

  std::cout << printer.pp();
}
