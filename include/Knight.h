#pragma once

#include "NPC.h"
#include "AttackVisitor.h"

class Knight : public NPC {
public:
    Knight();
    Knight(std::string name, Point coordinates);

    void accept(AttackVisitor attackVisitor, NPC *npc) override;
    void write();
};