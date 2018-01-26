class Chassis : public CompositeEquipment {
public:
  Chassis( const char *name );
  virtual ~Chassis();

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();
};
