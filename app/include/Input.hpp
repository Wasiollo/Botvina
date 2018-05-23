#ifndef INPUT_HPP
#define INPUT_HPP

#include <iostream>

namespace botvina {

class Input {
public:
  Input(std::istream& in = std::cin);

  char getCurrentChar() const;
  int getAbsPos() const;
  char peekNextChar();
  char getNextChar();

private:
  std::istream& inputStream;
  char currentChar;
};

} //botvina

#endif // INPUT_HPP
