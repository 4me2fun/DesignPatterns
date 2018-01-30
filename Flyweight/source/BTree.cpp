#include <iostream>

#include "BTree.hpp"

using namespace btree;

namespace {
  static const char *CLASS_NAME = "BTree::";
}

BTree::BTree() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

BTree::~BTree() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

