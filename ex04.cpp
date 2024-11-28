#include <stdio.h>
int main(){
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	int maxNumber;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
		int maxNumber = arr[0][0];
		if(arr[i][j]>maxNumber){
			maxNumber=arr[i][j];
			
		}
		printf("%d",maxNumber);
	}
		return 0;
	}
}
