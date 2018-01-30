#include <iostream>

#include "GlyphContext.hpp"

using namespace glyphcontext;

namespace {
  static const char *CLASS_NAME = "GlyphContext::";
}

GlyphContext::GlyphContext() :
  m_index( 0 ),
  m_fonts( nullptr ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

GlyphContext::~GlyphContext() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  if ( nullptr != m_fonts ) {
    delete m_fonts;
  }
}

void GlyphContext::next( int step ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

void GlyphContext::insert( int quantity ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

font::Font* GlyphContext::getFont() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

void GlyphContext::setFont( font::Font *font, int span ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

