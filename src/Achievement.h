//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_ACHIEVEMENT_H
#define PPOIS_LAB_3_ACHIEVEMENT_H
#include <string>

class Achievement {
private:
    std::string title;
    std::string description;
    bool isUnlocked;
public:
    Achievement(const std::string& t, const std::string& d);
    void unlock();
    bool isAchieved() const;
};


#endif //PPOIS_LAB_3_ACHIEVEMENT_H
