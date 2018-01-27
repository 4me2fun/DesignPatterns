#include <iostream>

#include "Chassis.hpp"

using namespace chassis;

Chassis::Chassis( const char *name ) :
  CompositeEquipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

Chassis::~Chassis() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int Chassis::Power() {
  return 3;
}

unsigned int Chassis::NetPrice() {
  return 8;
}

unsigned int Chassis::DiscountPrice() {
  return 6;
}


