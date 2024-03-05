#include "Dragon.h"

Dragon::Dragon(){
    _type = "dragon";
}

Dragon::Dragon(std::string name, Point coordinates){
    _name = std::move(name);
    _type = "dragon";
    _isAlive = true;
    _coordinates = coordinates;
}

void Dragon::accept(AttackVisitor attackVisitor, NPC *npc) {
    attackVisitor.dragonAttack(npc, _coordinates);
}

void Dragon::write() {
    for (auto observer : _observers) {
        observer->update(this);
    }
}