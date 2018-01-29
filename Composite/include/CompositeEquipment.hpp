#include <list>

#include "Equipment.hpp"

namespace compositeequipment {

class CompositeEquipment : public equipment::Equipment {
public:
  virtual ~CompositeEquipment();

  virtual unsigned int power();
  virtual unsigned int netPrice();
  virtual unsigned int discountPrice();

  virtual void add( equipment::Equipment *equipment );
  virtual void remove( equipment::Equipment *equipment );

protected:
  CompositeEquipment( const char *name );

protected:
  std::list< equipment::Equipment* > m_equipment;
};

} // namespace compositeequipment
