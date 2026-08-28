#include <iostream>

#include "vehicle.cpp"

class car : public vehicle {
public:
  int speed;
  double time;

  car(int sped, double tme) : speed{sped}, time{tme} {};
  double distance(int &speed, double &time) override { return speed * time; }
};

int main() {
  car nissan(10, 2.3);
  std::cout << nissan.distance(nissan.speed, nissan.time) << "\n";
}
