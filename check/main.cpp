#include "GameMaster.h"
// #include "NPC.h"
// #include "NPCfactory.h"

int main(){
    GameMaster gameMaster("npcs.txt", 150);
    gameMaster.startBattle();
    gameMaster.writeResults();
}