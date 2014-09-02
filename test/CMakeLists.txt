# Set up testing

find_package(CxxTest)

if (${CXXTEST_FOUND})

  enable_testing()

  # Include the CxxTest library headers
  include_directories(${CXXTEST_INCLUDE_DIR})

  # Add directories containing tests
  add_subdirectory(ExampleLib)

endif()