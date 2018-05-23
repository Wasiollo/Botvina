#include <sstream>

#include "include/Input.hpp"
#include "catch.hpp"

TEST_CASE( "INPUT TESTS" )
{
  std::istringstream iss("abc def;l.p!,");
  botvina::Input input(iss);

  REQUIRE( input.getNextChar() == 'a' );

  REQUIRE( input.getNextChar() == 'b' );

  REQUIRE( input.getNextChar() == 'c' );

  REQUIRE( input.getNextChar() == ' ' );

  REQUIRE( input.getNextChar() == 'd' );

  REQUIRE( input.getNextChar() == 'e' );

  REQUIRE( input.getNextChar() == 'f' );

  REQUIRE( input.getNextChar() == ';' );

  REQUIRE( input.getNextChar() == 'l' );

  REQUIRE( input.getNextChar() == '.' );

  REQUIRE( input.getNextChar() == 'p' );

  REQUIRE( input.getNextChar() == '!' );

  REQUIRE( input.getNextChar() == ',' );
}
