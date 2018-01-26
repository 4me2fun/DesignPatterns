class Chassis : public CompositeEquipment {
public:
  Chassis( const char *name );
  virtual ~Chassis();

  virtual unsigned int Power();
  virtual unsigned int NetPrice();
  virtual unsigned int DiscountPrice();
};
