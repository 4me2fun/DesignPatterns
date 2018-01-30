#ifndef __SIMPLE_COMPOSITOR__
#define __SIMPLE_COMPOSITOR__

#include "Compositor.hpp"

namespace simplecompositor {

class SimpleCompositor final : public compositor::Compositor {
public:
  explicit SimpleCompositor();
  virtual ~SimpleCompositor();

  int compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) override;
};

} // namespace simplecompositor

#endif // __SIMPLE_COMPOSITOR__
