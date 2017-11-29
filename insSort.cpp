#include<iostream>
using namespace std;

void inssort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
		int j = i;
		int tmp = arr[j];
		while(tmp < arr[j-1] && j > 0) {
			arr[j] = arr[j-1];
			j = j-1;
		}
		arr[j] = tmp;
	}
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	inssort(arr, 10);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	return 0;
}
