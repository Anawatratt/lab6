#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;

    int Even=0;
    int Odd=0;
    while(n==0){
        if(n%2!=0){
            Odd++;
        }
        else{
            Even++;
        }
        cout << "Enter an integer: ";
        cout << n<<"\n";
    }
    cout << "#Even numbers = ";
    cout << Even<<"\n";
    cout << "#Odd numbers = ";
    cout << Odd<<"\n";
    return 0;
}