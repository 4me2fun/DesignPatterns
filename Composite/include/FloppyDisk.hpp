class FloppyDisk : public Equipment {
public:
  FloppyDisk( const char *name );
  virtual ~FloppyDisk();

  virtual unsigned int Power();
  virtual unsigned int NetPrice();
  virtual unsigned int DiscountPrice();
};
