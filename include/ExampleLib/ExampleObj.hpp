#ifndef _ExampleLib_ExampleObj_hpp_GUARD
#define _ExampleLib_ExampleObj_hpp_GUARD

namespace ExampleLib {

class ExampleObj {
 public:
  ExampleObj(int factor);
  int multiplyByFactor(int);

 private:
  int _factor;
};

} // ExampleLib

#endif // _ExampleLib_ExampleObj_hpp_GUARD
