#ifndef __GLYPH__
#define __GLYPH__

#include "Window.hpp"
#include "GlyphContext.hpp"
#include "Font.hpp"

namespace glyph {

class Glyph {
public:
  virtual ~Glyph() {};

  virtual void draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) = 0;
/*
  virtual void setFont( font::Font *font, glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual font::Font* getFont( glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual void first( glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual void next( glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual bool isDone( glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual Glyph* current( glyphcontext::GlyphContext &glyphContext ) = 0;

  virtual void insert( Glyph *glyph, glyphcontext::GlyphContext &glyphContext ) = 0;
  virtual void remove( glyphcontext::GlyphContext &glyphContext ) = 0;
*/
protected:
  Glyph() {};
};

} // namespace glyph

#endif // __GLYPH__
