#pragma once
#include <string>
#include <iostream>

class computerPart{
    private:
    std::string label;
    //double priceOfElement;
    public:
    virtual double price() const = 0;
    virtual void output(std::ostream& out) const = 0;
    computerPart(const std::string);
    std::string getLabel() const;
};