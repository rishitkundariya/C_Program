#include<stdio.h>
#include <math.h>
int convertDecimalToOctal(int decimalNum);
int  convertOctalToDecimal(int octalNum);

void main(){
	int r=0,n;
	printf("Enter 1 For Octal To Decimal \n Enter 2 For Decimal To Octal ");
	scanf("%d",&r);
	if(r==1){
		printf("Enter Octacl Number :- ");
		scanf("%d",&n);
		printf("Octal :- %d = Decimal :- %d ",n,convertOctalToDecimal(n));
	}
	else if(r==2){
		printf("Enter Decimal Number :- ");
		scanf("%d",&n);	
		printf("Decimal :- %d = Octal :- %d ",n,convertDecimalToOctal(n));
	}
	else{
		printf("Enter Valid Number ");
	}
	
}
int convertDecimalToOctal(int decimalNum)
{
    int octalNum = 0, i = 1;

    while (decimalNum != 0)
    {
        octalNum += (decimalNum % 8) * i;
        decimalNum /= 8;
        i *= 10;
    }

    return octalNum;
}
int convertOctalToDecimal(int octalNum)
{
    int decimalNum = 0, i = 0;

    while(octalNum != 0)
    {
        decimalNum += (octalNum%10) * pow(8,i);
        ++i;
        octalNum/=10;
    }
i = 1;
                     return decimalNum;
}
