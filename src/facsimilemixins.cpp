

#include "facsimilemixins.h"
using std::string;


FacsimileMixIn::FacsimileMixIn(BaseMeiElement *b) {
    this->b = b;
};

string FacsimileMixIn::getFacsValue() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("facs")) {
        throw AttributeNotFoundException("facs");
    }
    return b->m_Base.getAttributeValue("facs");
};

MeiAttribute* FacsimileMixIn::getFacs() throw (AttributeNotFoundException) {
    if (!b->m_Base.hasAttribute("facs")) {
        throw AttributeNotFoundException("facs");
    }
    return b->m_Base.getAttribute("facs");
};

void FacsimileMixIn::setFacs(std::string _facs) {
    if (!b->m_Base.hasAttribute("facs")) {
        MeiAttribute *a = new MeiAttribute("facs", _facs);
        b->m_Base.addAttribute(a);
    }
};

bool FacsimileMixIn::hasFacs() {
    return b->m_Base.hasAttribute("facs");
};

void FacsimileMixIn::removeFacs() {
    b->m_Base.removeAttribute("facs");
};



