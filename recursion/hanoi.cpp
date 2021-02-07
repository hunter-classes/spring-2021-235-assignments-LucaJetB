#include <iostream>

void hanoi(int n, char src, char dst, char tmp)
{
  if(n == 1)
  {
    std::cout << "Move disk 1 from A to B" << std::endl;
    return;
  }
  hanoi(n-1, src, dst, tmp);
  std::cout << "Move disk " << n << " from " << src << "to " << dst << std::endl;
  hanoi(n-1, tmp, dst, src);
}

int main()
{
  hanoi(64,'A', 'B', 'C');
  return 0;
}
