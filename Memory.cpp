#include "Memory.h"

Memory::Memory(const std::string& label, unsigned short capacity):computerPart(label){
    if(capacity > 10000 || capacity < 1){
        throw "between 1 and 10000";
    }
    this->capacity = capacity;
}

double Memory::price() const{
    return capacity * 89.99;
}
void Memory::output(std::ostream& out) const{
    out << "Brand: " <<  getLabel() << '\n';
    out << "Capacitty: " << capacity << '\n';
    out << "Price: " << price << '\n';
} 