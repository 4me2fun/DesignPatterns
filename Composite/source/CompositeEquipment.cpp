#include <CompositeEquipment.hpp>

CompositeEquipment::~CompositeEquipment() {

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

Iterator< Equipment* >* CompositeEquipment::CreateIterator() {

}

CompositeEquipment::CompositeEquipment( const char *name ) {
  m_name = name;
}

