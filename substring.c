#include<stdio.h>
#include<string.h>
int main(){
	char name[20],k,i,j,count=0;
	char name2[20],len,l;
	printf("enter the string :");
	gets(name);
	printf("enter the substring that you are finding in your string :");
	gets(name2);
	len=strlen(name2);
	for(i=0;name[i]!='\0';i++){
		k=i;
		for(j=0;j<len;j++){
			if(name[k]==name2[j]){
				count++;
				k++;
			}
			else{
				break;
			}
		}
		
	}
	if(count==len){
		printf("match found");
	}
	else{
		printf("match not found");
	}
	}
	
