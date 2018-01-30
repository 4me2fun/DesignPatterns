#include <iostream>

#include "SimpleCompositor.hpp"

using namespace simplecompositor;

namespace {
  static const char *CLASS_NAME = "SimpleCompositor::";
}

SimpleCompositor::SimpleCompositor() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

SimpleCompositor::~SimpleCompositor() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

int SimpleCompositor::compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
  return 1;
}

