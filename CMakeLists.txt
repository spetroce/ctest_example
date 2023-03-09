cmake_minimum_required(VERSION 3.14)
project(ctest_example LANGUAGES CXX)

include(CTest)

add_library(my_math my_math.cpp)

add_executable(sum_int sum_int.cpp)
target_link_libraries(sum_int PRIVATE my_math)

add_executable(sum_int_test sum_int_test.cpp)
target_link_libraries(sum_int_test PRIVATE my_math)

if (BUILD_TESTING)
  # Here we create a test for the dedicated sum_int_test.cpp executable which
  # must return 0 for passing or 1 for failing.
  add_test(
    NAME IntegerSumTest
    COMMAND sum_int_test
  )

  # Here is an example of calling the user application sum_int.cpp with input
  # arguments and then interrogating the stdout output for the expected string
  # output from the program running. IntegerSumTest is probably the preffered
  # method, but this just shows another way of doing things.
  add_test(
    NAME IntegerSumAppTest
    COMMAND sum_int 1 2 3 4 5
  )
  set_tests_properties(IntegerSumAppTest PROPERTIES PASS_REGULAR_EXPRESSION "15")
endif()
