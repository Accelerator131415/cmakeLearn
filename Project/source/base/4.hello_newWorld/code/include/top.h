#include <iostream>

class top {
public:
    top();
    ~top();
    void setId(uint32_t _id);

    uint32_t getId();

    void func();

private:
    uint32_t id;
};