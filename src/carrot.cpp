#include "carrot.hpp"

std::string Carrot::symbol() {
  if(age == 0) {
    return "v";
  } else {
    return "V";
  }
}

void Carrot::endDay() {
  age += 1;
}
