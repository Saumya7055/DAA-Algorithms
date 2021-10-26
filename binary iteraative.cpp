#include<iostream>
using namespace std;
void iterativeBinarySearch(int arr[],int low,int high,int key){

	int found=0,count=0;
	while(low<=high){
		int mid=low+((high-low)/2);
		if(arr[mid]==key)
		{
		    found=1;
		    count++;
		    break;
		}
		else if(arr[mid]>key){
			low=mid=1;
			count=count+2;
		}
		else {
		   high=mid-1;
		   count=count+2;
	    
		}
	}
	if(found==1)
	cout<<"key is present "<<count<<endl;
	else
		cout<<"key is not present "<<count<<endl;
	
}
int main(){
	int n;
	cin>>n;
	int arr[n],key,low=0,high=n-1;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	iterativeBinarySearch(arr,low,high,key);
}

