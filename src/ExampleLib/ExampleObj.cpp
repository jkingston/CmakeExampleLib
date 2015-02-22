#include "ExampleLib/ExampleObj.hpp"

using namespace ExampleLib;

ExampleObj::ExampleObj(int factor) {
  _factor = factor;
}

int ExampleObj::multiplyByFactor(int n) {
  return n * _factor;
}

bool ExampleObj::isFactor(int n) {
  return (n % _factor) == 0;
}
