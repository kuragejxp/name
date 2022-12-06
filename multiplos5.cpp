#include <iostream>
using namespace std;

int main() {

    cout<<"Ingresa un numero entero: ";

    int xOne; 
    cin>>xOne;

    while(xOne>=0){
        cout<<xOne<<endl;
        int xIsMult = xOne %5;

        if (xIsMult == 0){cout<<"si es multiplo"<<endl;}

        xOne = xOne - 1;
    }
}





