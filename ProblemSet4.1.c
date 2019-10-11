#include <stdio.h>
#include <math.h>

int numbers[] = {2, 4, 6, 8, 10};
int result;
char true;
char false;
//char pleasework;

/*initially tried the if statement as one line with many || 's */
//didn't work when there was a functin prototype
void arrayContains(int a, int arr[]){
    if (a == numbers[0]){
        printf("true\n");
    }
    else if(a == numbers[1]){
        printf("true\n");
    }
    else if(a == numbers[2]){
        printf("true\n");
    }
    else if(a == numbers[3]){
        printf("true\n");
    }
    else if(a == numbers[4]){
        printf("true\n");
    }
    
    else{
        printf("false\n");
    } 
   


 }

int main(int argc, char const *argv[]) {

int x;
int increment = 0;

while(increment < 10){

printf("type in an integer value: ");
scanf("%d", &x);

arrayContains(x, numbers);
//printf("%c", pleasework);
//printf("%d\n\n", x);

increment++;
}
    
return 0;
}






