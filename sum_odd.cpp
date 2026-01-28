#include<iostream>
using namespace std;
int main(){
    int number;
    cout << "Enter Your Number :";
    cin >> number;
    int sum =0;
    
    for(int i=0 ; i<=number ; i++){
        if (i%2 != 0){
            cout << i << endl;
            sum+=i;
        }
    }
    cout << "Sum :" << sum << endl;
    return 0;
}