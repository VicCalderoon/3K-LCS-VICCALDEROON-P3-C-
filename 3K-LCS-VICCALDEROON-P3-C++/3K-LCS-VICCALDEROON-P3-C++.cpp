// 3K-LCS-VICCALDEROON-P3-C++.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//ARREGLOS EN C++

#include <iostream>
using namespace std;
int main()
{
    int numeros[6] = { 10,20,30,40,50,60 };
    int n[] = { 3,4,5 };
    int suma = 0;
    char letra = 0;
    char c[] = { 'L','u','i','s' };
    char s[] = "mona lisa";
     
    for (int i = 0; i < 3; i++) {
        suma += n[i];
    }
    cout << "la suma de los 3 elemntos es :" << suma << endl;

    for (int i = 0; i < 4; i++) {
        cout << i << " --> " << c[i] << endl;
    }
    cout << " El cuadro de da vinci es: " << s << endl;
    
    return 0;

}