#ifndef __ROW__
#define __ROW__

#include "Glyph.hpp"

namespace row {

class Row final : public glyph::Glyph {
public:
  explicit Row();

  virtual ~Row();

  void draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) override;

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
};

} // namespace row

#endif // __ROW__
