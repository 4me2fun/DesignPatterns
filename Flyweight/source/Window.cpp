#include <iostream>

#include "Window.hpp"

using namespace window;

namespace {
  static const char *CLASS_NAME = "Window::";
}

Window::Window() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

Window::~Window() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

