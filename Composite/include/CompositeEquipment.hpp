class CompositeEquipment : public Equipment {
public:
  virtual ~CompositeEquipment();

  virtual Watt power();
  virtual Currency netPrice();
  virtual Currency discountPrice();

  virtual void add(Equipment*);
  virtual void remove(Equipment*);
  virtual Iterator<Equipment*>* createIterator();

protected:
  CompositeEquipment(const char*);

private:
  List<Equipment*> m_equipment;
};
