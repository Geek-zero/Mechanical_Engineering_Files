#include <iostream>

using namespace std;
/* Done and DUsted by LINUS */

int main(int argc, char** argv) {
	float a, b, c, d, e, f, h, i, j, k, l, m, n, o;
	const double g=9.812;
	cout<<"Enter the value of Young Modulus E: \n";
	cin>>a;
	cout<<"Enter the value of Inertia I: \n";
	cin>>b;
	cout<<"Enter the value of Weight per unit length W: \n";
	cin>>c;
	cout<<"Enter the value of Length of Shaft L: \n";
	cin>>e;
	cout<<"Enter the value of Constant Dependent C1: \n";
	cin>>f;
	cout<<"Enter the value of Constant Dependent C2: \n";
	cin>>h;
	i=(a*b*g*f);
	j=(a*b*g*h);
	k=(c*e*e*e*e);
	l=(i/k);
	m=sqrt(l);
	n=(j/k);
	o=sqrt(n);
	cout<<"Your Value of F1 is \n"<<m;
	cout<<"Your Value of F1 is \n"<<o;
	return 0;
}
