cmake_minimum_required(VERSION 3.14)
project(ctest_example LANGUAGES CXX)

include(CTest)

add_library(my_math my_math.cpp)

add_executable(sum_int sum_int.cpp)
target_link_libraries(sum_int PRIVATE my_math)

add_executable(sum_int_test sum_int_test.cpp)
target_link_libraries(sum_int_test PRIVATE my_math)

if (BUILD_TESTING)
  add_test(
    NAME sum_int_test
    COMMAND $<TARGET_FILE:sum_int_test>
    WORKING_DIRECTORY "${CMAKE_CURRENT_LIST_DIR}"
  )
endif()
