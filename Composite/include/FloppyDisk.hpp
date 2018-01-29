#include "Equipment.hpp"

namespace floppydisk {

class FloppyDisk : public equipment::Equipment {
public:
  FloppyDisk( const char *name );
  virtual ~FloppyDisk();

  virtual unsigned int power();
  virtual unsigned int netPrice();
  virtual unsigned int discountPrice();
};

} // namespace floppydisk
