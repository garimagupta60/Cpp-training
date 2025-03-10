#include<bits/stdc++.h>
using namespace std;
void printtable(int number){
	for(int i=1; i<10; i++){
		cout<<i*number<<endl;
	}
}
int main(){
	int number = 0;
	cin>>number;
	printtable(number);
	return 0;
}
