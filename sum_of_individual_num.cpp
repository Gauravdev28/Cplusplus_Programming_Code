#include<iostream>
using namespace std;
int main(){
    int i,sum=0, number;
    cout<<"Enter the Positive Integer:";
    cin>>i;

    while(i>0){
        number=i%10;
        sum=sum+number;
        i=i/10;
    }
    cout<<"Sum of Number:"<<sum ;
    return 0;

}
