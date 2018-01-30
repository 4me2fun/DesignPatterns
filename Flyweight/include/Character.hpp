#ifndef __CHARACTER__
#define __CHARACTER__

#include "Glyph.hpp"

namespace character {

class Character final : public glyph::Glyph {
public:
  explicit Character( char charcode );

  virtual ~Character();

  void draw( window::Window *window, glyphcontext::GlyphContext &glyphContext ) override;

private:
  char m_charcode;
};

} // namespace character

#endif // __CHARACTER__
