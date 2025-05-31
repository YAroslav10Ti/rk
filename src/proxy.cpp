#include "proxy.h"
#include "SchoolGirl.h"
#include <iostream>

Pursuit::Pursuit(SchoolGirl* mm) : mm(mm) {}

Pursuit::~Pursuit() {
    // Не удаляем mm, так как не владеем им
}

void Pursuit::GiveDolls() {
    std::cout << mm->getName() << ": give you a doll" << std::endl;
}

void Pursuit::GiveFlowers() {
    std::cout << mm->getName() << ": give you flowers" << std::endl;
}

Proxy::Proxy(SchoolGirl* mm) : gg(std::make_unique<Pursuit>(mm)) {}

Proxy::~Proxy() = default;  // Умный указатель сам всё удалит

void Proxy::GiveDolls() {
    gg->GiveDolls();
}

void Proxy::GiveFlowers() {
    gg->GiveFlowers();
}
