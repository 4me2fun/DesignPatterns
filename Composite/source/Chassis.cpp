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
  return CompositeEquipment::power();
}

unsigned int Chassis::netPrice() {
  return CompositeEquipment::netPrice();
}

unsigned int Chassis::discountPrice() {
  return CompositeEquipment::discountPrice();
}


