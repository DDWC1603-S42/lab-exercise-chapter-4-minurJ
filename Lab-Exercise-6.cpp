//convert the program below to a "do...while" loop
#include <iostream>
using namespace std;
int main(){
int n;

do {
	cout<<"Enter a positive integer: ";
        cin>>n;
	cout<<"The integer your entered is non-negative."<<endl;
	cout<<"Enter 0 or less to stop this program."<<endl<<endl;
}
	while(n>0);
}
