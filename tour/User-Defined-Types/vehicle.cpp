class vehicle {
private:
  int speed;
  double time;

public:
  virtual double distance(int &speed, double &time) = 0;
};
