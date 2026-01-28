#include<iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter Number :";
    cin >> i;
    int sum=0;
    for(int j=1; j<=i ; j++){
        sum=j+sum;
    }
    cout << "Sum :" << sum <<endl;
    return 0;
}
