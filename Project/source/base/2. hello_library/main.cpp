//
// Created by yuan on 2021/10/24.
//

#include <iostream>
#include "top.h"

static int arf = 0;
int *const getId(){
    return &arf;
}

void sayHello();
int main(){
    top t;
    sayHello();
    std::cout << "hello a ha:" << t.getName() << std::endl;
    std::cout << "hello library" << std::endl;

    const int *k = getId();
    k = reinterpret_cast<int*>(static_cast<uintptr_t>(15));

    std::cout << "k:" << *k << std::endl;
    return 0;
}