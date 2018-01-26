#include <FloppyDisk.hpp>

FloppyDisk::FloppyDisk( const char *name ) {
  m_name = name;
}

FloppyDisk::~FloppyDisk() {

}

unsigned int FloppyDisk::Power() {
  return 45;
}

unsigned int FloppyDisk::NetPrice() {
  return 23;
}

unsigned int FloppyDisk::DiscountPrice() {
  return 20;
}

