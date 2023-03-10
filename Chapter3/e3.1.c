#include<stdio.h>
int binsearch(int arr[], int ele, int n);
int binsearch2(int *arr, int ele);

int main(){
	int arr[] = {1,5,6,9,10};
	int ele = 9;
        int n = sizeof(arr)/sizeof(arr[0]);
	//printf("%d", *arr);
	printf("\n%d found at %d\n", ele, binsearch(arr,ele,n));

	printf("\n%d found at %d\n", ele, binsearch2(arr,ele));
	return 0;
}

int binsearch(int arr[], int ele, int n){
int s = 0;
int e = n - 1;
while(s < e){
	int m = (s + e)/2;
	if(ele <= arr[m]){
		e = m;
	}else{
		s = m + 1;
	}
}	
		
	return (ele == arr[s]) ? s : -1;

}

int binsearch2(int *arr, int ele){
int s = 0;
int n = sizeof(arr)/sizeof(arr[0]);
printf("%d",n);
int e = n - 1;
while(s < e){
	int m = (s + e)/2;
	if(ele <= arr[m]){
		e = m;
	}else{
		s = m + 1;
	}
}	
		
	return (ele == arr[s]) ? s : -1;

}
