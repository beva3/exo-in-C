#include <stdio.h>

int main(){
	int i=2;
	int n[] = {241,337,123,147};
	int j=0;
	for(j=0; j<4; j++){
		while(i*i <= n[j] && n[j]%i !=0){
			printf("i = %d | %d<>%d\n",i,i,n[j]);
			i++;
		}
		if(i*i > n[j] && n[j] > 1){
			printf("%d-P\n",n[j]);
		}else{
			printf("%d-NP\n",n[j]);
		}
		i=2;
	}
	return 0;
}
