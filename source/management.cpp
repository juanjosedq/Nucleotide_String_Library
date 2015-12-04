#include <algo/blast/blastinput/blast_input.hpp>
#include <algo/blast/blastinput/blast_fasta_input.hpp>
#include <iostream>
#include <fstream>
#include "NucleoString.h"
#include "management.h"
using namespace std;

management:txt(string titulo, NucleoString){
	ofstream fs(titulo".txt");
	fs <<">"titulo"\n" << endl;
	fs << NucleoString << endl; 
}



