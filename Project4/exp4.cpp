#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float F1, F2, F3, FB, L1, L2, L3, LCG, LE;
	cout <<"Enter the value of F1 \n";
	cin >>F1;
	cout<<"Enter the value of F2 \n";
	cin >>F2;
	cout<<"Enter the value of F3 \n";
	cin >>F3;
	FB=5.005;
	L1=20;
	L2=40;
	L3=80;
	LCG=50;
	LE=100;
	float L1E, L2E, L3E, LCGE, F1L1E, F2L2E, F3L3E, FBLCGE, RO, RE, REI, ROI, LI, F;
	F=36.036;
	cout<<"Enter the value of LI(OH) \n";
	cin >>LI;
	L1E=L1/LE;
	L2E=L2/LE;
	L3E=L3/LE;
	LCGE=LCG/LE;
	F1L1E=F1*(1-L1E);
	F2L2E=F2*(1-L2E);
	F3L3E=F3*(1-L3E);
	FBLCGE=FB*(1-LCGE);
	RO=F1L1E+F2L2E+F3L3E+FBLCGE;
	RE=(1/LE)*((F1*L1)+(F2*L2)+(F3*L3)+(FB*LCG));
	REI=0.01*((F*LI)+(FB*LCG));
	ROI=(F*(1-(LI/LE)))+2.45;
	cout<<"The value of RO "<< RO <<"\n";
	cout<<"The value of RE "<< RE <<"\n";
	cout<<"The value of ROI "<< ROI <<"\n";
	cout<<"The value of REI "<< REI;
	return 0;
}
