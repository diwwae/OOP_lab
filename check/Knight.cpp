#include "Knight.h"

Knight::Knight(){
    _type = "knight";
}

Knight::Knight(std::string name, Point coordinates){
    _name = std::move(name);
    _type = "knight";
    _isAlive = true;
    _coordinates = coordinates;
}

void Knight::accept(AttackVisitor attackVisitor, NPC *npc) {
    attackVisitor.knightAttack(npc, _coordinates);
}

void Knight::write() {
    for (auto observer : _observers) {
        observer->update(this);
    }
}