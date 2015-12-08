#include "Management.hh"


//Funcion constructora va vacia pero no se si hay que establecerla...
Management::Management(){
{

void management:txt(string titulo, NucleoString){
	ofstream fs(titulo".txt");
	fs <<">"titulo"\n" << endl;
	fs << NucleoString << endl; 
}


String management:loadString(string file){
	ifstream fe(file".text");
	fe.getline(fe,line);
	string nucleotide = fe.getline(fe,line);
	return nucleotide;
}



