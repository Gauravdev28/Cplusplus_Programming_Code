#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number :";
    cin >> n;

    for (int i=1 ; i<=n ; i++){
        char ch='A'+i-1;
        for (int j=i-1 ; j>=0 ; j--){
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
    return 0;
}