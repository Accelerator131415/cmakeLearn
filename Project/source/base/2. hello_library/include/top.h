//
// Created by yuan on 2021/10/24.
//

#ifndef HELLO_LIBRARY_TOP_H
#define HELLO_LIBRARY_TOP_H
#include <iostream>

class top{
private:
    std::string name;
    uint16_t id;

public:
    top();
    top(std::string _name, uint16_t _id);
    top(const top& t) = delete;
    top& operator=(const top& t) = delete;

    void setName(std::string _name);
    std::string getName();
    void setId(uint16_t _id);
    uint16_t getId();


};

#endif //HELLO_LIBRARY_TOP_H
