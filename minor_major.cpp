#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter Your Age: ";
    cin >> age;

    if(age>=18){
        cout << "You Can Vote Major\n";
    } else{
        cout << "You can not vote Minor\n";
    }
    return 0;
}
