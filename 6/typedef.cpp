#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
	const char*name;
	int age;
	int gender; // 0 for a man, 1 for a woman
} human_t;

int main(int argc, char*argv[]){
	human_st *hw;

	hw = (human_st*)malloc(sizeof(human_st));
	hw->name = "Kyuho";
	hw->age = 21;
	hw->gender = 0;

	cout << "name: " << hw->name << "age: " <<  hw->age << "gender: " << hw->gender << endl;
	return 0;
}
