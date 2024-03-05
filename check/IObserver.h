#pragma once

#include <iostream>

class NPC;

class IObserver{
public:
    virtual void update(NPC* npc) = 0;
};