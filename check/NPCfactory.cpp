#include "NPCfactory.h"
#include "random"
#include <fstream>

Point generateRandomPoint(){
    srand(rand());
    int x = rand() % 500;
    int y = rand() % 500;

    return Point(x, y);
}

std::vector<NPC *> NPCfactory::createNPCsFromFile(std::string filename) {
    std::ifstream file(filename);
    if (!file.is_open()){
        std::cerr << "file wasnt open";
    }

    std::string type, name;

    std::vector<NPC*> NPCs;

    while (file >> type >> name) {
        NPC* npc = this->createNPC(type, name);
        NPCs.push_back(npc);
    }
    return NPCs;
}

NPC *NPCfactory::createNPC(std::string type, std::string name) {
    if (type == "knight") return new Knight(name, generateRandomPoint());
    if (type == "elf") return new Elf(name, generateRandomPoint());
    if (type == "dragon") return new Dragon(name, generateRandomPoint());
    
    std::cerr << "invalid character";
}