#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	const double PI = 3.142;
	const double G = 9.812;
	float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
	printf("Enter the value of LS \n");
	scanf("%f",&a);
	g=a*a;
	printf("Enter the value of LT \n");
	scanf("%f",&b);
	h=b*b;
	printf("Enter the value of LJ \n");
	scanf("%f",&c);
	i=c*c;
	printf("Enter the value of OSOT \n"); 
	scanf("%f",&d);
	j=d*d;
	printf("Enter the value of OBOT \n");
	scanf("%f",&e);
	k=e-d;
	l=k*k;
	m=2*b*d;
	n=2*c*k;
	o=2*a*c;
	p=(-1)*g;
	q=(-1)*l;
	r=p+h+j;
	s=p+i+l;
	t=q+g+i;
	u=r/m;
	v=s/n;
	w=t/o;
	x=acos(u)*180/PI;
	y=acos(v)*180/PI;
	z=acos(w)*180/PI;
	f=y+z;
	printf("The value for Tita T is %.2lf \n",x);
	printf("The value for Tita J is %.2lf \n",y);
	printf("The value for Tita S is %.2lf \n",f);
	float FW, FT, FJ, NFW, J1, J2, J3, J4, J5, F1, F2, F3, F4, F5;
	printf("Enter the value of FW: \n");
	scanf("%f",&FW);
	NFW=(FW*G)/1000;
	J1=sin((acos(u)*180/PI)+(acos(v)*180/PI)+(acos(w)*180/PI));
	J2=sin(acos(u)*180/PI);
	J3=sin((acos(u)*180/PI)+(acos(v)*180/PI));
	J4=J1+J2;
	J5=J4/J3;
	FJ=J5*NFW;
	F1=sin((acos(u)*180/PI)+(acos(v)*180/PI)+(acos(w)*180/PI));
	F2=sin(acos(v)*180/PI);
	F3=sin((acos(u)*180/PI)+(acos(v)*180/PI));
	F4=F1+F2;
	F5=F4/F3;
	FT=F5*NFW;
	printf("The value for FJ,theo is %.2f \n",FJ);
	printf("The value for FT,theo is %.2f \n",FT);
	
	return 0;
}
