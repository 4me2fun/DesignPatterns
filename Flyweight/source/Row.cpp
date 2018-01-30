#include <iostream>

#include "Row.hpp"

using namespace row;

namespace {
  static const char *CLASS_NAME = "Row::";
}

Row::Row() :
  glyph::Glyph() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

Row::~Row() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

void Row::draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) {
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

