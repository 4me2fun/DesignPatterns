#include <iostream>

#include "Column.hpp"

using namespace column;

namespace {
  static const char *CLASS_NAME = "Column::";
}

Column::Column() :
  glyph::Glyph() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

Column::~Column() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

void Column::draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

/*
  // TODO: below methods should be also implemented?
  void setFont( font::Font *font, glyphcontext::GlyphContext &glyphContext ) override;
  font::Font* getFont( glyphcontext::GlyphContext &glyphContext ) override;
  void first( glyphcontext::GlyphContext &glyphContext ) override;
  void next( glyphcontext::GlyphContext &glyphContext ) override;
  bool isDone( glyphcontext::GlyphContext &glyphContext ) override;
  Glyph* current( glyphcontext::GlyphContext &glyphContext ) override;

  void insert( Glyph *glyph, glyphcontext::GlyphContext &glyphContext ) override;
  void remove( glyphcontext::GlyphContext &glyphContext ) override;
*/

