class CompositeEquipment : public Equipment {
public:
  virtual ~CompositeEquipment();

  virtual unsigned int Power();
  virtual unsigned int NetPrice();
  virtual unsigned int DiscountPrice();

  virtual void Add( Equipment *equipment );
  virtual void Remove( Equipment *equipment );
  virtual Iterator< Equipment* >* CreateIterator();

protected:
  CompositeEquipment( const char *name );

private:
  List< Equipment* > m_equipment;
};
