#include <iostream>

#include "Composition.hpp"
#include "SimpleCompositor.hpp"
#include "TeXCompositor.hpp"
#include "ArrayCompositor.hpp"


int main() {
  std::cout << "started 'Strategy' Design Pattern main program" << endl;

  composition::Composition *quick = new composition::Composition( new simplecompositor::SimpleCompositor() );
  quick->repair();
  composition::Composition *slick = new composition::Composition( new texcompositor::TeXCompositor() );
  slick->repair();
  composition::Composition *iconic = new composition::Composition( new arraycompositor::ArrayCompositor( 100 ) );
  iconic->repair();

  delete quick;
  delete slick;
  delete iconic;

  return 0;
}
