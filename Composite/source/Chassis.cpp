#include <iostream>

#include "Chassis.hpp"

using namespace chassis;

Chassis::Chassis( const char *name ) :
  compositeequipment::CompositeEquipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

Chassis::~Chassis() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int Chassis::power() {
  return 3;
}

unsigned int Chassis::netPrice() {
  return 8;
}

unsigned int Chassis::discountPrice() {
  return 6;
}


