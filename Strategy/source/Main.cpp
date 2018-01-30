#include "Composition.hpp"
#include "SimpleCompositor.hpp"
#include "TeXCompositor.hpp"
#include "ArrayCompositor.hpp"


int main() {
  composition::Composition *quick = new composition::Composition( new simplecompositor::SimpleCompositor() );
  composition::Composition *slick = new composition::Composition( new texcompositor::TeXCompositor() );
  composition::Composition *iconic = new composition::Composition( new arraycompositor::ArrayCompositor( 100 ) );

  return 0;
}
