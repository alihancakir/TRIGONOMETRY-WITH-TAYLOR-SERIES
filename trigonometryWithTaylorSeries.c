//10 step taylor series for sin(x) and cos(x)

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<windows.h>
float conc=1.0;
void factorialForCos(int c){	//cos(x)
int k;
int a=1;
conc=1.0;
a=2*c;
	for(k=1;k<=a;k++){
		conc=conc*k;	
}
}
void factorialForSin(int c){	//sin(x)
int k;
int a=1;
conc=1.0;
a=(2*c)+1;
	for(k=1;k<=a;k++){
		conc=conc*k;	
}
}
int main () {
	system("color E5");
	printf("\t\t\t\t\t\t cos(x) & sin(x) Taylor Series \n");
	int chosenValue;
	const float pi=3.14159;
	int i,j,c;
	int t=1;
	int degree;
	float x=0.0;;
	float sumConclusion=0.0;
	float conclusion=0.0;
	printf("1) cos(x) \t\t");
	printf("2) sin(x) \n");
	printf("Please chocie...\n");
	scanf("%d",&chosenValue);
	system("cls");
	printf("Please enter value(degree)\n");
	scanf("%d",&degree);
	x= (degree*pi)/180.0;
	if(degree==360){
		x=0;
	}
	if(chosenValue==1){		//cos(x) 
	
		for(i=1;i<=10;i++){
			factorialForCos(i);
			int z=2*i;
			conclusion=(float)(pow(-1,i)*pow(x,z))/(conc);
			sumConclusion=sumConclusion+conclusion;
		}
		sumConclusion+=1;
		printf("%lf",sumConclusion);

	}
	else if(chosenValue==2){	//sin(x) 
		
			for(i=1;i<=10;i++){
			factorialForSin(i);
			int z=(2*i)+1;
			conclusion=(float)(pow(-1,i)*pow(x,z))/(conc);
			sumConclusion=sumConclusion+conclusion;
		}
		sumConclusion=(sumConclusion+x);
		printf("conclusion is: %lf",sumConclusion);
	}
	else {
		printf("Invalid choice. Please choose a valid option");
		return 0;
	}
	printf("\n");
	system("pause");
	return 0;
}


