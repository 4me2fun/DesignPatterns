#ifndef __FONT__
#define __FONT__

namespace font {

class Font {
public:
  explicit Font( const char *name );

  virtual ~Font();

private:
  const char *m_name;
};

} // namespace font

#endif // __FONT__
