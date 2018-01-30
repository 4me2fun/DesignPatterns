#ifndef __GLYPH_FACTORY__
#define __GLYPH_FACTORY__

#include "Character.hpp"
#include "Row.hpp"
#include "Column.hpp"

#define NCHARCODES 128

namespace glyphfactory {

class GlyphFactory {
public:
  explicit GlyphFactory();
  virtual ~GlyphFactory();

  virtual character::Character* createCharacter( char charcode );
  virtual row::Row* createRow();
  virtual column::Column* createColumn();

private:
  character::Character *m_characters[NCHARCODES];
};

} // namespace glyphfactory

#endif // __GLYPH_FACTORY__
