#include<iostream>
using namespace std;

void selsort(int arr[], int n) {
	int i, j, min, tmp;
	for(i = 0; i < (n-1); i++) {
    min = i;
		for(j = i+1; j < n; j++) {
			if(arr[j] < arr[min]) {
        min = j;
      }
    }
    if(min != i) {
      tmp = arr[i];
			arr[i] = arr[min];
      arr[min] = tmp;
    }
	}
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++) {
		cout<<"\nEnter element "<<i<<"\n";
		cin>>arr[i];
	}
	selsort(arr, 10);
	cout<<"\nAfter sorting:\n";
	for(int i = 0; i < 10; i++) {
		cout<<"arr["<<i<<"] = "<<arr[i]<<"\n";
	}
	return 0;
}
