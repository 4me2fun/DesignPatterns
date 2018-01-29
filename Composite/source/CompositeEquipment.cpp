#include <iostream>

#include "CompositeEquipment.hpp"

using namespace compositeequipment;

CompositeEquipment::CompositeEquipment( const char *name ) :
  equipment::Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

CompositeEquipment::~CompositeEquipment() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int CompositeEquipment::power() {
  return 56;
}

unsigned int CompositeEquipment::netPrice() {
  return 13;
}

unsigned int CompositeEquipment::discountPrice() {
  return 56;
}

void CompositeEquipment::add( equipment::Equipment *equipment ) {

}

void CompositeEquipment::remove( equipment::Equipment *equipment ) {

}

