#include <iostream>
using namespace std;
int check_validity(int a, int b) {
	if (b>a) return 1;
	else return 0;
}
int sum_up(int a, int b) {
	int sum = 0;
	for (int i =a; i <= b; i++){
		sum +=i;
	}
	return sum;
}
int main (int argc,char*argv[]) {
	int num1,num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	if (check_validity(num1, num2) == 1) {
		int result = sum_up(num1, num2);
		cout << "The sum is: " << result << endl;
	} else {
		cout << "The second number must be bigger than the first. Quitting..." << endl;
	}
	return 0;
}
