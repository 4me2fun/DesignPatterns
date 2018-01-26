class FloppyDisk : public Equipment {
public:
  FloppyDisk( const char *name );
  virtual ~FloppyDisk();

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();
};
