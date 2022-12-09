#include<iostream>
using namespace std;

int main(){
    int n=1;
    int Even=0;
    int Odd=0;
    

    while(n!=0){
        cout << "Enter an integer: ";
        cin>> n;
        if(n%2!=0){
            Odd++;
        }
        else{
            Even++;
        }
    }
    cout << "#Even numbers = ";
    cout << Even<<"\n";
    cout << "#Odd numbers = ";
    cout << Odd<<"\n";
    return 0;
}