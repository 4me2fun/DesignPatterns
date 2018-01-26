#include <Chassis.hpp>
#include <FloppyDisk.hpp>

int main () {
  Chassis *chassis = new Chassis( "PC board" );
  chassis->Add( new FloppyDisk( "Floppy disk 3.5 inch" ) );

  std::cout << "netto discount equals " << chassis->NetPrice() << std::endl;

  return 0;
}
