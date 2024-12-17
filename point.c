#include <stdio.h>

int *array(){
	return (int[]){1,2,3,4};
}
void echo_Arr(int *a,int size){
	for (int i=0; i<size; i++)
		printf("%d\n",a[i]);
}
int main(){
	echo_Arr(array(),4);
	return 0;
}
