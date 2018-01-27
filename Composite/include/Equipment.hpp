namespace equipment {

class Equipment {
public:
  virtual ~Equipment();

  const char* Name() { return m_name; }

  virtual unsigned int Power();
  virtual unsigned int NetPrice();
  virtual unsigned int DiscountPrice();

  virtual void Add( Equipment *equipment );
  virtual void Remove( Equipment *equipment );

protected:
  Equipment( const char *name );

protected:
  const char *m_name;
};

} // namespace equipment
