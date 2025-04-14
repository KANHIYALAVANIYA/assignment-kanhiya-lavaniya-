#include <stdio.h>
#include "my_library.h"
//int main(){
//	int n = 5,p=8;
//	printf("%d",sum(n,p));
//}

//int main(){
//	int n = 5,p=8;
//	printf("%d",mul(n,p));
//}

//int main(){
//	int n = 8,p=5;
//	printf("%d",sub(n,p));
//}


int main(){
	int arr[] = {2,4,12,3,2};
	int max = maximum(arr,5);
	printf("%d\n",max);

	int min = minimum(arr,5);
	printf("%d\n",min);
	
	bubblesort(arr,5);
	for(int i=0;i<5;i++){
		printf(" %d",arr[i]);
	}
	return 0;
}



