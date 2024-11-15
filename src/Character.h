//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_CHARACTER_H
#define PPOIS_LAB_3_CHARACTER_H
#include "BaseEntity.h"

class Character : virtual public BaseEntity {
protected:
    int strength;
    int agility;
    int intelligence;
public:
    Character(int id, const std::string& name, int strength, int agility, int intelligence);
    virtual void attack() const = 0;
    void displayInfo() const override;
};


#endif //PPOIS_LAB_3_CHARACTER_H
