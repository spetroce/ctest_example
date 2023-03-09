#include "my_math.h"
#include <vector>

int main() {
  auto integers = {1, 2, 3, 4, 5};
  return mm::sum(integers) == 15 ? 0 : 1;
}
