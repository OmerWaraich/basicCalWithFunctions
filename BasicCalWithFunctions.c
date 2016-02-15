#include<stdio.h>
#include<stdlib.h>
int add (int i, int j);
int sub (int i, int j);
int mult(int i, int j);
float divide(int i, int j);
int main(){
int fNum,sNum;
char op;
printf("Please enter operation + , - , * , / ");
scanf("%s", &op);
switch(op){
	case '+':
		printf("Please enter first digit (Add Function) : ");
		scanf("%d", &fNum);
		printf("Please enter second digit (Add Function) : ");
		scanf("%d", &sNum);
		printf(" %d + %d = %d", fNum, sNum, add(fNum , sNum));
		break;
	
	case '-':
		printf("Please enter first digit (Subtract Function) : ");
		scanf("%d", &fNum);
		printf("Please enter second digit (Subtract Function) : ");
		scanf("%d", &sNum);
		printf("%d - %d = %d", fNum, sNum, sub(fNum, sNum));
	
	case '*':
		printf("Please enter first digit (Multiply Function) : ");
		scanf("%d",&fNum);
		printf("Please enter second digit (Multiply Function) : ");
		scanf("%d",&sNum);
		printf("%d * %d = %d", fNum, sNum, mult(fNum, sNum));
	case '/':
		printf("Please enter first digit (Divide Function) : ");
		scanf("%d",&fNum);
		printf("Please enter second digit (Divide Function) : ");
		scanf("%d",&sNum);
		printf("%f / %f = %f", (float)sNum,(float)sNum, divide(fNum,sNum));
		
		
    }
}
//Addition Function
int add (int i, int j){
	int z;
	z = i + j;
	return z;
	}
//Subtraction Function
int sub (int i, int j){
	int z;
	z = i - j;
	return z;
	}
//Multiplication Function
int mult(int i, int j){
	int z;
	z = i * j;
	return z;
	}
//Division Function
float divide(int i, int j){
	float z;
	z = i / j;
	return z;
	}
