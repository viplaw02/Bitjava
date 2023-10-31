#include<stdio.h>
int main(){
	char name[30];
	 int i,j,count =0;
	 printf("enter name:");
	 gets(name);
	 for(i=0;name[i]!='\0';i++)
	 {
	 	count++;
	 	
	 }
    for(j=count-1;j>=0;j-- ){
    	
    	printf("%c",name[j]);
    	
	}
}
