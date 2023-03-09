#include <cstdlib>
#include <iostream>
#include "my_math.h"

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;

  std::vector<int> val_vec;
  val_vec.reserve(argc-1);
  for (int i = 1; i < argc; ++i)
    val_vec.push_back(std::atoi(argv[i]));

  std::cout << mm::sum(val_vec) << std::endl;

  return 0;
}
