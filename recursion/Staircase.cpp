#include <iostream>
#include <stdlib.h>



int staircase(int n)
{
  if(n == 1)
    return 1;
  if(n == 2)
    return 2;
  if(n == 3)
    return 4;
  return staircase(n-1) + staircase(n-2) + staircase(n-3);
}

int main()
{
  std::cout << staircase(5) << std::endl;
  return 0;
}
