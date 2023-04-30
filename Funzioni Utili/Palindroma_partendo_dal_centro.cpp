#include<iostream>
using namespace std;

int main(){
    string s = "ciacorociao";
    int mid = s.length()/2;
    int c1 = mid - 1;
    int c2 = mid + 1;
    string pal = "";
    pal+= s[mid];
    while(c1 > 0){
        if(s[c1] == s[c2]){
            pal = s[c1] + pal + s[c2];
        }
        else{
            break;
        }
        c1--;
        c2++;
    }
    cout << "Stringa iniziale: " << s << endl;
    cout << "Stringa palindroma a partire dal centro: " << pal << endl;
    cout << "lunghezza: " << pal.length() << endl;
}