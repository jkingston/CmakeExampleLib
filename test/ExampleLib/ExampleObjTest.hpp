#include <cxxtest/TestSuite.h>
#include "ExampleLib/ExampleObj.hpp"

using namespace ExampleLib;

class ExampleObjTest : public CxxTest::TestSuite {
 public:
  void testMultiplyByFactor(void) {
    ExampleObj obj(2);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(5), 10);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(1), 2);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(0), 0);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(-1), -2);
    TS_ASSERT_EQUALS(obj.multiplyByFactor(-5), -10);
  }
};

