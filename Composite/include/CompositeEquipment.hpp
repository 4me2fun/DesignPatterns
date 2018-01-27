#include <list>

#include "Equipment.hpp"

namespace compositeequipment {

class CompositeEquipment : public Equipment {
public:
  virtual ~CompositeEquipment();

  virtual unsigned int Power();
  virtual unsigned int NetPrice();
  virtual unsigned int DiscountPrice();

  virtual void Add( Equipment *equipment );
  virtual void Remove( Equipment *equipment );

protected:
  CompositeEquipment( const char *name );

protected:
  std::list< Equipment* > m_equipment;
};

} // namespace compositeequipment
