#include <iostream>
using namespace std;
void visArr(int arr[], int countArr){
		cout<<endl;
		for(int i = 0; i < countArr; i++){
			if(i+1 < countArr)
				cout<<arr[i]<<", ";
			else
				cout<<arr[i];
		}
		cout<<endl;
}

void arrCrt(int *arr, int countArr){
	for(int i = 0; i < countArr; i++)
		arr[i] = i+1;
}

void arrRan(int *arr, int countArr){
		for(int i = 0; i < countArr; i++){
			arr[i] = -5000+ rand()%10001;
		}
}
