#include <iostream>

#include "Composition.hpp"
#include "Compositor.hpp"

using namespace composition;

namespace {
  static const int LINE_WIDTH = 7;
  static const int LINE_COUNT = 9;
  static const char *CLASS_NAME = "Composition::";
}

Composition::Composition( compositor::Compositor *compositor ) :
  m_compositor( compositor ),
  m_lineWidth( LINE_WIDTH ),
  m_lineCount( LINE_COUNT ) {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;
}

Composition::~Composition() {
  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  if ( nullptr != m_compositor )
  {
    std::cout << CLASS_NAME << __FUNCTION__ << "() delete m_compositor" << std::endl;
    //m_compositor = nullptr;
    delete m_compositor;
  }
}

void Composition::repair() {
  int *natural;
  int *strethability;
  int *shrinkability;
  int componentCount;
  int *breaks;

  std::cout << CLASS_NAME << __FUNCTION__ << "()" << std::endl;

  int breakCount = m_compositor->compose( natural, strethability, shrinkability, componentCount, m_lineWidth, breaks );
  std::cout << CLASS_NAME << __FUNCTION__ << "(), breakCount=" << breakCount << std::endl;
}

