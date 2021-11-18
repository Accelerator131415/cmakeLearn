//
// Created by yuan on 2021/10/24.
//
#include "top.h"

top::top() : name("no name"), id(0) {
}
top::top(std::string _name, uint16_t _id) : name(_name), id(_id) {

}

void top::setName(std::string _name) {
    name = _name;
}
std::string top::getName() {
    return name;
}
void top::setId(uint16_t _id) {
    id = _id;
}
uint16_t top::getId() {
    return id;
}