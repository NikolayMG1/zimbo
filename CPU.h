#pragma once
#include "computerPart.h"

class CPU: public computerPart{
    private:
    unsigned short cores;
    unsigned short MHz;
    public:
    CPU(const std::string& label, unsigned short cores, unsigned short MHz);
    double price() const;
    void output(std::ostream& out) const;
};