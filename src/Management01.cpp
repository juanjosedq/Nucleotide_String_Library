#include "Management.hh"



Management::Management(void){
{

void Management::txt(string titulo, NucleoString<ADN> nucleo){
	ofstream fs(titulo".txt");
	fs <<">"titulo"\n" << endl;
	fs << nucleo << endl; 
}


string Management::loadString(string file){
	ifstream fe(file".text");
	fe.getline(fe,line);
	string nucleotide = fe.getline(fe,line);
	return nucleotide;
}



