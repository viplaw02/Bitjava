#include<stdio.h>
#include<string.h>
char swap(char str1[],char str2[], int length){
	char temp ;
	int i;
	for(i=0;i<length/2;i++){
		temp = str1[i];
		str1[i] = str2[i];
		str2[i] = temp;
	}
		printf("after swaping\n %s",str1);
			printf("\n");
		printf("%s",str2);
	}

int main(){
	char str1[30];
	char str2[30];
	int length;
	printf("enter the string 1:");
	gets(str1);
	printf("enter the string 2:");
	gets(str2);
	printf("before swapping");
	printf("\n");
	printf("%s",str1);
	printf("\n");
	printf("%s",str2);
	printf("\n");
	length=strlen(str1);
	swap(str1,str2,length);
     return 0;
}