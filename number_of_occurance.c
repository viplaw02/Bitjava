#include<stdio.h>
int main(){
	int i,count=0,n,num;
	int a[10];
	printf("enter the value that how much element you want to insert :");
	scanf("%d",&n);
	if(n>10){
		printf("your array size is limited ");
		
	}
	printf("enter the element of an array :");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the number for count the frquency : ");
	scanf("%d",&num);
	for(i=0;i<n;i++){
		if(a[i]==num){
		
		
		count++;
	}
}
printf("the number of freuency of that number is : %d",count);	
	
	
}