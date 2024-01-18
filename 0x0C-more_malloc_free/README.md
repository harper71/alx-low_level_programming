The `exit` function in C is part of the `<stdlib.h>` (stdlib stands for standard library) and is used to terminate a program. It accepts an integer argument, which is used as the exit status of the program. The exit status is a way for a program to communicate its result or status to the environment that called it. A zero exit status usually indicates success, while a non-zero exit status typically indicates an error or some other kind of abnormal termination.

Here's a simple example of using the `exit` function:

```c
#include <stdlib.h>
#include <stdio.h>

int main() {
    printf("Before exit\n");

    // Use the exit function with exit status 0 (success)
    exit(0);

    // The code below this line will not be executed
    printf("After exit\n");

    return 0;
}
```

Regarding `calloc` and `realloc`, they are memory allocation functions in C, also part of the `<stdlib.h>` header.

1. **calloc:**
   - The `calloc` function is used to dynamically allocate memory for an array of elements, and it initializes all the allocated memory to zero.
   - The prototype of `calloc` is:
     ```c
     void *calloc(size_t num_elements, size_t element_size);
     ```
   - Example:
     ```c
     #include <stdlib.h>

     int main() {
         int *arr;
         size_t size = 5;

         // Allocate memory for an array of 5 integers and initialize to zero
         arr = (int *)calloc(size, sizeof(int));

         // Use the allocated memory as needed

         // Don't forget to free the allocated memory when done
         free(arr);

         return 0;
     }
     ```

2. **realloc:**
   - The `realloc` function is used to resize a previously allocated block of memory. It can be used to make the block larger or smaller.
   - The prototype of `realloc` is:
     ```c
     void *realloc(void *ptr, size_t new_size);
     ```
   - Example:
     ```c
     #include <stdlib.h>

     int main() {
         int *arr;
         size_t size = 5;

         // Allocate memory for an array of 5 integers
         arr = (int *)malloc(size * sizeof(int));

         // Use the allocated memory as needed

         // Resize the array to hold 10 integers
         arr = (int *)realloc(arr, 10 * sizeof(int));

         // Use the resized memory as needed

         // Don't forget to free the allocated memory when done
         free(arr);

         return 0;
     }
     ```

Remember to check if memory allocation is successful by verifying if the returned pointer is not `NULL`. Also, always free dynamically allocated memory using `free` to avoid memory leaks.
