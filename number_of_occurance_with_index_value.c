#include<stdio.h>
int main(){
	int i,count=0,n,num,k,j;
	int a[100];
	int index[100];
	printf("enter the value that how much element you want to insert :");
	scanf("%d",&n);
	if(n>10){
		printf("your array size is limited ");
		return 1;
		
	}
	printf("enter the element of an array :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the number for see the index value of the enterd number : ");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i]==num){
		    index[count]=i;
		    count++;
		    
	}
}
if(count==0){
printf("the number was not found in array");
}
else
{
	printf("The number was found at the following index :");
	for(i=0;i<count;i++){
		printf(" index: %d  ",index[i]);
	}
}
}
