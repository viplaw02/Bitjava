#include<stdio.h>
#include<string.h>
int main(){
	char name[30];
	int i,j,length,n;
	printf("enter a string:");
	gets(name);
	length = strlen(name);

	for(i=0;i<=length;i++){
		for(j=0;j<=i;j++){
			printf("%c",name[j]);
		}
		printf("\n");
	}
}