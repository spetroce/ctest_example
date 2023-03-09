#include "my_math.h"

namespace mm {

int sum(const std::vector<int> &integers) {
  int sum = 0;
  for (int i : integers)
    sum += i;
  return sum;
}

}  // namespace mm
