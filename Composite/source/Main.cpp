#include <iostream>

#include "Chassis.hpp"
#include "FloppyDisk.hpp"

int main () {
  std::cout << "started 'Composite' Design Pattern main program" << std::endl;

//  equipment::Equipment *equipment = new floppydisk::FloppyDisk( "Floppy disk 3.5 inch" );
//  delete equipment;


//  floppydisk::FloppyDisk *floppyDisk = new floppydisk::FloppyDisk( "Floppy disk 3.5 inch" );

  chassis::Chassis *chassis = new chassis::Chassis( "PC board" );
  chassis->add( new floppydisk::FloppyDisk( "Floppy disk 3.5 inch" ) );
  chassis->add( new floppydisk::FloppyDisk( "Floppy disk 2.5 inch" ) );

//  chassis->add( floppyDisk );
//  chassis->remove( floppyDisk );
  
  std::cout << "netto discount equals " << chassis->netPrice() << std::endl;

//  delete floppyDisk;
  delete chassis;

  return 0;
}
