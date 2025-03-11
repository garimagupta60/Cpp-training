#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number"<<endl;
    cin>>number;
    for(int i=0; i<5; i++){
        cout<<i*number<<endl;
    }
    return 0;
}
