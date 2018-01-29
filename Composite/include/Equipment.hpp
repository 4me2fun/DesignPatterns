namespace equipment {

class Equipment {
public:
  virtual ~Equipment();

  const char* name() { return m_name; }

  virtual unsigned int power();
  virtual unsigned int netPrice();
  virtual unsigned int discountPrice();

  virtual void add( Equipment *equipment );
  virtual void remove( Equipment *equipment );

protected:
  Equipment( const char *name );

protected:
  const char *m_name;
};

} // namespace equipment
