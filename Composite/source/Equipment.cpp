#include <iostream>

#include "Equipment.hpp"

using namespace equipment;

Equipment::Equipment( const char *name ) :
  m_name( name ) {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

Equipment::~Equipment() {
  std::cout << __FUNCTION__ << "()" << std::endl;
}

unsigned int Equipment::power() {
 return 9;
}

unsigned int Equipment::netPrice() {
  return 10;
}

unsigned int Equipment::discountPrice() {
  return 3;
}

void Equipment::add( Equipment *equipment ) {

}

void Equipment::remove( Equipment *equipment ) {

}

