//compile and run code with this//

/*       gcc ProblemSet4.2.c -o ProbSet4.2 && ./ProbSet4.2        */

#include <stdio.h>

void removeLastCharacter(char*);

void removeLastCharacter(char* array) {

    int i = 0;
    while(array[i] != '\0')
    i++;
    array[i-1] = '\0';
}

int main() {
 
FILE *file;

  file = fopen("Ramen.txt", "r");

  // Check to make sure file exists
  if(file == NULL){
    printf("File cannot be opened or does not exist.\n");
    return 1; //Return error
  }

  char arr[100];
  int c; 
  fgets(arr,100,file);
  removeLastCharacter(arr);

FILE *file1;
  file1 = fopen("RamenWithoutLastChar.txt", "w");
  fputs(arr, file1);
  //Close opened file
  if(file) fclose(file);
  if(file1) fclose(file1);
  
  return 0;
}