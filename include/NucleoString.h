#ifndef NUCLEOSTRING_H
#define NUCLEOSTRING_H

#include <string>
#include <iostream>
#include <fstream>

#define ADN 0
#define ARN 1
using namespace std;
template<bool ANN>

class NucleoString{
    private:
        string chain;
    public:
        NucleoString(void){
            this->chain = "";
        }

        NucleoString<ADN>(string entry){
            string change = "AaCcTtGg";
            size_t found = entry.find_not_of(change);
                try{
                    if(found == string::npos){
                        this->chain = entry;
                    }
                    else{
                        throw 1;
                    }
                }
                catch(int e){
                    cout<< "An exception ocurred. Exception Nr. "<< e <<".DNA chains only consist of A a C c T t G g \n";
                }
        }
        NucleoString<ARN>(string entry){
            string change = "AaCcUuGg";
            size_t found = entry.find_not_of(change);
                try{
                    if(found == string::npos){
                        this->chain = entry;
                }
                    else{
                        throw 2;
                    }
                }
                catch(int e){
                    cout<< "An exception ocurred. Exception Nr. "<< e <<".RNA chains only consist of A a C c U u G g \n";
                }
        }

        NucleoString(const NucleoString<ANN> & other){
            this->chain = other.chain;
        }

        NucleoString<ADN>(NucleoString<ARN> other){
            cout<< "Warning: You are converting a RNA to a DNA chain"<<endl;
            NucleoString<ADN> temp = other.arncomplement();
            this->chain = temp;
        }

        NucleoString<ARN>(NucleoString<ADN> other){
            cout<< "Warning: You are converting a DNA to a RNA chain"<<endl;
            NucleoString<ARN> temp = other.adncomplement();
            this->chain = temp;
        }

        NucleoString& operator=(const NucleoString& other) { return *this; }
        virtual ~NucleoString() {}
    protected:
};

#endif // NUCLEOSTRING_H
