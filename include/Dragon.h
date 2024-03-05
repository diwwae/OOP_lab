#pragma once

#include "NPC.h"
#include "AttackVisitor.h"

class Dragon : public NPC {
public:
    Dragon();
    Dragon(std::string name, Point coordinates);

    void accept(AttackVisitor attackVisitor, NPC *npc) override;
    void write();
};