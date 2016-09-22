#include <Complex.cpp>
#include <catch.hpp>
#include <fstream>

SCENARIO( "default constructor", "ctor" ) {
	Complex value;
	REQUIRE( value.real() == 0 );
  REQUIRE( value.imaginary() == 0 );
}

SCENARIO( "constructor with parameters" ) {
	Complex obj(1, 2);
	REQUIRE( obj.real() == 1 );
	REQUIRE( obj.imaginary() == 2 );
}

SCENARIO( "operator +" ) {
	Complex obj(1, 2);
	Complex obj2(-5, 2);
	Complex sum = obj + obj2;
	REQUIRE( sum.real() == -4 );
	REQUIRE( sum.imaginary() == 4 );
}

SCENARIO( "operator -" ) {
	Complex obj(1, 2);
	Complex obj2(-5, 2);
	Complex sum = obj - obj2;
	REQUIRE( sum.real() == 6 );
	REQUIRE( sum.imaginary() == 0 );
}
