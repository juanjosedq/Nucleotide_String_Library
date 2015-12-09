#include "Management.hh"
#include "istream"


Management::Management(void){
{

void Management::txt(string titulo, NucleoString<ADN> nucleo){
	ofstream fs(titulo);
	fs <<">"titulo"\n" << endl;
	fs << nucleo << endl; 
}


string Management::loadString(string file){
	ifstream fe(file);
	fe.getline(fe,line);
	string nucleotide = fe.getline(fe,line);
	return nucleotide;
}



