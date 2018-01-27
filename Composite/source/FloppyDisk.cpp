#include <iostream>

#include "FloppyDisk.hpp"

using namespace floppydisk;

FloppyDisk::FloppyDisk( const char *name ) :
  Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

FloppyDisk::~FloppyDisk() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int FloppyDisk::Power() {
  return 45;
}

unsigned int FloppyDisk::NetPrice() {
  return 23;
}

unsigned int FloppyDisk::DiscountPrice() {
  return 20;
}

