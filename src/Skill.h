//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_SKILL_H
#define PPOIS_LAB_3_SKILL_H
#include <string>

class Skill {
private:
    std::string name;
    int level;
public:
    Skill(const std::string& n, int lvl);
    std::string getName() const;
    int getLevel() const;
};


#endif //PPOIS_LAB_3_SKILL_H
