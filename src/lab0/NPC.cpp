#include "NPC.h"

void NPC::setCoordinates(const Point &coordinates){
    NPC::_coordinates = coordinates;
}

void NPC::setIsAlive(bool isAlive){
    NPC::_isAlive = isAlive;
}

const std::string &NPC::getName(){
    return _name;
}

bool NPC::isAlive(){
    return _isAlive;
}

const std::string &NPC::getType() {
    return _type;
}

void NPC::setType(const std::string &type) {
    NPC::_type = type;
}

const Point &NPC::getCoordinates(){
    return _coordinates;
}

std::ostream &operator<<(std::ostream &strm, NPC *npc) {
    strm << npc->getType() << std::endl;
    strm << npc->getName() << std::endl;
    strm << npc->getCoordinates() << std::endl;
    std::string alive = npc->isAlive() ? "alive" : "was killed";
    strm << alive;
    return strm;
}