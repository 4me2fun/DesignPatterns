#include <iostream>

#include "CompositeEquipment.hpp"

using namespace compositeequipment;

CompositeEquipment::CompositeEquipment( const char *name ) :
  equipment::Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

CompositeEquipment::~CompositeEquipment() {
  std::cout << __FUNCTION__ << "()" << std::endl;
  // TODO: remove all members using remove()

  while ( !m_equipment.empty() )
  {
    m_equipment.pop_back();
  }
  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
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
  m_equipment.push_back( equipment );
  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
}

void CompositeEquipment::remove( equipment::Equipment *equipment ) {
  m_equipment.remove(equipment);
  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
}

