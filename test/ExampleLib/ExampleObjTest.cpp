#include "gtest/gtest.h"
#include "ExampleLib/ExampleObj.hpp"

using namespace ExampleLib;

namespace {

class ExampleObjTest : public ::testing::Test {
 public:

  ExampleObj obj;

 protected:
  // You can remove any or all of the following functions if its body
  // is empty.

  ExampleObjTest() : obj(2) {
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
  }

  virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
  }
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

TEST_F(ExampleObjTest, IsFactorOfZeroIsZero) {
  EXPECT_EQ(obj.isFactor(0), true);
}

TEST_F(ExampleObjTest, IsFactorOfFactorIsTrue) {
  EXPECT_EQ(obj.isFactor(2), true);
}

TEST_F(ExampleObjTest, IsFactorOfMultipleIsTrue) {
  EXPECT_EQ(obj.isFactor(4), true);
}

}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
