//
// Created by yuan on 2021/10/23.
//

#ifndef HELLOWORLD_TOP_H
#define HELLOWORLD_TOP_H

#include <iostream>
class top {
private:
    uint16_t tid;
    uint8_t type;

public:
    top();
    top(const top &t);
    top& operator=(const top &t);
    void setId(uint16_t _id);
    uint16_t getId();
    void setType(uint8_t _type);
    uint16_t getType();
};



#endif //HELLOWORLD_TOP_H
