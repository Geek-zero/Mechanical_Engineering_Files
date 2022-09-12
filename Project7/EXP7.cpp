#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a, b, c, d, e;
	cout<<"Enter the value of Slope \n";
	cin >> a;
	cout<<"Enter the value of radius (r) \n";
	cin >> b;
	cout<<"Enter the value of Radius (R) \n";
	cin >> c;
	d=((a*(1-(b/c)))/2);
	e=d*100;
	cout<<"The value of efficiency is \n"<<e; 
	return 0;
}
