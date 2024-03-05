#include "AttackVisitor.h"
#include "NPC.h"
#include "Dragon.h"
#include "Elf.h"
#include "Knight.h"

bool isEnemy(NPC *npc1, NPC *npc2) {
    return npc1->getType() == npc2->getType();
}

bool AttackVisitor::isInAttackRange(Point myCoordinates, Point enemyCoordinates) {
    return _attackRange >= myCoordinates.distance(enemyCoordinates);
}

void AttackVisitor::changeAttackRanges(double attackRange) {
    _attackRange = attackRange;
}

void AttackVisitor::dragonAttack(NPC *npc, Point coordinates) {
    std::vector<NPC *> dragonEnemies = {new Dragon, new Knight, new Elf};
    for (int i = 0; i < dragonEnemies.size(); ++i) {
        if (isEnemy(npc, dragonEnemies.at(i)) && isInAttackRange(coordinates, npc->getCoordinates())) {
            npc->setIsAlive(false);
        }
    }
}

void AttackVisitor::elfAttack(NPC *npc, Point coordinates) {
    std::vector<NPC *> elfEnemies = {new Knight};
    for (int i = 0; i < elfEnemies.size(); ++i) {
        if (isEnemy(npc, elfEnemies.at(i)) && isInAttackRange(coordinates, npc->getCoordinates())) {
            npc->setIsAlive(false);
        }
    }
}

void AttackVisitor::knightAttack(NPC *npc, Point coordinates) {
    std::vector<NPC *> knightEnemies = {new Dragon};
    for (int i = 0; i < knightEnemies.size(); ++i) {
        if (isEnemy(npc, knightEnemies.at(i)) && isInAttackRange(coordinates, npc->getCoordinates())) {
            npc->setIsAlive(false);
        }
    }
}