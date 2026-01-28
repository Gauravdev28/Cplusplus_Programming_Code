#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter Your Number :";
    cin >> number;

    if(number%2==0){
        cout << "Even\n";
    } else {
        cout << "Odd\n";
    }
    return 0;
}