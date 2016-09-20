#include <Complex.cpp>
#include <catch.hpp>
#include <fstream>

SCENARIO( "default constructor", "ctor" ) {
	Complex value;
	REQUIRE( value.real() == 0 );
  REQUIRE( value.imaginary() == 0 );
}
