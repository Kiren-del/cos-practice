#include <iostream>
#include <cstdlib>
using namespace std;

typedef struct human_st {
	const char*name;
	int age;
	int gender; // 0 for a man, 1 for a woman
	void (*print)(struct human_st *);
} human_t;

void print_info(human_t *h){
	cout << "name: " << h->name << "age: " << h->age << endl;
};

int main(int argc, char*argv[]){
	human_st *hw;

	hw = (human_st*)malloc(sizeof(human_st));
	hw->name = "Kyuho";
	hw->age = 21;
	hw->print = print_info;

	hw->print(hw);

	return 0;
}
