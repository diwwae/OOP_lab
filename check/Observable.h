#pragma once

#include "iostream"
#include "vector"

class Observable {
public:
    virtual void write() = 0;
};