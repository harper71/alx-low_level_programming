In C programming, command-line arguments are passed to the main function. The main function can have two parameters: argc (argument count) and argv (argument vector).
Here's a simple example:
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc is the count of arguments
    // argv is an array of strings containing the arguments

    printf("Number of arguments: %d\n", argc);

    // argv[0] is the program name
    printf("Program name: %s\n", argv[0]);

    // Print other arguments
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
In C programming, the `main` function has two common prototypes:

1. **Standard Prototype:**
   ```c
   int main(void);
   ```
   In this prototype, `main` takes no arguments.

2. **Extended Prototype:**
   ```c
   int main(int argc, char *argv[]);
   ```
   In this prototype, `main` takes two arguments: `argc` (argument count) and `argv` (argument vector).

### Choosing Between Prototypes:

- **Use Standard Prototype (`int main(void);`):**
  - When your program doesn't need command-line arguments.
  - For simple programs where you don't need to process any command-line inputs.

  ```c
  int main(void) {
      // Code here
      return 0;
  }
  ```

- **Use Extended Prototype (`int main(int argc, char *argv[]);`):**
  - When your program requires command-line arguments.
  - For programs that need to process command-line inputs, such as file names, options, or other parameters.

  ```c
  int main(int argc, char *argv[]) {
      // Code here
      return 0;
  }
  ```

In both cases, the `int` return type indicates the exit status of the program. The value returned by `main` is usually used to indicate the success or failure of the program. A return value of `0` typically indicates successful execution, while a non-zero value indicates an error or abnormal termination.

The choice between the two prototypes depends on the requirements of your program. If you need to handle command-line arguments, use the extended prototype. Otherwise, the standard prototype without arguments suffices.

In C and C++ programming, you might encounter situations where you have function parameters or variables that are declared but not used within the function. This can lead to compiler warnings about unused variables. Two common ways to address this issue are using the `__attribute__((unused))` attribute or casting the variable to `void`.

### Using `__attribute__((unused))`:

```c
#include <stdio.h>

void example_function(int __attribute__((unused)) unused_param) {
    // The unused parameter is marked with __attribute__((unused))
    // to suppress compiler warnings about unused variables.
    
    // Function code here
}

int main() {
    int unused_variable __attribute__((unused));
    // The unused variable is marked with __attribute__((unused))
    // to suppress compiler warnings about unused variables.

    // Rest of the program
    return 0;
}
```

### Using `(void)` Casting:

```c
#include <stdio.h>

void example_function(int unused_param) {
    // The unused parameter is cast to (void) to suppress compiler warnings.
    (void)unused_param;
    
    // Function code here
}

int main() {
    int unused_variable;
    // The unused variable is cast to (void) to suppress compiler warnings.
    (void)unused_variable;

    // Rest of the program
    return 0;
}
```

Both methods achieve the same goal of indicating to the compiler that the variable is intentionally not being used and should not trigger warnings. The choice between them is often a matter of personal or team preference. Some developers prefer using `__attribute__((unused))` for clarity, while others may find casting to `void` more concise.
