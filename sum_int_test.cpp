#include "my_math.h"


int main() {
  std::vector<int> integers = {1, 2, 3, 4, 5};
  return mm::sum(integers) == 15 ? 0 : 1;
}
