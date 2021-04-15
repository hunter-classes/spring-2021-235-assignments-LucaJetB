#include <iostream>
#include "Node.h"
#include "BSTree.h"

int main() {
  Node *n = new Node(10);

  Node *n2 = new Node(20);
  n->setRight(n2);

  Node *n3 = new Node(50);
  n->setLeft(n3);

  Node *n4 = new Node(30);
  n2->setRight(n4);

  Node *n5 = new Node(40);
  n4->setRight(n5);

  Node *n6 = new Node(60);
  n3->setLeft(n6);

  Node *n7 = new Node(70);
  n3->setRight(n7);

  std::cout << n->getData() << std::endl;
  std::cout << n->getRight()->getData() << std::endl;
  std::cout << n->getLeft()->getData() << std::endl;
  std::cout << n2->getRight()->getData() << std::endl;
  std::cout << n3->getLeft()->getData() << std::endl;
  std::cout << n3->getRight()->getData() << std::endl;
  std::cout << n4->getRight()->getData() << std::endl;

  std::cout << std::endl;

  BSTree *t = new BSTree();
  t->setup();
  std::cout << t->get_debug_string() << std::endl;
  return 0;
}
