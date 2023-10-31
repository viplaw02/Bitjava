#include<stdio.h>
int main(){
	char name1[30];
	char name2[30];
	 int i, count1 =0,count2=0;
	 printf("enter name1:");
	 gets(name1);
	 for(i=0;name1[i]!='\0';i++)
	 {
	 	count1++;

	 }
     printf("enter name2:");
	 gets(name2);
	 for(i=0;name2[i]!='\0';i++)
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
