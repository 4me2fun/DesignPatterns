#ifndef __CHASSIS__
#define __CHASSIS__

#include "CompositeEquipment.hpp"

namespace chassis {

class Chassis : public compositeequipment::CompositeEquipment {
public:
  Chassis( const char *name );
  virtual ~Chassis();

  virtual unsigned int power();
  virtual unsigned int netPrice();
  virtual unsigned int discountPrice();
};

} // namespace chassis

#endif // __CHASSIS__
