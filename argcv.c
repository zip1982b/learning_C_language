#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if(argc<2) {
    printf("Вы забыли ввести аргументы.\n");
    exit(1);
  }
  printf("Привет %s!\n", argv[1]);
  printf("%s + %s = %d\n", argv[2], argv[3], atoi(argv[2]) + atoi(argv[3]));


  return 0;
}

