#include<stdio.h>
#include<string.h>
int main(){
	int length;
	char temp;
	char name[30];
	 int i,j,count =0;
	 printf("enter name:");
	 gets(name);
	 length=strlen(name);
	 for(i=0;i<length/2;i++){
	 	temp =name[i];
	 	name[i]=name[length-1-i];// because l=1 to 7 then l-1 why i because jab hum waspas ayange length
	 	name[length-1-i]=temp;   // same hi to rahaegi hame length 1 or kam chiaye thats why.
	 	
	 }
	printf("%s",name);
	 	
	 
	 
}
	 
