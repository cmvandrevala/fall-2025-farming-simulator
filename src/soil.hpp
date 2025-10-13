#pragma once

#include <string>

#include "plot.hpp"

class Soil : public Plot {
  public:
    explicit Soil();
    std::string symbol() override;
};
