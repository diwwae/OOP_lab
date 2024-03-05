#pragma once

#include "NPC.h"
#include "Dragon.h"
#include "Elf.h"
#include "Knight.h"
#include <vector>

class NPCfactory{
public:
    NPC* createNPC(std::string, std::string);

    std::vector<NPC*> createNPCsFromFile(std::string filename);
};