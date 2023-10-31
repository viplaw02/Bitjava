#include<stdio.h>
#include<string.h>
int main(){
	char name1[30];
	char name2[30];
	 int i, count1 =0,count2=0,length1,length2;
	 printf("enter name1:");
	 gets(name1);
	 printf("enter name2:");
	 gets(name2);
	 length1=strlen(name1);
	 length2=strlen(name2);
	 for(i=0;i<=length2;i++)
	 {
	 	name1[length1+i] = name2[i];
	 }
	 printf("%s",name1);
}
	