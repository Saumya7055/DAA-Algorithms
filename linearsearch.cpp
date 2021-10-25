#include<iostream>
using namespace std;
void linearSearch(int arr[],int n,int key){
	int found=0,count=0;
	for(int i=0;i<n;i++){
		count++; //no of comparisons
		if(arr[i]==key){
		   found=1;
		   break;
	    }
	}
	if(found==1)
		cout<<"key is  present"<<count<<endl;
	else
	   cout<<"key is not present"<<count<<endl;
	
}
int main(){
	int n;
	cin>>n;
	int arr[n],key;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>key;
	linearSearch(arr,n,key);
}

