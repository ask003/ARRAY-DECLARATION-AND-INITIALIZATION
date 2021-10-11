
#include <stdio.h>

int main()
{
    int arr[10]; //simple declaration of array which has 10 elements. 
    
    int n = 10;  //here 10 is stored in a variable named n 
    int arr2[n]; //and in this step an array of n elements is created where n=10,so an array of 10 elements.
    
    int arr[ ] = { 10, 20, 30, 40 } //here the size of the array is not decclared but when initialized compiler automatically stores the size.
    
    int arr[6] = { 10, 20, 30, 40 }//here the size of arry is declared as 6 and even the initialization is done along with declaration.
    
    int arr[ ];//a simole array arr is created where no size is declared and size will be decided at the time of initialization
    
    int arr1[5];
    arr[3 / 2] = 2;//after the declarationof array of size 5 the (3/2)=1st index is initialized with 2. 
    
    int arr[2] = { 10, 20, 30, 40, 50 };//here the size of array is 2 but since 5 elements are declared only the first 2 elements are considered.
    
    int arr[2];
   printf("%d ", arr[3]);//here both printf statements are invalid because negative indexing is impossible in arrays and alos the size of array is 2
  printf("%d ", arr[-2]);//but index is done for 3 so there will be error throwed.
    return 0;
}