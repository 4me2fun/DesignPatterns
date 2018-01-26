class Equipment {
public:
  virtual ~Equipment();

  const char* Name() { return m_name; }

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();

  virtual void Add( Equipment* );
  virtual void Remove( Equipment* );
  virtual Iterator< Equipment* >* CreateIterator();

protected:
  Equipment( const char* );

private:
  const char *m_name;
};
