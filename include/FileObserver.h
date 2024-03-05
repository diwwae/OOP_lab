#pragma once 

#include "IObserver.h"
#include "fstream"

class NPC;

class FileObserver : public IObserver {
public:
    FileObserver() = default;

    void update(NPC* npc) override;
};