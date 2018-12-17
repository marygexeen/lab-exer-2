#include <iostream>
using namespace std;

void max(int x, int y){ //determines the greater value among 2 numbers
	cout << "The greatest number between " << x << " and " << y << " is: ";
	
	//displays the answer
	if(x>y) cout<< x << endl;
	else if (x<y) cout<< y<< endl;
	else cout << "None. The values are equal." << endl;

}

int main(){
	int x,y; // initialization
	
	//gets input (2 numbers) from user
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter second number: ";
	cin >> y;
	
	max(x,y); //calls function that gets the greater value

	return 0;	
}
