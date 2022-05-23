#include "computerPart.h"

computerPart::computerPart(const std::string label){
    this->label = label;
    //this->priceOfElement = priceOfElement;
}

std::string computerPart::getLabel() const{
    return label;
}