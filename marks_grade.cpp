#include<iostream>
using namespace std;
int main(){
    int marks ;
    cout << "Enter Your Marks :";
    cin >> marks;

    if(marks>=30 and marks<=50){
        cout << "Fail\n";
    }else if (marks>50 and marks<=75){
        cout << "Pass\n";
    }else if(marks>75 and marks<=100){
        cout << "Topper\n";
    }else {
        cout << "Invalid Number\n";
    }
    return 0;
}