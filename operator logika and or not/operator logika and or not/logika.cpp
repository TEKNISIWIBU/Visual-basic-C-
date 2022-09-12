#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 4;
	bool hasil;

	//not
	//hasil = !(a == 3);
    //and
	hasil = (a == 2) and (b ==4);
	// nilai yang akan di keluarkan 
	cout << "and = " ;
	cout << hasil<< endl;

	cin.get();
	return 0;
}