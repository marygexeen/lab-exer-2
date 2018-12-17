#include <iostream>
using namespace std;

void factorial(int num){ //function that computes the factorial
	cout << "The factorial of "<< num << " is: " ;
	for(int i = num-1; i>0; i--)	num *= i;
	cout << num << endl; //displays answer
	
}

int main(){
	int num; //initialization
	
	//gets a number from user
	cout << "Enter a number: ";
	cin >> num;
	
	factorial(num); //calls function that gets the factorial
	return 0;
}
