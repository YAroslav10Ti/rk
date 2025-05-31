#include "proxy.h"
#include "SchoolGirl.h"

int main() {
    SchoolGirl girl;  // Объект на стеке
    girl.setName("jiaojiao");
    
    Proxy proxy(&girl);  // Передаём адрес
    proxy.GiveDolls();
    proxy.GiveFlowers();
    
    return 0;
}
