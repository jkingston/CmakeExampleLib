#include "gtest/gtest.h"
#include "ExampleLib/ExampleObj.hpp"

using namespace ExampleLib;

namespace {

class ExampleObjTest : public ::testing::Test {
 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  ExampleObjTest() {
    // You can do set-up work for each test here.
  }

  virtual ~ExampleObjTest() {
    // You can do clean-up work that doesn't throw exceptions here.
  }

  // If the constructor and destructor are not enough for setting up
  // and cleaning up each test, you can define the following methods:

  virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
    obj = ExampleObj(2);
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }

 public:

  // this is our test object
  ExampleObj obj = ExampleObj(2);
};

TEST_F(ExampleObjTest, MultiplyByPositive) {
  EXPECT_EQ(obj.multiplyByFactor(1), 2);
  EXPECT_EQ(obj.multiplyByFactor(5), 10);
}

TEST_F(ExampleObjTest, MultiplyByZero) {
  EXPECT_EQ(obj.multiplyByFactor(0), 0);
}

TEST_F(ExampleObjTest, MultiplyByNegative) {
  EXPECT_EQ(obj.multiplyByFactor(-1), -2);
  EXPECT_EQ(obj.multiplyByFactor(-5), -10);
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
