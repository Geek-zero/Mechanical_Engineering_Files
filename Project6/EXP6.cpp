#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const double G=9.812;
	const double PI=3.142;
	float N, n, m, h, t, r, A, B;
	cout<<"Enter the value of N is \n";
	cin>>N;
	cout<<"Enter the value of n is \n";
	cin>>n;
	cout<<"Enter the value of m is \n";
	cin>>m;
	cout<<"Enter the value of h is \n";
	cin>>h;
	cout<<"Enter the value of t is \n";
	cin>>t;
	cout<<"Enter the value of r is \n";						
	cin>>r;
	A=((N*m)/(N+n))*(((G*h*t*t)/(8*PI*PI*N*N))-(r*r));
	cout<<"The value of Ia is "<< A <<endl;
	B=((N*m)/(N+n))*r*(((G*n*t*t)/(4*PI*N*N))-r);
	cout<<"The value of Ib is "<< B <<endl;
	return 0;
}
