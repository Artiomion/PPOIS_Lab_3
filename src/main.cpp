#include <iostream>
#include "Player.h"
#include "NPC.h"
#include "Weapon.h"
#include "Armor.h"
#include "Item.h"
#include "Achievement.h"
#include "Quest.h"
#include "Leaderboard.h"
#include "Map.h"
#include "Region.h"
#include "Monster.h"
#include "Skill.h"
#include "SkillHolder.h"
#include "Game.h"
#include "Inventory.h"

int main() {
    // Создание объектов Achievement
    Achievement* achievement1 = new Achievement("Master Swordsman", "Complete 100 sword battles");
    Achievement* achievement2 = new Achievement("Explorer", "Discover 50 regions");

    // Создание объектов NPC
    NPC* npc1 = new NPC(1, "Merchant", 10, 5, 3, "Welcome to my shop!", "Shopkeeper", "Market");
    NPC* npc2 = new NPC(2, "Trainer", 15, 10, 5, "Let me teach you some skills.", "Skill Trainer", "Training Ground");
    npc1->talk();
    npc1->attack();
    // Создание объектов Player
    Player* player = new Player(1, "Hero", 100, 1, 0);

    // Создание объектов Weapon и Armor
    Weapon* sword = new Weapon(1, "Iron Sword", 100, 5, "Common", "Weapon", 25, 5, 10, 0);
    Armor* chestplate = new Armor(3, "Iron Chestplate", 200, 15, "Uncommon", "Armor", 70, 10, "Body");

    sword->displayInfo();
    chestplate->displayInfo();

    // Создание инвентаря с вместимостью 100
    Inventory* inventory = new Inventory(100);

    // Добавление предметов в инвентарь
    inventory->addItem(sword);
    inventory->addItem(chestplate);

    // Показать инвентарь
    inventory->displayInventory();

    // Создание объектов Quest
    Quest* quest1 = new Quest("Slay the Dragon", "Defeat the dragon in the forest", achievement1);
    Quest* quest2 = new Quest("Find the Lost Treasure", "Locate the hidden treasure in the cave", achievement2);

    // Запуск квестов
    quest1->startQuest();
    quest2->startQuest();

    // Создание объектов Monster
    Monster* monster1 = new Monster("Dragon", 50, 30, 100);
    Monster* monster2 = new Monster("Goblin", 20, 10, 50);

    // Создание объектов Region
    Region* region1 = new Region("Forest", 3);
    region1->spawnMonster();
    Region* region2 = new Region("Cave", 4);
    region2->spawnMonster();

    // Создание объектов Map
    Map* map = new Map(10, 5);
    map->discoverRegion();

    // Создание объектов Skill
    Skill* skill1 = new Skill("Fireball", 3);
    Skill* skill2 = new Skill("Heal", 2);

    // Создание объектов SkillHolder
    SkillHolder* skillHolder = new SkillHolder();
    skillHolder->addSkill(skill1);
    skillHolder->addSkill(skill2);

    // Создание объекта Game
    Game* game = new Game("Epic Adventure", "RPG");

    // Взаимодействие с NPC и игроком
    player->talkToNPC(npc1);
    player->equip(sword);
    player->useSkill(skill1);

    // Подсчет очков на Leaderboard
    Leaderboard* leaderboard = new Leaderboard();
    leaderboard->addScore(100);
    leaderboard->resetLeaderboard();

    // Завершение игры
    game->endGame();

    // Очистка памяти
    delete player;
    delete npc1;
    delete npc2;
    delete sword;
    delete chestplate;
    delete achievement1;
    delete achievement2;
    delete quest1;
    delete quest2;
    delete monster1;
    delete monster2;
    delete region1;
    delete region2;
    delete map;
    delete skill1;
    delete skill2;
    delete skillHolder;
    delete game;
    delete inventory;
    delete leaderboard;

    return 0;
}
