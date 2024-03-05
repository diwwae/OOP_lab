#pragma once

#include "IObserver.h"

class NPC;

class ConsoleObserver : public IObserver {
public:
    ConsoleObserver() = default;

    void update(NPC*) override;
};