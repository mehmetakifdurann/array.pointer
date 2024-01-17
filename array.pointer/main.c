/*
 Write a C program to input elements in an array and print array using pointers. How to input and display array elements using pointer in C programming.

EXAMPLE OUTPUT :
     Enter size of array: 10
     Enter elements in array:
     1
     2
     3
     4
     5
     6
     7
     8
     9
     10
   
    Array elements: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
 
 ! ! ! THE PROGRAM ENDS ! ! !.
 
 
*/
//Created by Mehmet Akif Duran. January 14, 2024

#include <stdlib.h>
#include <stdio.h>
#define MAX_SIZE 100000

int main(void){
    
    //Variable Decleration(s).
    
    int userArray[MAX_SIZE];
    int *pointer = userArray; //matching the pointer with the array.
    int userSize; // a variable for users array.
    int count;
    
    //Executable Statement(s).
    
    printf("Enter your array size : \n");
        scanf("%d", &userSize);
    
    printf("Enter the elements: \n"); //getting the array elements from the user.
    for(count=0;count<userSize;count++){
        scanf("%d", pointer);
        pointer++;
    }
   
    
    pointer=userArray;
    
    printf("Array elements: \n");
    //printing the elements after scanning.
    for(count=0;count<userSize;count++){
        printf("%d\n", *pointer);
        pointer++;
    }
   
    
    return 0;
}
