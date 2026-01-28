#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter Your Character :";
    cin >> ch;

    if('a'<=ch && ch<='z'){
        cout << "Lower Case Character\n";
    }else if ('A'<=ch && 'Z'>=ch){
        cout << "Upper Case Character\n";
    } else{
        cout << "Invalid Character\n";
    }
    return 0;
}