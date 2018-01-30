#include <iostream>

#include "GlyphContext.hpp"
#include "Font.hpp"

int main() {
  std::cout << "started 'Flyweight' Design Pattern main program" << std::endl;

  glyphcontext::GlyphContext glyphContext;
  font::Font *times12 = new font::Font( "Times-Roman-12" );
  font::Font *timesItalic12 = new font::Font( "Times-Italic-12" );

  glyphContext.setFont( times12, 6 );

  glyphContext.insert( 6 );
  glyphContext.setFont( timesItalic12, 6 );

  return 0;
}
