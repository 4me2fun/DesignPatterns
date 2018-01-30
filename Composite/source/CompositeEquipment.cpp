#include <iostream>

#include "CompositeEquipment.hpp"

using namespace compositeequipment;

CompositeEquipment::CompositeEquipment( const char *name ) :
  equipment::Equipment( name ) {

  std::cout << __FUNCTION__ << "()" << std::endl;
}

CompositeEquipment::~CompositeEquipment() {
  std::cout << __FUNCTION__ << "()" << std::endl;

  for ( Equipment *ptr : m_equipment )
  {
    delete ptr;
  }

  while ( !m_equipment.empty() )
  {
    m_equipment.pop_back();
  }

  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
}

unsigned int CompositeEquipment::power() {
  unsigned int sumOfAllPower = 0;

  for ( Equipment *ptr : m_equipment )
  {
    sumOfAllPower += ptr->power();
  }

  return sumOfAllPower;
}

unsigned int CompositeEquipment::netPrice() {
  unsigned int sumOfAllNetPrice = 0;

  for ( Equipment *ptr : m_equipment )
  {
    sumOfAllNetPrice += ptr->netPrice();
    std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), netPrice=" << ptr->netPrice() << std::endl;
  }

  return sumOfAllNetPrice;
}

unsigned int CompositeEquipment::discountPrice() {
  unsigned int sumOfAllDiscountPrice = 0;

  for ( Equipment *ptr : m_equipment )
  {
    sumOfAllDiscountPrice += ptr->discountPrice();
  }

  return sumOfAllDiscountPrice;
}

void CompositeEquipment::add( equipment::Equipment *equipment ) {
  m_equipment.push_back( equipment );
  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
}

void CompositeEquipment::remove( equipment::Equipment *equipment ) {
  m_equipment.remove(equipment);
  std::cout << "CompositeEquipment::" << __FUNCTION__ << "(), size=" << m_equipment.size() << std::endl;
}

