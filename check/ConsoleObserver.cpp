#include "ConsoleObserver.h"
#include "NPC.h"

void ConsoleObserver::update(NPC* npc) {
    std::cout << npc << std::endl;
}