//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_QUEST_H
#define PPOIS_LAB_3_QUEST_H
#include <string>
#include "Achievement.h"

class Quest {
private:
    std::string title;
    std::string description;
    Achievement* achievement;
    bool isCompleted;
public:
    Quest(const std::string& t, const std::string& d, Achievement* a);
    void completeQuest();
    void startQuest();
    void trackProgress();
};


#endif //PPOIS_LAB_3_QUEST_H
