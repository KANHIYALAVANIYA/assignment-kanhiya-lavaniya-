// binary to decimal
int binimal(int n){
	int decimal=0,base=1,remainder;
	while(n!=0){
		remainder=n%10;
		decimal=decimal+remainder*base;
		n=n/10;
		base=base*2;
	}
	return decimal;
}
// bubble sort
int bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
     if (arr[j] > arr[j + 1]) {
               
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
    }
    }
    }
    
    return 0; 
}
// maximum element in array
int maximum(int arr[],int n){
	int max=arr[0];
for(int i=0;i<n;i++){
	if (arr[i]>max){
		max=arr[i];
	}
}
return max;
}
// minimum element in array
int minimum(int arr[],int n){
	int min=arr[0];
for(int i=0;i<n;i++){
	if (arr[i]<min){
		min=arr[i];
	}
}
return min;
}


