#include <stdio.h>

int main(){
	int F = 0;
	float C;
	printf("F	C\n");	
	for(int i = 0; i < 16; i++){
		C = (5.0/9.0) * (F - 32);
		printf("%d	%.2f\n", F, C);
		F = F + 20;
	}
	return 0;
}

