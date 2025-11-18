struct Car {
  int pos;
  double time;
};

class Solution {
 public:
  int carFleet(int target, vector<int>& position, vector<int>& speed) {
    int ans = 0;
    vector<Car> cars(position.size());

    for (int i = 0; i < position.size(); ++i)
      cars[i] = {position[i], (double)(target - position[i]) / speed[i]};

    ranges::sort(cars, ranges::greater{},
                 [](const Car& car) { return car.pos; });

    double maxTime = 0;

    for (const Car& car : cars)
      if (car.time > maxTime) {
        maxTime = car.time;
        ++ans;
      }

    return ans;
  }
};