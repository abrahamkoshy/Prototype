// Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConcretePrototype1.h"

int _tmain(int argc, _TCHAR* argv[])
{
    //a rather simple use of the Prototype

    //this is the only time we create a new object
    Prototype* concretePrototype1 = new ConcretePrototype1();

    //we can now get a copy of the prototype by calling Clone()
    Prototype* prototype1Clone = concretePrototype1->Clone(); 

    //clean up
    delete concretePrototype1;
    delete prototype1Clone;

	return 0;
}

