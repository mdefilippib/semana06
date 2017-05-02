#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    ofstream archivo ("datos.txt");
    
    string texto;
    
    cout << "Ingrese el texto: " << endl;
    
    while (texto != "*")
    {
        getline(cin, texto);
        
        if (texto != "*")
        archivo << texto << endl;
    }
    
    archivo.close();
    
    
    return 0;
}