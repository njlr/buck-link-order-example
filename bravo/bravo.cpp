#include <bravo/bravo.hpp>
#include <string>

std::string alpha(); // Will be linked in

std::string bravo() {
  return alpha() + "bravo";
}
