#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/farm.hpp"

TEST_CASE( "a farm can contain a single plot" ) {
  Farm farm(1, 1);
  REQUIRE( farm.numberOfRows() == 1 );
  REQUIRE( farm.numberOfColumns() == 1 );
  REQUIRE( farm.getSymbol(0, 0) == ".");
}

TEST_CASE( "a farm can have many plots" ) {
  Farm farm(2, 2);
  REQUIRE( farm.numberOfRows() == 2 );
  REQUIRE( farm.numberOfColumns() == 2 );
  REQUIRE( farm.getSymbol(0, 0) == ".");
  REQUIRE( farm.getSymbol(0, 1) == ".");
  REQUIRE( farm.getSymbol(1, 0) == ".");
  REQUIRE( farm.getSymbol(1, 1) == ".");
}

TEST_CASE( "a farm can different numbers of rows and columns" ) {
  Farm farm(3, 1);
  REQUIRE( farm.numberOfRows() == 3 );
  REQUIRE( farm.numberOfColumns() == 1 );
  REQUIRE( farm.getSymbol(0, 0) == ".");
  REQUIRE( farm.getSymbol(1, 0) == ".");
  REQUIRE( farm.getSymbol(2, 0) == ".");
}
