#include <stdio.h>
#include <stdlib.h>
/* CGPA Calculator designed by Linus and Chibuike */
int main(int argc, char *argv[]) {
	int A=5;
	int B=4;
	int C=3;
	int D=2;
	int F=0;
	int UnitCVE211=2;
	int UnitCVE212=1;
	int UnitMEC261=2;
	int UnitMEC211=2;
	int UnitEEE251=3;
	int CVE211,CVE212,MEC261,MEC211,EEE251,ProductCVE211,ProductCVE212,ProductMEC261,ProductMEC211,ProductEEE251,SumUnitLoad,ProductUnitLoad,ECE271,ECE281,CVE221,CVE222,MEC212,ProductECE271,ProductECE281,ProductCVE221,ProductCVE222,ProductMEC212,SumUnitLoad2,ProductUnitLoad2,SumUnitLoads,ProductUnitLoads;
	float GPA1;
	int UnitECE271=4;
	int UnitECE281=1;
	int UnitCVE221=2;
	int UnitCVE222=2;
	int UnitMEC212=3;
	float GPA2;
	float CGPA;
	printf("Enter your Scores your First Semester: \n");
	printf("Score for CVE 211:");
	scanf("%d",&CVE211);
		if(CVE211>=70&&CVE211<=100)
			printf("You made a A! \n");
		else if(CVE211>=60&&CVE211<70)
			printf("You made a B! \n");
		else if(CVE211>=50&&CVE211<60)
			printf("You made a C! \n");
		else if(CVE211>=45&&CVE211<50)
			printf("You made a D! \n");
		else if(CVE211>=0&&CVE211<45)
			printf("You made an F!\n");
	printf("Score for CVE 212:");
	scanf("%d",&CVE212);
		if(CVE212>=70&&CVE212<=100)
			printf("You made a A! \n");
		else if(CVE212>=60&&CVE212<70)
			printf("You made a B! \n");
		else if(CVE212>=50&&CVE212<60)
			printf("You made a C! \n");
		else if(CVE212>=45&&CVE212<50)
			printf("You made a D! \n");
		else if(CVE212>=0&&CVE212<45)
			printf("You made an F!\n");
	printf("Score for MEC 261:");
	scanf("%d",&MEC261);
	if(MEC261>=70&&MEC261<=100)
		printf("You made a A! \n");
	else if(MEC261>=60&&MEC261<70)
		printf("You made a B! \n");
	else if(MEC261>=50&&MEC261<60)
		printf("You made a C! \n");
	else if(MEC261>=45&&MEC261<50)
		printf("You made a D! \n");
	else if(MEC261>=0&&MEC261<45)
		printf("You made an F!\n");
	printf("Score for MEC 211:");
	scanf("%d",&MEC211);
	if(MEC211>=70&&MEC211<=100)
		printf("You made a A! \n");
	else if(MEC211>=60&&MEC211<70)
		printf("You made a B! \n");
	else if(MEC211>=50&&MEC211<60)
		printf("You made a C! \n");
	else if(MEC211>=45&&MEC211<50)
		printf("You made a D! \n");
	else if(MEC211>=0&&MEC211<45)
		printf("You made an F!\n");
	printf("Score for EEE 251:");
	scanf("%d",&EEE251);
	if(EEE251>=70&&EEE251<=100)
		printf("You made a A! \n");
	else if(EEE251>=60&&EEE251<70)
		printf("You made a B! \n");
	else if(EEE251>=50&&EEE251<60)
		printf("You made a C! \n");
	else if(EEE251>=45&&EEE251<50)
		printf("You made a D! \n");
	else if(EEE251>=0&&EEE251<45)
		printf("You made an F!\n");
/*GPCVE211*/
	if(CVE211>=70&&CVE211<=100)
		ProductCVE211=A*UnitCVE211;
	else if(CVE211>=60&&CVE211<70)
		ProductCVE211=B*UnitCVE211;
	else if(CVE211>=50&&CVE211<60)
		ProductCVE211=C*UnitCVE211;
	else if(CVE211>=45&&CVE211<50)
		ProductCVE211=D*UnitCVE211;
	else if(CVE211>=0&&CVE211<45)
		ProductCVE211=F*UnitCVE211;
	/*printf("The GP for CVE211 is %d\n",ProductCVE211);*/
/*GPCVE212*/	
	if(CVE212>=70&&CVE212<=100)
		ProductCVE212=A*UnitCVE212;
	else if(CVE212>=60&&CVE212<70)
		ProductCVE212=B*UnitCVE212;
	else if(CVE212>=50&&CVE212<60)
		ProductCVE212=C*UnitCVE212;
	else if(CVE212>=45&&CVE212<50)
		ProductCVE212=D*UnitCVE212;
	else if(CVE212>=0&&CVE212<45)
		ProductCVE212=F*UnitCVE212;
	/*printf("The GP for CVE212 is %d\n",ProductCVE212);*/
/*GPMEC261*/
	if(MEC261>=70&&MEC261<=100)
		ProductMEC261=A*UnitMEC261;
	else if(MEC261>=60&&MEC261<70)
		ProductMEC261=B*UnitMEC261;
	else if(MEC261>=50&&MEC261<60)
		ProductMEC261=C*UnitMEC261;
	else if(MEC261>=45&&MEC261<50)
		ProductMEC261=D*UnitMEC261;
	else if(MEC261>=0&&MEC261<45)
		ProductMEC261=F*UnitMEC261;
	/*printf("The GP for MEC261 is %d\n",ProductMEC261);*/
/*GPMEC211*/
	if(MEC211>=70&&MEC211<=100)
		ProductMEC211=A*UnitMEC211;
	else if(MEC211>=60&&MEC211<70)
		ProductMEC211=B*UnitMEC211;
	else if(MEC211>=50&&MEC211<60)
		ProductMEC211=C*UnitMEC211;
	else if(MEC211>=45&&MEC211<50)
		ProductMEC211=D*UnitMEC211;
	else if(MEC211>=0&&MEC211<45)
		ProductMEC211=F*UnitMEC211;
	/*printf("The GP for MEC211 is %d\n",ProductMEC211);*/
/*GPEEE251*/
	if(EEE251>=70&&EEE251<=100)
		ProductEEE251=A*UnitEEE251;
	else if(EEE251>=60&&EEE251<70)
		ProductEEE251=B*UnitEEE251;
	else if(EEE251>=50&&EEE251<60)
		ProductEEE251=C*UnitEEE251;
	else if(EEE251>=45&&EEE251<50)
		ProductEEE251=D*UnitEEE251;
	else if(EEE251>=0&&EEE251<45)
		ProductEEE251=F*UnitEEE251;
	/*printf("The GP for EEE251 is %d\n",ProductEEE251);*/
	SumUnitLoad=UnitCVE211+UnitCVE212+UnitMEC261+UnitMEC211+UnitEEE251;
	/*printf("The Sum of All Unit Loads is %d\n",SumUnitLoad);*/
	ProductUnitLoad=ProductCVE211+ProductCVE212+ProductMEC261+ProductMEC211+ProductEEE251;
	/*printf("The Product of All Unit Loads is %d\n",ProductUnitLoad);*/
	GPA1=(float)ProductUnitLoad/SumUnitLoad;
	printf("Your GPA for 1st Smester is %.2f \n",GPA1);
	/* GPA for Second Semester*/
	printf("Enter your Scores your Second Semester: \n");
	printf("Score for ECE271:");
	scanf("%d",&ECE271);
	if(ECE271>=70&&ECE271<=100)
		printf("You made a A! \n");
	else if(ECE271>=60&&ECE271<70)
		printf("You made a B! \n");
	else if(ECE271>=50&&ECE271<60)
		printf("You made a C! \n");
	else if(ECE271>=45&&ECE271<50)
		printf("You made a D! \n");
	else if(ECE271>=0&&ECE271<45)
		printf("You made an F!\n");
	printf("Score for ECE281:");
	scanf("%d",&ECE281);
	if(ECE281>=70&&ECE281<=100)
		printf("You made a A! \n");
	else if(ECE281>=60&&ECE281<70)
		printf("You made a B! \n");
	else if(ECE281>=50&&ECE281<60)
		printf("You made a C! \n");
	else if(ECE281>=45&&ECE281<50)
		printf("You made a D! \n");
	else if(ECE281>=0&&ECE281<45)
		printf("You made an F!\n");
	printf("Score for CVE221:");
	scanf("%d",&CVE221);
	if(CVE221>=70&&CVE221<=100)
		printf("You made a A! \n");
	else if(CVE221>=60&&CVE221<70)
		printf("You made a B! \n");
	else if(CVE221>=50&&CVE221<60)
		printf("You made a C! \n");
	else if(CVE221>=45&&CVE221<50)
		printf("You made a D! \n");
	else if(CVE221>=0&&CVE221<45)
		printf("You made an F!\n");
	printf("Score for CVE222:");
	scanf("%d",&CVE222);
	if(CVE222>=70&&CVE222<=100)
		printf("You made a A! \n");
	else if(CVE222>=60&&CVE222<70)
		printf("You made a B! \n");
	else if(CVE222>=50&&CVE222<60)
		printf("You made a C! \n");
	else if(CVE222>=45&&CVE222<50)
		printf("You made a D! \n");
	else if(CVE222>=0&&CVE222<45)
		printf("You made an F!\n");
	printf("Score for MEC212:");
	scanf("%d",&MEC212);
	if(MEC212>=70&&MEC212<=100)
		printf("You made a A! \n");
	else if(MEC212>=60&&MEC212<70)
		printf("You made a B! \n");
	else if(MEC212>=50&&MEC212<60)
		printf("You made a C! \n");
	else if(MEC212>=45&&MEC212<50)
		printf("You made a D! \n");
	else if(MEC212>=0&&MEC212<45)
		printf("You made an F!\n");
/*GPECE271*/
	if(ECE271>=70&&ECE271<=100)
		ProductECE271=A*UnitECE271;
	else if(ECE271>=60&&ECE271<70)
		ProductECE271=B*UnitECE271;
	else if(ECE271>=50&&ECE271<60)
		ProductECE271=C*UnitECE271;
	else if(ECE271>=45&&ECE271<50)
		ProductECE271=D*UnitECE271;
	else if(ECE271>=0&&ECE271<45)
		ProductECE271=F*UnitECE271;
	/*printf("The GP for ECE271 is %d\n",ProductECE271);*/
/*GPECE281*/	
	if(ECE281>=70&&ECE281<=100)
		ProductECE281=A*UnitECE281;
	else if(ECE281>=60&&ECE281<70)
		ProductECE281=B*UnitECE281;
	else if(ECE281>=50&&ECE281<60)
		ProductECE281=C*UnitECE281;
	else if(ECE281>=45&&ECE281<50)
		ProductECE281=D*UnitECE281;
	else if(ECE281>=0&&ECE281<45)
		ProductECE281=F*UnitECE281;
	/*printf("The GP for ECE281 is %d\n",ProductECE281);*/
/*GPCVE221*/
	if(CVE221>=70&&CVE221<=100)
		ProductCVE221=A*UnitCVE221;
	else if(CVE221>=60&&CVE221<70)
		ProductCVE221=B*UnitCVE221;
	else if(CVE221>=50&&CVE221<60)
		ProductCVE221=C*UnitCVE221;
	else if(CVE221>=45&&CVE221<50)
		ProductCVE221=D*UnitCVE221;
	else if(CVE221>=0&&CVE221<45)
		ProductCVE221=F*UnitCVE221;
	/*printf("The GP for CVE221 is %d\n",ProductCVE221);*/
/*GPCVE222*/
	if(CVE222>=70&&CVE222<=100)
		ProductCVE222=A*UnitCVE222;
	else if(CVE222>=60&&CVE222<70)
		ProductCVE222=B*UnitCVE222;
	else if(CVE222>=50&&CVE222<60)
		ProductCVE222=C*UnitCVE222;
	else if(CVE222>=45&&CVE222<50)
		ProductCVE222=D*UnitCVE222;
	else if(CVE222>=0&&CVE222<45)
		ProductCVE222=F*UnitCVE222;
	/*printf("The GP for CVE222 is %d\n",ProductCVE222);*/
/*GPMEC212*/
	if(MEC212>=70&&MEC212<=100)
		ProductMEC212=A*UnitMEC212;
	else if(MEC212>=60&&MEC212<70)
		ProductMEC212=B*UnitMEC212;
	else if(MEC212>=50&&MEC212<60)
		ProductMEC212=C*UnitMEC212;
	else if(MEC212>=45&&MEC212<50)
		ProductMEC212=D*UnitMEC212;
	else if(MEC212>=0&&MEC212<45)
		ProductMEC212=F*UnitMEC212;
	/*printf("The GP for MEC212 is %d\n",ProductMEC212);*/
	SumUnitLoad2=UnitECE271+UnitECE281+UnitCVE221+UnitCVE222+UnitMEC212;
	/*printf("The Sum of All Unit Loads is %d\n",SumUnitLoad2);*/
	ProductUnitLoad2=ProductECE271+ProductECE281+ProductCVE221+ProductCVE222+ProductMEC212;
	/*printf("The Product of All Unit Loads is %d\n",ProductUnitLoad2);*/
	GPA2=(float)ProductUnitLoad2/SumUnitLoad2;
	printf("Your GPA FOR 2nd Semester is %.2f \n",GPA2);
	SumUnitLoads=SumUnitLoad+SumUnitLoad2;
	ProductUnitLoads=ProductUnitLoad+ProductUnitLoad2;
	CGPA=(float)ProductUnitLoads/SumUnitLoads;
	printf("Your CGPA for your 200 level is: %.2f \n",CGPA);
	return 0;
}
