#include"muestra.hh"
#include"experimento.hh"
#include <iostream>
#include <fstream>

muestra::muestra(string archivo){
	ifstream file (archivo);
	string line;
	getline(file, line);
	getline(file, line);
	n=line.size()
	
	for( int i=0; i<n-1; i++){
	datos[i] = line[i];
	}
}

Nucleostring Nucleostring::add& operator+(Nucleostring<ANN> m1, Nucleostring<ANN> m2,int n0){
		
	n1 = m1.length;
	n2 = m2.length;	
	Nucleostring m3[n1+n2];
	if (n = NULL){
		for(int i =0; i<n1-1; i++){
			m3[i] = m1[i]	
		}
	for(int j=0; j<n2-1; i++){
		m3[n1+j] = m2[j]
	}
	return m3
	}	
	else {
		for(int i=0; i<=n0-1; i++){
			m3[i] = m1[i];
		}
		for(int j=0; j<=n2-1; j++){
			m3[n0+j] = m2[j];
		}
		for(int k=0; k<=n2-1; k++){
			m3[n0+n2+j] = m3[n0+j];
		}
	}
	return m3
}

Nucleostring:: arn-complement(Nucleostring<ADN> m1)
	n1 = m1.length;
	
	for(int i=0; i<=n1; i++){
		while(m[i]=T){
			m[i]=U
			}
		}

Nucleostring:: cut(Nucleostring<ANN> m1; int n)



