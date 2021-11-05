#include <iostream>
#include <ctime>
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

void arrRan(int *arr, int countArr){
		for(int i = 0; i < countArr; i++){
			arr[i] = -150+ rand()%301;
		}
}

void sort(int *arr, int lft, int rght){
	int pivot;
	int l_hold = lft;
	int r_hold = rght;
	pivot = arr[lft];
	while(lft < rght){
		while((arr[rght] >= pivot) && (lft < rght))
			rght--;
		if(lft != rght){
			arr[lft] = arr[rght];
			lft++;
		}
		while((arr[lft] <= pivot) && (lft < rght))
			lft++;
		if(lft != rght){
			arr[rght] = arr[lft];
			rght--;
		}
	}
	arr[lft] = pivot;
	pivot = lft;
	lft = l_hold;
	rght = r_hold;
	if(lft < pivot)
		sort(arr, lft, pivot -1);
	if(rght > pivot)
		sort(arr, pivot+1, rght);
}

int main(){
	srand(time(0));
	int arr[100];
	int countArr = sizeof(arr)/sizeof(int);
	arrRan(arr, countArr);
	visArr(arr, countArr);
	unsigned int t1 = clock();
	sort(arr, 0, countArr-1);
	unsigned int t2 = clock();
	int resTime = t2-t1;
	cout<<endl<<"time = "<<resTime<<" t1, t2 "<<t1<<", "<<t2<<endl;
	visArr(arr, countArr);
	return 0;
}