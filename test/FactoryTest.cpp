#include <gtest/gtest.h>
#include "NPCfactory.h"
// #include <vector>

TEST(NPCFactoryTest, CreateNPCTest) {
    NPCfactory factory;
    NPC *npc = factory.createNPC("knight", "TestKhight");
    ASSERT_NE(npc, nullptr);
    EXPECT_EQ(npc->getName(), "TestKnight");
    delete npc;
}


TEST(NPCFactoryTest, CreateNPCsFromFileTest) {
    NPCfactory factory;
    std::vector<NPC *> npcs = factory.createNPCsFromFile("npcs.txt");

    EXPECT_EQ(npcs.size(), 6);
    for (auto npc: npcs) {
        delete npc;
    }
}