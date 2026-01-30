#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter Number :";
    cin >> n;
    int num=0;

    for(int i=1; i<=n; i++){
        num++;
        for (int j=1; j<=i ; j++){
            cout << num <<" "; // another logic are using cout<<(i+1)
            
        }
        cout << endl;
    }
    return 0;
}