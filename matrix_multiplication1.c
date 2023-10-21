#include<stdio.h>
int main(){
	int i,j,row1,col1,row2,col2,k;
	int a[10][10],b[10][10],result[10][10];
	printf("enter the number of row1 that  you want to : ");
	scanf("%d",&row1);
    printf("enter the number of col1 that  you want to : ");
	scanf("%d",&col1);
	printf("enter the number of row2 that  you want to : ");
	scanf("%d",&row2);
    printf("enter the number of col2 that  you want to : ");
	scanf("%d",&col2);
	if(col2!=row1){
		printf("matrix multipliction is not possible");
		return 1;
	}
	  printf("Enter the elements of the first matrix:\n");
	for( i = 0;i < row1 ; i++){
		for( j = 0;j < col1; j++){
			scanf("%d",&a[i][j]);		
		}
	}
	printf("Enter the elements of the second matrix:\n");
	for( i=0;i<row2;i++){
		for( j=0;j<col2;j++){
			scanf("%d",&b[i][j]);		
		}
	}
		for( i=0;i<row1;i++){
		for( j=0;j<col2;j++){
			result[i][j]=0;
			
			for(k=0;k<row2;k++){
				result[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for( i=0;i<row1;i++){
		for( j=0;j<col2;j++){
			printf("%d ",result[i][j]);
			
		}
		printf("\n");
	
}
	
}