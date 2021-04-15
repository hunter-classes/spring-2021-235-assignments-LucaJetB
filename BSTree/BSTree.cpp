#include <iostream>
#include "BSTree.h"
#include "Node.h"

BSTree::BSTree() {
  root = nullptr;
}

void BSTree::insert(int d) {

}

std::string BSTree::get_debug_string_helper(Node *l) {
  if (l == nullptr) {
    return "";
  }
  else {
    std::string right = get_debug_string_helper(l->getRight());
    std::string curr = std::to_string(l->getData());
    std::string left = get_debug_string_helper(l->getLeft());

    return curr + ", " + left + ", " + right;
  }
}

std::string BSTree::get_debug_string() {
  return get_debug_string_helper(root);
}

void BSTree::setup() {
  Node *n = new Node(10);
  root = n;
  n = new Node(20);
  root->setLeft(n);
  n = new Node(30);
  root->setRight(n);
  n = new Node(40);
  root->getLeft()->setLeft(n);
}


