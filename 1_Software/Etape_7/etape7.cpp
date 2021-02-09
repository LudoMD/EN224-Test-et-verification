#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "pgcd.h"

TEST_CASE( "pgcd correct", "[pgcd1]" ) {

    REQUIRE( (PGCD(555,55)==5); //a>b
    REQUIRE( PGCD(12645,65535)==15 );//a<b
    REQUIRE( PGCD(65535,65535)==65535 );//a=b
}

TEST_CASE( "pgcd avec 0", "[pgcd2]" ) {

    REQUIRE(PGCD(0,55)==55);
    REQUIRE(PGCD(65535,0)==65535);
    REQUIRE(PGCD(0,0)==0);
}