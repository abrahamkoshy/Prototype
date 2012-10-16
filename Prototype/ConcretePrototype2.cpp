#include "stdafx.h"
#include "ConcretePrototype2.h"

Prototype* ConcretePrototype2::Clone() const
{
    return new ConcretePrototype2(*this);
}