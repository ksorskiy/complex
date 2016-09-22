#include <Complex.cpp>
#include <catch.hpp>
#include <fstream>

SCENARIO( "default constructor", "ctor" ) {
	Complex value;
	REQUIRE( value.real() == 0 );
  REQUIRE( value.imaginary() == 0 );
}

SCENARIO( "constructor" ) {
	Complex obj(1, 2);
	REQUIRE( obj.real() == 1 );
	REQUIRE( obj.imaginary() == 2 );
}
