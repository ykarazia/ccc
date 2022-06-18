#include "step_function.h"
int step_function( int var ) 
{
  int res = 0;
  if ( var < 0 )
    res = - 1;
  else if ( var > 0 )
    res = 1;
  else
    res = 0;

  return res;
}
