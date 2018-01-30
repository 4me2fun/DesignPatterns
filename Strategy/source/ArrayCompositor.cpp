#include <iostream>

#include "ArrayCompositor.hpp"
#include "Compositor.hpp"

using namespace arraycompositor;

namespace {
  static const char *CLASS_NAME = "ArrayCompositor::";
}

ArrayCompositor::ArrayCompositor( int interval ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

ArrayCompositor::~ArrayCompositor() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

int ArrayCompositor::compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
  return 2;
}


