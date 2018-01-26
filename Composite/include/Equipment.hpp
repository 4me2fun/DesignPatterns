class Equipment {
public:
  virtual ~Equipment();

  const char* Name() { return m_name; }

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();

  virtual void Add( Equipment *equipment );
  virtual void Remove( Equipment *equipment );
  virtual Iterator< Equipment* >* CreateIterator();

protected:
  Equipment( const char *name );

private:
  const char *m_name;
};
