class FloppyDisk : public Equipment {
public:
  FloppyDisk(const char*);
  virtual ~FloppyDisk();

  virtual Watt power();
  virtual Currency netPrice();
  virtual Currency discountPrice();
};
