#include <iostream>
#include "computerPart.h"
#include "CPU.h"
#include "Memory.h"

int main(){
    try{
        CPU cpu("kur", 10, 11);
        cpu.output(std::cout);
    }
    catch (const char* Error){
        std::cout << Error;
    }

    try{
        Memory memory("hui", 1000);
        memory.output(std::cout);
    }
    catch (const char* Error){
        std::cout << Error;
    }
}