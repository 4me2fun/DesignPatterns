#ifndef __GLYPH__
#define __GLYPH__

#include "Window.hpp"
#include "GlyphContext.hpp"
#include "Font.hpp"

namespace glyph {

class Glyph {
public:
  virtual ~Glyph() {};

  virtual void draw( window::Window *window, glyphcontext::GlyphContext &glyphContext );

  virtual void setFont( font::Font *font, glyphcontext::GlyphContext &glyphContext );
  virtual font::Font* getFont( glyphcontext::GlyphContext &glyphContext );
  virtual void first( glyphcontext::GlyphContext &glyphContext );
  virtual void next( glyphcontext::GlyphContext &glyphContext );
  virtual bool isDone( glyphcontext::GlyphContext &glyphContext );
  virtual Glyph* current( glyphcontext::GlyphContext &glyphContext );

  virtual void insert( Glyph *glyph, glyphcontext::GlyphContext &glyphContext );
  virtual void remove( glyphcontext::GlyphContext &glyphContext );

protected:
  Glyph() {};
};

} // namespace glyph

#endif // __GLYPH__
