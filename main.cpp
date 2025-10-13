#include <iostream>

#include "src/farm.hpp"
#include "src/farm_printer.hpp"
#include "src/carrot.hpp"
#include "src/ansi_clear.hpp"

int main() {
  Farm farm(5, 5);
  FarmPrinter printer(&farm);
  bool gameInProgress = true;
  std::string userInput;

  while(gameInProgress) {
    ansi_clear();
    std::cout << printer.pp();
    std::cin >> userInput;

    if(userInput == "d") {
      farm.moveRight();
    } else if(userInput == "a") {
      farm.moveLeft();
    } else if(userInput == "c") {
      Carrot *carrot = new Carrot();
      farm.plant(carrot);
    }
  }
}
