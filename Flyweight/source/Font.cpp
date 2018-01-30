#include <iostream>

#include "Font.hpp"

using namespace font;

namespace {
  static const char *CLASS_NAME = "Font::";
}

Font::Font( const char *name ) :
  m_name( name ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

Font::~Font() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

