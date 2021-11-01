#include<iostream>
using namespace std;
void towerofHanoi(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==0) {
	return;
    } 
	towerofHanoi(n-1,from_rod,aux_rod,to_rod);
	cout<<"Move disk "<<n<<" from_rod "<<from_rod<<" to rod "<<to_rod<<endl;
	towerofHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main(){
	int n;
	cin>>n;
	towerofHanoi(n,'A','C','B');
	return 0;
}
