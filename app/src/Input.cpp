#include "include/Input.hpp"

using namespace botvina;

Input::Input(std::istream& in)
  : inputStream(in),
    currentChar('\0') {
  inputStream >> std::noskipws; // no skip whitespaces
}

char Input::getCurrentChar() const {
  return currentChar;
}

int Input::getAbsPos() const {
  return inputStream.tellg();
}

char Input::peekNextChar() {
  return inputStream.peek();
}

char Input::getNextChar() {
  return currentChar = (char)inputStream.get();
}
