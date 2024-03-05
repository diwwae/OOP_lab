#pragma once

#include "vector"
#include "iostream"
#include "Point.h"

class NPC;

class AttackVisitor {
private:
    double _attackRange;

public:
    bool isInAttackRange(Point myCoordinates, Point enemyCoordinates);

    void knightAttack(NPC *npc, Point coordinates);

    void elfAttack(NPC *, Point);

    void dragonAttack(NPC *, Point);

    void changeAttackRanges(double attackRange);
};