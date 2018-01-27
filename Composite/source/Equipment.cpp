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

unsigned int Equipment::Power() {
 return 70;
}

unsigned int Equipment::NetPrice() {
  return 7;
}

unsigned int Equipment::DiscountPrice() {
  return 3;
}

void Equipment::Add( Equipment *equipment ) {

}

void Equipment::Remove( Equipment *equipment ) {

}

