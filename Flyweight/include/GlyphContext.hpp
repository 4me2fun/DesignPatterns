#ifndef __GLYPH_CONTEXT__
#define __GLYPH_CONTEXT__

#include "Window.hpp"
#include "Font.hpp"
#include "BTree.hpp"

namespace glyphcontext {

class GlyphContext {
public:
  explicit GlyphContext();

  virtual ~GlyphContext();

  virtual void next( int step = 1 );
  virtual void insert( int quantity = 1 );

  virtual font::Font* getFont();
  virtual void setFont( font::Font *font, int span = 1 );

private:
  int m_index;
  btree::BTree *m_fonts;
};

} // namespace glyphcontext

#endif // __GLYPH_CONTEXT__
