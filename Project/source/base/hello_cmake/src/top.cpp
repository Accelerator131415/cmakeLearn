//
// Created by yuan on 2021/10/23.
//
#include "top.h"
top::top() : tid(0),type(0){
}

top::top(const top &t){
    *this = t;
}
top& top::operator=(const top &t) {
    tid = t.tid;
    type = t.type;
    return *this;
}
void top::setId(uint16_t _id) {
    tid = _id;
}
uint16_t top::getId() {
    return tid;
}
void top::setType(uint8_t _type) {
    type = _type;
}
uint16_t top::getType(){
    return type;
}