#include <iostream>

#include "TeXCompositor.hpp"
#include "Compositor.hpp"

using namespace texcompositor;

namespace {
  static const char *CLASS_NAME = "TeXCompositor::";
}

TeXCompositor::TeXCompositor() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

TeXCompositor::~TeXCompositor() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

int TeXCompositor::compose ( int natural[], int stretch[], int shrink[], int componentCount, int lineWidth, int breaks[] ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
  return 3;
}

