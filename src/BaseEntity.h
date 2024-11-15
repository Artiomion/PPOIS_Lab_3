//
// Created by Artem Sotnikov on 30.10.24.
//

#ifndef PPOIS_LAB_3_BASEENTITY_H
#define PPOIS_LAB_3_BASEENTITY_H
#include <string>

class BaseEntity {
protected:
    int id;
    std::string name;
public:
    BaseEntity(int id, const std::string& name);
    virtual void displayInfo() const = 0;
    int getId() const;
    std::string getName() const;
};


#endif //PPOIS_LAB_3_BASEENTITY_H
