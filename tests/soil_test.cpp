#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/soil.hpp"

TEST_CASE( "soil has a dot as its symbol" ) {
  Soil soil;
  REQUIRE( soil.symbol() == "." );
}
