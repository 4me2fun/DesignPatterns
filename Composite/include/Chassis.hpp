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
