class Singleton{
public:
  static Singleton* getInstance();

private:
  Singleton();
    
  static Singleton* _singletonptr;
};
