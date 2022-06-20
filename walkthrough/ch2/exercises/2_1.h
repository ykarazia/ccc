enum class op { Add, Subtract, Multiply, Divide };

struct Calculator {

  op operation;

  
  Calculator( op in )
  {
    set_op(in);
  }

  public:
  int calculate (int a, int b) {
    int res;
    switch(operation)
    {
      case(op::Add) : {
                    res = a+b;
                  }; break;
      case(op::Subtract) : {
                    res = a-b;
                  }; break;
      case(op::Multiply) : {
                    res = a*b;
                  }; break;
      case(op::Divide) : {
                    res = a/b;
                  }; break;
    }

    return res;
  }

  void set_op( op in ) {
    operation = in;
  }

  op get_op(void)
  {
    return operation;
  }
};

