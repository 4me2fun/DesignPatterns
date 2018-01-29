#include <iostream>

#include "FloppyDisk.hpp"

using namespace floppydisk;

FloppyDisk::FloppyDisk( const char *name ) :
  equipment::Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

FloppyDisk::~FloppyDisk() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int FloppyDisk::power() {
  return 45;
}

unsigned int FloppyDisk::netPrice() {
  return 35;
}

unsigned int FloppyDisk::discountPrice() {
  return 20;
}

