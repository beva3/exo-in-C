#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void make_dir(int n){
	char cmd[100];
	//printf("mkdir %d\n",n);
	sprintf(cmd,"mkdir %d",n);system(cmd);

	//printf("cd  %d\n",n);
	sprintf(cmd,"%d",n);chdir(cmd);
	// printf("make %d\n",n-1);
	(n>=2) ? make_dir(n-1) : exit(1);
}

int main(){
	make_dir(100);
	return 0;
}

