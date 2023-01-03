#include <stdio.h>
/* one part of buble sort*/
int max_of_four(int a, int b, int c, int d){
    int temp = 0;
    int array_max[4] = {0};
    array_max[0] = a;
    array_max[1] = b;
    array_max[2] = c;
    array_max[3] = d;

    for(int i = 0; i < 3; i++){
		//printf("i = %d\n", i);
        if(array_max[i] > array_max[i+1]){
            temp = array_max[i+1];
			//printf("temp = %d\n", temp);
			//printf("array_max[%d]\n", array_max[i]);
            array_max[i+1] = array_max[i];
            array_max[i] = temp;
        }
    }
	//printf("array_max[0] = %d, array_max[1] = %d, array_max[2] = %d, array_max[3] = %d\n", 
			//array_max[0], array_max[1], array_max[2], array_max[3]);
    return array_max[3];
}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    int ans = max_of_four(a, b, c, d);
    printf("answer = %d\n", ans);

    return 0;
}
