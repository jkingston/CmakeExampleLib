# Add unit tests
CXXTEST_ADD_TEST(ExampleObjTest ExampleObjTest.cpp ${CMAKE_CURRENT_SOURCE_DIR}/ExampleObjTest.hpp)

target_link_libraries(ExampleObjTest
  ExampleLib
)
