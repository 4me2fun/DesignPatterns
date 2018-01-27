#include <iostream>

#include "CompositeEquipment.hpp"

using namespace compositeequipment;

CompositeEquipment::CompositeEquipment( const char *name ) :
  Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

CompositeEquipment::~CompositeEquipment() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int CompositeEquipment::Power() {
  return 56;
}

unsigned int CompositeEquipment::NetPrice() {
  return 13;
}

unsigned int CompositeEquipment::DiscountPrice() {
  return 56;
}

void CompositeEquipment::Add( Equipment *equipment ) {

}

void CompositeEquipment::Remove( Equipment *equipment ) {

}

