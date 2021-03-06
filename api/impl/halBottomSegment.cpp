#include "halBottomSegment.h"
#include "halDnaIterator.h"

using namespace hal;

void BottomSegment::getString(std::string &outString) const {
    DnaIteratorPtr dnaIt(getGenome()->getDnaIterator(getStartPosition()));
    dnaIt->readString(outString, getLength());
}
