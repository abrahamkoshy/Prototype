#include "stdafx.h"
#include "ConcretePrototype1.h"


Prototype* ConcretePrototype1::Clone() const
{
    return new ConcretePrototype1(*this);
}