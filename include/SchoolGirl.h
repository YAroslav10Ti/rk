#ifndef SCHOOLGIRL_H
#define SCHOOLGIRL_H

#include <string>

class SchoolGirl {
public:
    std::string getName();
    void setName(const std::string& name);

private:
    std::string name;
};

#endif // SCHOOLGIRL_H
