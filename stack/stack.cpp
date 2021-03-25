#include <iostream>
#include <vector>
class Stack {
  private:
    int size = 0;
    std::vector<int> stack;
  public:
  Stack();
  int pop();
  void push(int num);
  int top();
  bool isempty();
};

Stack::Stack()
{ }

int Stack::pop()
{
  if (size == 0)
  {
    std::cout << "Error, empty stack" << std::endl;
    return -1;
  }
  int num = stack[stack.size()-1];
  stack.pop_back();
  size--;
  return num;
}

void Stack::push(int num)
{
  stack.push_back(num);
  size++;
}

int Stack::top()
{
  return stack[stack.size()-1];
}

bool Stack::isempty()
{
  return size == 0;
}

int main()
{
  Stack s1 = Stack();
  std::cout << s1.isempty() << std::endl;
  s1.push(1);
  s1.push(2);
  std::cout << s1.top() << std::endl;
  s1.push(4);
  s1.push(8);
  std::cout << s1.pop() << std::endl;
  return 0;
}

