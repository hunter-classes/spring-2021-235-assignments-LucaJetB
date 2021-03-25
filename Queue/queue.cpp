#include <iostream>
#include <vector>

class Queue{
  private:
    int size = 0;
    std::vector<int> queue;
  public:
    void enqueue(int num);
    void dequeue();
    bool isempty();
    int front();
};

void Queue::enqueue(int num)
{
  queue.insert(queue.begin(),num);
  size++;
}

void Queue::dequeue()
{
  if (size == 0)
  {
    std::cout << "Error, empty queue" << std::endl;
    return;
  }
  queue.pop_back();
  size--;
}

bool Queue::isempty()
{
  return size == 0;
}

int Queue::front()
{
  return queue[queue.size()-1];
}

int main()
{
  Queue q1 = Queue();
  bool empty = q1.isempty();
  std::cout << empty << std::endl;
  q1.enqueue(1);
  q1.enqueue(5);
  std::cout << q1.front() << std::endl;
  return 0;
}
