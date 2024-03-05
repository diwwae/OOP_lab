#pragma once

#include "NPC.h"
#include "AttackVisitor.h"

class Elf : public NPC {
public:
    Elf();
    Elf(std::string name, Point coordinates);

    void accept(AttackVisitor attackVisitor, NPC *npc) override;
    void write();
};