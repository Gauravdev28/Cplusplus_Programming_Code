#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number";
    cin >> n;
    int sum =1 ;

    for (int i=1; i<=n ; i++){
        cout << i <<" ";
        sum=sum*i;
    }
    cout << "Sum :" << sum <<endl;
    return 0;
}