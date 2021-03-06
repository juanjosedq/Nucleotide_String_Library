#include "NucleoString.h"
#include <list>

template<NTYPE ANN>
NucleoString<ANN>::NucleoString(void){
    this->header = "";
    this->chain = "";
}
template<>
NucleoString<ADN>::NucleoString(string entry){
    string change = "ACTG \n";
    string header = substr(0,entry.find_first_of('\n'));
    size_t found =  find_first_not_of(change);
    try{
        if(found == string::npos){
            this->chain = entry;
            this->header = header;
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
    string change = "ACUG \n";
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
    this->header = other.header;
    this->chain = other.chain;
}
template<>
NucleoString<ADN>::NucleoString(NucleoString<ARN> other){
    cout<<"% WARNING. You are converting a RNA chain into DNA chain"<<endl;
    NucleoString<ADN> temp = other.transcript(); // Falta que ariel me pase esta función.
    this->chain = temp.chain;
    this->header = other.header;
}
template<>
NucleoString<ARN>::NucleoString(NucleoString<ADN> other){
    cout<<"% WARNING. You are converting a DNA chain into an RNA chain"<<endl;
    NucleoString<ARN> temp = other.transcript();
    this->chain = temp.chain;
    this->header = other.header;
}
template<NTYPE ANN>
string NucleoString<>::getfasta(){
    return this->header + this->chain;
}

//! Funciones Ariel-man Revisar por aquello

template<>
NucleoString<ARN> NucleoString<ADN>::transcript(){
	string temp = this->chain;
	n = temp.length();
	for(i=0; i<n; i++){
	if(temp[i] == temp[temp[temp.find_first_of("Aa"))]{
		temp[i] = 'U'
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Tt"))]{
		temp[i] = 'A';
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Cc"))]{
		temp[i] = 'G';
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Gg"))]{
		temp[i] = 'C';
	}
}

template<>
NucleoString<ADN> NucleoString<ARN>::transcript(){
	string temp = this->chain;
	n = temp.length();
	for(i=0; i<n; i++){
	if(temp[i] == temp[temp[temp.find_first_of("Aa"))]{
		temp[i] = 'T'
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Tt"))]{
		temp[i] = 'A';
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Cc"))]{
		temp[i] = 'G';
	}
	if-else(temp[i] == temp[temp[temp.find_first_of("Gg"))]{
		temp[i] = 'C';
	}
}
template<NTYPE ANN>
NucleoString<ANN> NucleoSting<ANN>::cut(int n1, int n2){
	temp = this->chain;
	temp.erase(n1, n2);
	this->chain =temp;
	}

template<NTYPE ANN>
NucleoString<ANN> NucleoString<ANN>::operator+(NucleoString<ANN> other){
    string temp = this->chain + other.chain;
    NucleoString<ANN> retval = NucleoString<ANN>(temp);
    this->header = "";
    return retval;
}
template<NTYPE ANN>
string NucleoString<ANN>::chainret(){
    return this->chain;
}
template<NTYPE ANN>
string NucleoString<ANN>::headerret(){
    return this->header;
}


template<NTYPE ANN>
int NucleoString<ANN>:: compare(string nucleo1, string nucleo2{
list<char> subconjunto;
}


template<NTYPE ANN>
float NucleoString<ANN>::compare(string nucleo1, String nucleo2){
	string subconjunto;
	int n1= nucleo1.size()/2;
	int n2= nucleo2.size()/2;
	int i= 1;
	subconjunto.append(nucleo2.substr(n1-2,n1+2));
	while(nucleo1.find(subconjunto)<npos){
	i++;
		subconjunto.append(substr(n1+i));
		subconjunto.push_back(n1-i);	
	}
	int aciertos = subconjunto.size();
	int totales  = nucleo1.size();
	float porcentaje = aciertos/totales; 	

	return porcentaje;
}




/*!
	int n1=nucleo1.size();
	int n2=nucleo2.size();

	list<string> subconjunto (string[n2/2]);
	list.push_front()

*/





	/*!if(n1<n2){
	for(i=0;i<n3/2; i++){
		nucleo1[n3]
			}
	}
	else{
	int n3=n1;
	}
	string nucleo3 = char[n3];
*/
}
