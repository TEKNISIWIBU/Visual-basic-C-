#include<iostream>

using namespace std;

int main() {
	int a = 5;
	cout << "masukkan angka" << endl;
	cin >> a ;
   if (a==5){
	   cout << "password benar" << endl;
   }
   else
   {
	   cout << "password salah" << endl;
   }
   cout << "selsai" << endl;

   cin.get();
   return 0;

}