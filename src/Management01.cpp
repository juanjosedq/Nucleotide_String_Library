#include "Management.hh"


//Funcion constructora va vacia pero no se si hay que establecerla...
Management::Management(){
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



