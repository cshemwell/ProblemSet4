
#include <stdio.h>

int main() {

  FILE *fp;
  fp = fopen("LoremIpsum.txt", "r");

  if(fp == NULL){
    printf("File cannot be opened or does not exist.\n");
    return 1;
  }

  char ascii[127]; 
  int i;

  for(i=0;i<127;i++){
    ascii[i] = 0;
   
  }

  int a;
        
  while((a =fgetc(fp)) != EOF){
  ascii[a]++;
  }
  
  for(i=0;i<127;i++){
  printf("%c has occurred %d times\n", i, ascii[i]);
}

  if(fp) fclose(fp);

  return 0;
}
