#include <Chassis.hpp>

Chassis::Chassis( const char *name ) {
  m_name = name;
}

Chassis::~Chassis() {

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


