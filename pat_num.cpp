#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number :" ;
    cin >> n;
    int pattern;
    cout << "Print Element Name/Number/Sign :";
    cin >> pattern;

    for (int i=1; i<=n ;i++){
        for (int j=1 ; j<=pattern ;j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
