#include<stdio.h>
void main(){
	 int i,j=0,incorect[6]={1,0,0,0,0};
	 char Password[16];
	 printf("Enter The Password : -");
	 scanf("%s",Password);
	 if(strlen(Password)<15)
	 {
	 
		for(i=0;i<strlen(Password);i++){
			if(Password[i]==" "){
		 		incorect[0]=0;
			}
		
		 }
		 
	
		for(i=0;i<strlen(Password);i++){
			if(Password[i]>='0' && Password[i] <= '9'){
				j++;
			}
		}
		 if(j>0){
		 	incorect[1]=1;
		 }
		 j=0;
	
		for(i=0;i<strlen(Password);i++){
			if(Password[i]>='a' && Password[i] <= 'z'){
				j++;
			}
		}
		if(j>0){
		 	incorect[2]=1;
		 }
		 j=0;
	
		for(i=0;i<strlen(Password);i++){
			if(Password[i]>='A' && Password[i] <= 'Z'){
				j++;
			}
		}
		if(j>0){
		 	incorect[3]=1;
		 }
		
		 j=0;
		 
		for(i=0;i<strlen(Password);i++){
if(Password[i]>='?' || Password[i] <= '>' ||   Password[i] <= '<'|| Password[i] <= '@'|| Password[i] <= '#'|| Password[i] <= '$' || Password[i] <= '^'|| Password[i] <= '&'|| Password[i] <= ';'|| Password[i] <= '!'){
				j++;
			}
		}
		if(j>0){
		 	incorect[4]=1;
		 } 
	 	j=0;
		 for(i=0;i<5;i++){
		 	if(incorect[i]!=1)
		 	{
		 		j++;
			}
		 }
		 if(j>0){
		 	printf("Enter Password is not Valid ");
		 	
		 }
		 else{
		 	printf("Enter Password is valid");
		 }
	 
 	}
 	else{
 		printf("Enter Valid Password ");
	 }
}
