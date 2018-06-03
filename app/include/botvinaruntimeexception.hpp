#ifndef BOTVINARUNTIMEEXCEPTION_HPP
#define BOTVINARUNTIMEEXCEPTION_HPP

#include <Exceptions.h>

class BotvinaRuntimeException : public std::runtime_error {
public:
  BotvinaRuntimeException(const std::string& msg)
    : std::runtime_error(msg) {
  }
};

#endif // BOTVINARUNTIMEEXCEPTION_HPP
