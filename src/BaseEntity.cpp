//
// Created by Artem Sotnikov on 30.10.24.
//

#include "BaseEntity.h"
#include <iostream>

BaseEntity::BaseEntity(int id, const std::string& name) : id(id), name(name) {}

int BaseEntity::getId() const {
    return id;
}

std::string BaseEntity::getName() const {
    return name;
}