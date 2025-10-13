#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/carrot.hpp"

TEST_CASE( "carrot has a v as its symbol when it is a seedling" ) {
  Carrot carrot;
  REQUIRE( carrot.symbol() == "v" );
}

TEST_CASE( "carrot has a V as its symbol after the day ends" ) {
  Carrot carrot;
  carrot.endDay();
  REQUIRE( carrot.symbol() == "V" );
}
