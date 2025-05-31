#ifndef PROXY_H
#define PROXY_H

#include <string>
#include <memory>
#include "SchoolGirl.h"

class IGiveGift {
public:
    virtual ~IGiveGift() = default;
    virtual void GiveDolls() = 0;
    virtual void GiveFlowers() = 0;
};

class Pursuit : public IGiveGift {
public:
    explicit Pursuit(SchoolGirl* mm);
    ~Pursuit() override;
    void GiveDolls() override;
    void GiveFlowers() override;

private:
    SchoolGirl* mm;  // Не владеем объектом, просто ссылаемся
};

class Proxy : public IGiveGift {
public:
    explicit Proxy(SchoolGirl* mm);
    ~Proxy() override;
    void GiveDolls() override;
    void GiveFlowers() override;

private:
    std::unique_ptr<Pursuit> gg;  // Умный указатель для управления памятью
};

#endif // PROXY_H
