#ifndef __COMPOSITION__
#define __COMPOSITION__

#include "Compositor.hpp"

namespace composition {

class Composition {
public:
  explicit Composition( compositor::Compositor *compositor );
  virtual ~Composition();

  void repair();

private:
  compositor::Compositor *m_compositor;
  int m_lineWidth;
  int m_lineCount;
};

} // namespace composition

#endif // __COMPOSITION__
