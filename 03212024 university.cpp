#include <iostream>
using namespace std;

int main(){
	//initialization
	int userinput, output;
	
	//printing the instructions
	cout<<"enter the table";
	cin >> userinput;
	
	//applying loap to print out user table
for (int i=1; i<=10; i++){
	//formula to get the answer ex:2x2
	output = userinput*i;
	
	//printing in a pattern
	cout << userinput <<"x" <<i<< "=" << output << endl;
}

	
	return 0;
	
}
