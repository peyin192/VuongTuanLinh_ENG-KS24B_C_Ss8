#include <stdio.h>
int main(){
	int arr[]={1,2,1,5,7,2,4};
	int maxCount;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}
	if(count>maxCount){
		maxCount=count;
	}
}
