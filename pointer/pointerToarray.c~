#include <stdio.h>

void change (int (*ptr_arr)[5]) {
     (*ptr_arr)[2] = 20;
}

void change_2 (int *p_arr) {
    p_arr[2] = 20; // same as before
}

void print_array (int *p) {
     int i;
     for (i=0; i<5; ++i) {
          printf ("%d\t", p[i]);
     }
}

int main (void) {
    
     int arr_1[5] = {1, 2, 3, 4, 5};
     int arr_2[5] = {1, 2, 3, 4, 5};

     print_array (arr_1); // printing original array_1
     printf("\n");
     
     
     change(&arr_1);
     print_array (arr_1); // printing after changing values of array_1
     printf("\n\n");
     
     
     print_array (arr_2); // printing original array_2
     printf("\n");
     
     
     change_2 (arr_2);    // address of the first element is going to the function
     print_array (arr_2); // printing after changing values of array_2

         
     return 0;
}
