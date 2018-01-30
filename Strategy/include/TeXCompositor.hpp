#ifndef __TEX_COMPOSITOR__
#define __TEX_COMPOSITOR__

#include "Compositor.hpp"

namespace texcompositor {

class TeXCompositor : public compositor::Compositor {
public:
  explicit TeXCompositor();
  virtual ~TeXCompositor();

  virtual int compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] );
};

} // namespace texcompositor

#endif // __TEX_COMPOSITOR__
