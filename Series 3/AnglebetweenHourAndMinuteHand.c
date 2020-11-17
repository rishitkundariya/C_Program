#include<stdio.h>
void main(){
	int hour,minit;
	float angleHour,angleMinit;
	printf("Enter Hour :- ");
	scanf("%d",&hour);
	printf("Enter Minit :- ");
	scanf("%d",&minit);
	if((hour>=0 && hour <=12) && (minit >=0 && minit <= 60)){
		if(hour==0 || hour==12){
			angleHour=0;
		}
		else{
			angleHour=(0.5)*hour*60;
		}
		angleHour =angleHour + (0.1*minit*6);
	
		if(minit==0 || minit==60){
			angleMinit=0;
		}
		else{
			angleMinit=minit*6;
		}
		if(angleMinit>angleHour){
printf("Angle Bettween hour and minit is %f",(angleMinit-angleHour));
		}
		else{
printf("Angle Bettween hour and minit is %f",(angleHour-angleMinit));
		}
	}
	else{
		printf("Enter Properly ");
	}
	
}
