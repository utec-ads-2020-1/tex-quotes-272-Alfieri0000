#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int main(){
    string input;
    string salida;
    bool inicio = true; //Nos indica si es el primer "", o el de salida
    
    while (getline(cin,input)){
        for(char c : input) {
            if (c == 34 && inicio){
                salida = salida + "``";
                inicio = false;
            }
            else if(c == 34 && !inicio){
                salida = salida + "''";
                inicio = true;
            }
            else{
                salida = salida + c;
            }
        }
    salida = salida + "\n";
    }
    cout << salida;
    return 0;
}