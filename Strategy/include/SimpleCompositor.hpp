#ifndef __SIMPLE_COMPOSITOR__
#define __SIMPLE_COMPOSITOR__

#include "Compositor.hpp"

namespace simplecompositor {

class SimpleCompositor : public compositor::Compositor {
public:
  explicit SimpleCompositor();
  virtual ~SimpleCompositor();

  virtual int compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] );
};

} // namespace simplecompositor

#endif // __SIMPLE_COMPOSITOR__
