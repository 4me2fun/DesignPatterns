#ifndef __ARRAY_COMPOSITOR__
#define __ARRAY_COMPOSITOR__

#include "Compositor.hpp"

namespace arraycompositor {

class ArrayCompositor final : public compositor::Compositor {
public:
  explicit ArrayCompositor( int interval );
  virtual ~ArrayCompositor();

  int compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) override;
};

} // namespace arraycompositor

#endif // __ARRAY_COMPOSITOR__
