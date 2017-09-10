#include<iostream>
using namespace std;

void bubsort(int arr[], int n) {
	int i, j, tmp;
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-i-1; j++) {
			if(arr[j] > arr [j+1]) {
				tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;		
			}
		}
	} 
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	bubsort(arr, 10);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	} 
	return 0;
}
