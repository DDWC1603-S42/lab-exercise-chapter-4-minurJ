//convert the program below to a "do...while" loop
#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter a non-negative integer: ";
cin>>n;

do {
	cout<<"The integer your entered is non-negative."<<endl;
	cout<<"Enter a non-negative integer";
	cin>>n;
}
	while(n<0);
}
