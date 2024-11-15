//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_NPC_H
#define PPOIS_LAB_3_NPC_H
#include <string>
#include "Character.h"

class NPC : public Character {
private:
    std::string dialogue;
    std::string role;
    std::string location;
public:
    NPC(int id, const std::string& name, int strength, int agility, int intelligence, const std::string& dialogue, const std::string& role, const std::string& location);
    void talk();
    void attack() const override;
};


#endif //PPOIS_LAB_3_NPC_H
