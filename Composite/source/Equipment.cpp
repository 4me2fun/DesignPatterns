#include <Equipment.hpp>

Equipment::~Equipment() {

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

Iterator< Equipment* >* Equipment::CreateIterator() {

}

Equipment::Equipment( const char *name ) {
  m_name = name;
}

