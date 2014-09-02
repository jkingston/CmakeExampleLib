#include <cxxtest/TestSuite.h>
#include "ExampleLib/ExampleObj.hpp"

using namespace ExampleLib;

class ExampleObjTest : public CxxTest::TestSuite {

private:

  // this is our test object
  ExampleObj obj = ExampleObj(2);

public:

  void testMultiplyByPositive() {
    TS_ASSERT_EQUALS(obj.multiplyByFactor(1), 2);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(5), 10);
  }

  void testMultiplyByZero() {
    TS_ASSERT_EQUALS(obj.multiplyByFactor(0), 0);
  }

  void testMultiplyByNegative() {
    TS_ASSERT_EQUALS(obj.multiplyByFactor(-1), -2);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(-5), -10);
  }

};

