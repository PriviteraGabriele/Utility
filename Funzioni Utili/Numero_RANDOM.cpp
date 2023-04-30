#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
    srand(time(NULL));
    int rnd = rand() % 23;
    cout << rnd << endl;
}