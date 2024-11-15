//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_PLAYER_H
#define PPOIS_LAB_3_PLAYER_H
#include <vector>
#include "Item.h"
#include "Skill.h"
#include "Achievement.h"
#include "BaseEntity.h"

class Player : public BaseEntity {
private:
    int health;
    int level;
    int experience;
    std::vector<class Item*> inventory;
    std::vector<class Skill*> skills;
    std::vector<class Achievement*> achievements;
public:
    Player(int i, const std::string& n, int h, int lvl, int exp);
    void displayInfo() const override;
    void gainExperience(int exp);
    void addItem(Item* item);
    void equip(Item* item);
    void talkToNPC(class NPC* npc);
    void useSkill(Skill* skill);
    void sellItem(Item* item);
};


#endif //PPOIS_LAB_3_PLAYER_H
