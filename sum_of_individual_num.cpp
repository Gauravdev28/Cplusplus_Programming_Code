#include<iostream>
using namespace std;
int main(){
    cout<<"Gaurav Agarwal"<<endl;
    cout<<"BETN1AI25099"<<endl;
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
