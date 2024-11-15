//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_SKILLHOLDER_H
#define PPOIS_LAB_3_SKILLHOLDER_H
#include <vector>
#include "Skill.h"

class SkillHolder {
private:
    std::vector<class Skill*> skills;
public:
    void addSkill(Skill* skill);
};


#endif //PPOIS_LAB_3_SKILLHOLDER_H
