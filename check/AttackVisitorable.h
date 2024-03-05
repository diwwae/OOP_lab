#pragma once

#include "AttackVisitor.h"

class AttackVisitorable {
public:
    virtual void accept(AttackVisitor attackVisitor, NPC *) = 0;
};