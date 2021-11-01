#include<iostream>
using namespace std;
int recursiveBinarySearch(int arr[],int low,int high,int key){
    
	
	if(low<=high){
		int mid=low + ((high-low)/2);
		if(arr[mid]==key)
		    return mid;

	    if(arr[mid]>key)
		    return recursiveBinarySearch(arr,low,mid-1,key);
	
		   return recursiveBinarySearch(arr,mid+1,high,key);
		   
	}
   return -1;	
}
int main(){
	int n,x;
	cin>>n;
	int arr[n],key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
  	x=recursiveBinarySearch(arr,0,n-1,key);
  	if(x==-1)
  	  cout<<"key is not present"<<endl;
  	else
  	   cout<<"key is present"<<endl;
}

