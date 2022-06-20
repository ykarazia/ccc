#include "2_1.h"
#include <iostream>
using namespace std;

int main()
{
  int a = 5;
  int b = 2;
  Calculator c0{op::Add};


  cout << "Calculator returned " << c0.calculate(a,b) << " from inputs " << a << " " << b << endl;

  c0.set_op(op::Subtract);
  cout << "Calculator returned " << c0.calculate(a,b) << " from inputs " << a << " " << b << endl;

  c0.set_op(op::Multiply);
  cout << "Calculator returned " << c0.calculate(a,b) << " from inputs " << a << " " << b << endl;

  c0.set_op(op::Divide);
  cout << "Calculator returned " << c0.calculate(a,b) << " from inputs " << a << " " << b << endl;
  return 0;
}
