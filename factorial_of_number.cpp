/*
precious idehen

program : this program finds the factorial of a number by asking the
		  user to enter a number. it's validates the users input if 
		  it is less than zero.
*/

#include <iostream>
using namespace std;

int factorial(int num) {
	if(num == 1 || num == 0) {
		return 1;	
	}else {
		return num * factorial(num - 1);
	}
}
int main() {
	
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	while(num < 0) {
		cout<<"invalid input"<<endl;
		cout<<"Enter a valid input: ";
		cin>>num;
	}
	cout<<num<<"! = "<<factorial(num);
}
