#include<stdio.h>
int main(){
	char name[30];
	 int i, count1 =0,count2=0;
	 printf("enter name:");
	 gets(name);
	 for(i=0;name[i]!='\0';i++)
	 {
	 	count1++;
	 	
	 }
     printf("enter name:");
	 gets(name);
	 for(i=0;name[i]!='\0';i++)
	 {
	 	count2++;
	 	
	 }
	 if(count1==count2){
	 	printf("your string are equal");
	 	
	 }
	 else{
	 	printf("given string are not equal");
	 }
}
	 
	
