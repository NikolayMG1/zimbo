#include "CPU.h"


CPU::CPU(const std::string& label, unsigned short cores, unsigned short MHz):computerPart(label){
    this->cores = cores;
        if(cores < 1 || cores > 8){
            throw "cores should be between 1 and 8";
        }
    this->MHz = MHz;
}
double CPU::price() const{
    return cores * 29.99;
}
void CPU::output(std::ostream& out) const{
    out << "Brand: " <<  getLabel() << '\n';
    out << "Cores: " << cores << '\n';
    out << "MHz: " << MHz << '\n';
    out << "Price: " << price() << '\n';
} 


