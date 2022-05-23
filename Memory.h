#pragma once
#include <computerPart.h>
#include <string>

class Memory: public computerPart{
    private:
    unsigned short capacity;
    public:
    Memory(const std::string& label, unsigned short capacity);
    double price() const;
    void output(std::ostream& out) const;
};