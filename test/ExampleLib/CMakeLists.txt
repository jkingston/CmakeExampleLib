# Add unit tests
add_executable(ExampleObjTest ExampleObjTest.cpp)

include_directories(ExampleObjTest
  ${INCLUDE_DIR}
  ${GTEST_INCLUDE_DIR}
)

target_link_libraries(ExampleObjTest
  ExampleLib
  gtest
)

add_test(NAME ExampleObjTest COMMAND ExampleObjTest)
