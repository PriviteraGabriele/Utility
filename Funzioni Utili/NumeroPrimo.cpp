/* Implementare il test di primalità come funzione "bool Primo(int x)" 
che prende in input un intero naturale, verifica che sia maggiore di 1 
e ritorna vero se il numero è primo e falso altrimenti. La funzione 
implementa la ricerca di divisori sino alla rad(x) etermina immediatamente 
quando trova un divisore, oppure quando supera il valore di rad(x). */

#include<iostream>
using namespace std;

bool Primo(int x){
    if(x > 1){
        int counter = 0;        //Contatore dei divisori
        int div = 1;
        while(counter <= 1 && div <= x/2){
            if(x % div == 0){
                counter++;
            }
            div++;
        }

        if(counter == 1){
            return true;
        }
        else{
            return false;
        }
    }
    
    return false;
}

int main(){
    int x;

    cout << "Inserire un numero per scoprire se è un numero Primo: ";
    cin >> x;

    if(Primo(x)){
        cout << x << " è un Numero Primo!" << endl;
    }
    else{
        cout << x << " non è un Numero Primo!" << endl;
    }
}
