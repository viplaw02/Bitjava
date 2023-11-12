#include<stdio.h>
void main(){
	char str[20];
	char character;
	int i,count = 0;
	printf("enter the string:");
	gets(str);
	printf("enter the char would you like to find how many times occur in the string:");
	scanf("%c",&character);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==character){
				count++;
				
		}
	}
	printf("the number of  occurance of your character are : %d",count);
}