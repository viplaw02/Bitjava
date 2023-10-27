#include<iostream>
using namespace std;
int binarysearch(int arr[] , int size , int key){
	int start =0;
	int end =size-1;
	int mid=start+(end-start)/2;
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]==key){
				
			return mid;
			
		}
		else if(key>arr[mid]){
			start=mid+1;
			
		}
		else
		{
			end=mid-1;
		}
}

	return -1;

}
int main(){
	int arr[] ={1,2,3,4,5,6,7};
	int found,key;
	found=binarysearch(arr,7,2);
	if(found!=-1){
		cout<<"found at index:"<< found<< endl;
	}
	else{
		cout<<"not found at any index"<<endl;
	}
	return 0;
}