#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
    int arr[100];

	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}


	for(int i=0;i<=n-2;i++){
		int flag=0;
		for(int j=0;j<=n-i-2;j++){
			flag=1;
			swap(arr[j],arr[j+1]);
		}
		if(flag==0){
			break;
		}
	}

	cout<<"After sorting"<<end;
    for(int i=n;i>=0;i++){
		cout<<arr[i]<<endl;
	}

	return 0;
}