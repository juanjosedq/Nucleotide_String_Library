#include "NucleoString.h"
template<NTYPE ANN>
NucleoString<ANN>::NucleoString(void){
    this->chain = "";
}
template<>
NucleoString<ADN>::NucleoString(string entry){
    string change = "AaCcTtGg ";
    size_t found =entry.find_first_not_of(change);
    try{
        if(found == string::npos){
            this->chain = entry;
        }
        else{
            throw 1;
        }
    }catch(int e){
        cout<< "An exception ocurred. Exception Nr. "<< e <<". DNA chains only consist of A a C c T t G g and blank spaces\n";
    }
}
template<>
NucleoString<ARN>::NucleoString(string entry){
    string change = "AaCcUuGg ";
    size_t found = entry.find_first_not_of(change);
    try{
        if(found == string::npos){
            this->chain = entry;
        }
        else{
            throw 2;
        }
    }catch(int e){
        cout<< "An exception ocurred. Exception Nr. "<< e <<". RNA chains only consist of A a C c U u G g and blank spaces\n";
    }
}
template<NTYPE ANN>
NucleoString<ANN>::NucleoString(const NucleoString<ANN> & other){
    this->chain = other.chain;
}
template<>
NucleoString<ADN>::NucleoString(NucleoString<ARN> other){
    cout<<"% WARNING. You are converting a RNA chain into DNA chain"<<endl;
    NucleoString<ADN> temp = other.arncomplement(); // Falta que ariel me pase esta función.
    this->chain = temp.chain;
}
template<>
NucleoString<ARN>::NucleoString(NucleoString<ARN> other){
    cout<<"% WARNING. You are converting a DNA chain into an RNA chain"<<endl;
    NucleoString<ARN> temp = other.transcript();
    this->chain = temp.chain;
}
template<NTYPE ANN>
NucleoString<ANN> NucleoString<ANN>::operator+(NucleoString<ANN> other){
    string temp = this->chain + other.chain;
    NucleoString<ANN> retval = NucleoString<ANN>(temp);
    return retval;
}
