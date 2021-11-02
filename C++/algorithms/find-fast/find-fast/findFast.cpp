#include "../VisCrt/VisCrt.cpp"
#include <iostream>
#include <ctime>

using namespace std;
//?
bool findFast(int *arr, int countArr, int targ){
	bool flag = false;
	int r = countArr;
	int l = 0;
	int mid = 0;
	while((l <= r) && (flag == false)){
//		cout<<"mid"<<arr[mid]<<endl;
		mid = (l+r)/2;
		if(arr[mid] == targ){
			flag = true;
		}
		if(arr[mid] > targ){
			r = mid - 1;
		}
		else{
			l = mid + 1;
		}
	}
	return flag;
}

int main(){
	int targ = 7345;
	srand(time(0));
	int arr[10000];
	int countArr = sizeof(arr)/sizeof(int);
	arrCrt(arr, countArr);
	visArr(arr, countArr);
	unsigned int t1 = clock();
	bool i = findFast(arr, countArr, targ);
	unsigned int t2 = clock();
	int resTime = t2-t1;
	cout<<endl<<"time = "<<resTime<<" t1, t2 "<<t1<<", "<<t2<<endl;

	if(i){cout<<"Number real "<<targ<<endl;}
	else{cout<<"Number not fund"<<endl;}
	cout<<"FindFast"<<endl;
	return 0;
}