#include "my_math.h"

namespace mm {

int sum(const std::vector<int> &integers) {
  auto sum = 0;
  for (auto i : integers)
    sum += i;
  return sum;
}

}  // namespace mm
