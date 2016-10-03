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

SCENARIO( "setters" ) {
	Complex obj(1,1);

	obj.setReal(10);
	obj.setImaginary(20);

	REQUIRE( obj.real() == 10 );
	REQUIRE( obj.imaginary() == 20 );
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

SCENARIO( "operator prefix ++" ) {
	Complex obj(1,1);

	Complex obj2 = ++obj;

	REQUIRE( obj.real() == 2 );
	REQUIRE( obj2.real() == 2 );
}

SCENARIO( "operator postfix ++" ) {
	Complex obj(1,1);

	Complex obj2 = obj++;

	REQUIRE( obj.real() == 2 );
	REQUIRE( obj2.real() == 1 );
}
