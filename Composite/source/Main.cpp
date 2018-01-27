#include <iostream>

#include "Chassis.hpp"
#include "FloppyDisk.hpp"

int main () {
  std::cout << __FUNCTION__ << " program started" << std::endl;

//  FloppyDisk *floppyDisk = new FloppyDisk( "Floppy disk 3.5 inch" );

  Chassis *chassis = new Chassis( "PC board" );
//  chassis->Add( new FloppyDisk( "Floppy disk 3.5 inch" ) );

  std::cout << "netto discount equals " << chassis->NetPrice() << std::endl;

//  delete floppyDisk;
  delete chassis;

  return 0;
}