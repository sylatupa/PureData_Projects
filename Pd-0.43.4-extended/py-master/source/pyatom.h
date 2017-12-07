/*
py/pyext - python script object for PD and Max/MSP

Copyright (c)2002-2015 Thomas Grill (gr@grrrr.org)
For information on usage and redistribution, and for a DISCLAIMER OF ALL
WARRANTIES, see the file, "license.txt," in this distribution.  
*/

#include "main.h"

class PyAtom
{
public:
    static size_t Register(PyObject *obj);
    static PyObject *Retrieve(size_t id);
    static void Collect();
};

