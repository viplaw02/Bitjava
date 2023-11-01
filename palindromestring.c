#include<stdio.h>
#include<string.h>
int main(){
	char name[10];
	char temp1;
	char original[10];
	int i,length;
	printf("enter the string:");
	gets(name);
	strcpy(original,name);
	length=strlen(name);
	for(i=0;i<=length/2;i++){
		temp1 = name[i];
		name[i] = name[length-1-i];
		name[length-1-i] = temp1;
		
	}
	if(strcmp(original,name)==0){
		printf("this is palindrome string");
	}
	else{
		printf("this is not a palindrome string");
	}
return 0;
	
}