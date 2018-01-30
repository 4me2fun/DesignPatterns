#include <iostream>

#include "GlyphFactory.hpp"

using namespace glyphfactory;

namespace {
  static const char *CLASS_NAME = "GlyphFactory::";
}

GlyphFactory::GlyphFactory() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  for ( int index = 0; index < NCHARCODES; ++index ) {
    m_characters[index] = 0;
  }
}

GlyphFactory::~GlyphFactory() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  for ( character::Character *ptr : m_characters ) {
    if ( nullptr != ptr ) {
      delete ptr;
    }
  }
}

character::Character* GlyphFactory::createCharacter( char charcode ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  if ( !m_characters[ charcode ] ) {
    m_characters[ charcode ] = new character::Character( charcode );
  }

  return m_characters[ charcode ];
}

row::Row* GlyphFactory::createRow() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  return new row::Row();
}

column::Column* GlyphFactory::createColumn() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  return new column::Column();
}

