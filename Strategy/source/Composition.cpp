#include "Composition.hpp"
#include "Compositor.hpp"

using namespace composition;

namespace {
  int static const LINE_WIDTH = 7;
  int static const LINE_COUNT = 9;
}

Composition::Composition( compositor::Compositor *compositor ) :
  m_compositor( compositor ),
  m_lineWidth( LINE_WIDTH ),
  m_lineCount( LINE_COUNT ) {

}

Composition::~Composition() {

}

void Composition::repair() {
  int *natural;
  int *strethability;
  int *shrinkability;
  int componentCount;
  int *breaks;

  int breakCount = m_compositor->compose( natural, strethability, shrinkability, componentCount, m_lineWidth, breaks );
}

