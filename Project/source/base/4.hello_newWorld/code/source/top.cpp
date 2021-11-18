#include "top.h"

top::top() : id(0) {

}

top::~top() {

}
void top::setId(uint32_t _id) {
    id = _id;
}

uint32_t top::getId() {
    return id;
}

void top::func() {
    std::cout << "top func" << std::endl;
}