#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    string nombre_archivo = "datos2.txt";
    ifstream archivo (nombre_archivo);
    
    string texto;
    
    while (getline (archivo, texto))
    {
        cout << texto << endl;
    }
    
    archivo.close();
    
    
    return 0;
}