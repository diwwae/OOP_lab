#include "Elf.h"

Elf::Elf(){
    _type = "elf";
}

Elf::Elf(std::string name, Point coordinates){
    _name = std::move(name);
    _type = "elf";
    _isAlive = true;
    _coordinates = coordinates;
}

void Elf::accept(AttackVisitor attackVisitor, NPC *npc) {
    attackVisitor.elfAttack(npc, _coordinates);
}

void Elf::write() {
    for (auto observer : _observers) {
        observer->update(this);
    }
}