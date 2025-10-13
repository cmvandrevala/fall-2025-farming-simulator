#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/farm.hpp"
#include "../src/carrot.hpp"

TEST_CASE( "a farm can contain a single plot" ) {
  Farm farm(1, 1);
  REQUIRE( farm.numberOfRows() == 1 );
  REQUIRE( farm.numberOfColumns() == 1 );
  REQUIRE( farm.getSymbol(0, 0) == "@");
}

TEST_CASE( "a farm can have many plots" ) {
  Farm farm(2, 2);
  REQUIRE( farm.numberOfRows() == 2 );
  REQUIRE( farm.numberOfColumns() == 2 );
  REQUIRE( farm.getSymbol(0, 0) == "@");
  REQUIRE( farm.getSymbol(0, 1) == ".");
  REQUIRE( farm.getSymbol(1, 0) == ".");
  REQUIRE( farm.getSymbol(1, 1) == ".");
}

TEST_CASE( "a farm can different numbers of rows and columns" ) {
  Farm farm(3, 1);
  REQUIRE( farm.numberOfRows() == 3 );
  REQUIRE( farm.numberOfColumns() == 1 );
  REQUIRE( farm.getSymbol(0, 0) == "@");
  REQUIRE( farm.getSymbol(1, 0) == ".");
  REQUIRE( farm.getSymbol(2, 0) == ".");
}

TEST_CASE( "a farmer can plant a carrot in a farm" ) {
  Farm farm(3, 1);
  Carrot carrot;
  farm.plant(1, 0, &carrot);
  REQUIRE( farm.getSymbol(0, 0) == "@");
  REQUIRE( farm.getSymbol(1, 0) == "v");
  REQUIRE( farm.getSymbol(2, 0) == ".");
}

TEST_CASE( "each plot will evolve at the end of the day" ) {
  Farm farm(3, 1);
  Carrot carrot;
  farm.plant(1, 0, &carrot);
  farm.endDay();
  REQUIRE( farm.getSymbol(0, 0) == "@");
  REQUIRE( farm.getSymbol(1, 0) == "V");
  REQUIRE( farm.getSymbol(2, 0) == ".");
}

TEST_CASE( "a player can move to the right" ) {
  Farm farm(2, 2);
  farm.moveRight();
  REQUIRE( farm.getSymbol(0, 1) == "@");
}

TEST_CASE( "a player can move to the left" ) {
  Farm farm(2, 2);
  farm.moveRight();
  farm.moveLeft();
  REQUIRE( farm.getSymbol(0, 0) == "@");
}
