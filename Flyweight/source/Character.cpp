#include <iostream>

#include "Character.hpp"

using namespace character;

namespace {
  static const char *CLASS_NAME = "Character::";
}

Character::Character( char charcode ) :
  glyph::Glyph(),
  m_charcode( charcode ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "(), charcode=" << charcode << std::endl;
}

Character::~Character() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

void Character::draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

