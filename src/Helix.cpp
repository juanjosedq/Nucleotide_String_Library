#include "Helix.h"
Helix::Helix(void){
    this->first = NucleoString<DNA>("");
    this->second =  this->first;
}
Helix::Helix(string entry){
    NucleoString<DNA> temp;
    this->first = NucleoString<DNA>(entry);
    temp = this->first;
    this->second = temp.complement();
}
Helix::Helix(NucleoString<DNA> entry){
    this->first = entry;
    this->second = entry.complement();

Helix::Helix(NucleoString<DNA> one, NucleoString<DNA> two){
    this->first = one;
    this->second = two;
}
void Helix::fix(WHICH entry){
    NucleoString temp;
    if(entry == FIRST){
        temp = this->second;
        this->first = temp.complement();
    }
    else{
        temp = this->first;
        this->second = temp.complement();
    }
}
NucleoString<DNA> Helix::getNucleoString(WHICH entry){
    if(entry == FIRST){
        return this->first;
    }
    else{
        return this->second;
    }
}
