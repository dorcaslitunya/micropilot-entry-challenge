#include <stdio.h>
#include <stdlib.h>
int CountZeroes(int* integer_array,int array_size){
    int counter=0;
    for(int i=0;i<array_size;i++){
        if(integer_array[i]==0){
            counter++;
        }

    }
    return counter;
}

int main()
{
    int numbers[]={1, 0, 5, 6, 0, 2};
    //testing
    printf("%d",CountZeroes(numbers,6));
    return 0;
}

