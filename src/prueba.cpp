#include <iostream>
#include <fstream>

using namespace std;

int main(){
  
  ifstream file("/home/juan/Documents/IISemestre2015/Estructuras/prueba/datos/799_A.txt");

  //Read data
  char leer[128];
  file.getline(leer, 128);
  cout << leer << endl;	

  return 0;
}



