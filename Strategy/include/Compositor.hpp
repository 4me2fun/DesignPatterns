#ifndef __COMPOSITOR__
#define __COMPOSITOR__

namespace compositor {

class Compositor {
public:
  virtual ~Compositor() {};

  virtual int compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) = 0;

protected:
  Compositor() {};
};

} // namespace compositor

#endif // __COMPOSITOR__
