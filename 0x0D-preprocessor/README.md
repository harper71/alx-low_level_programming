preprocessor this are commands that is interpreted by the preprocessor
it begins with '#'
e.g #define, #include


User
What are macros and how to use them

Macros typically refer to a set of instructions that are represented in a symbolic form. In various contexts, macros can have different meanings, but I'll cover the two most common uses: programming macros and dietary macros.

Programming Macros:
C/C++ Programming:
In languages like C and C++, macros are used to define preprocessor directives. They are written using #define and are essentially a way to perform text substitution before the compilation process. For example:


#define SQUARE(x) ((x) * (x))

int main() {
    int result = SQUARE(5);  // This is replaced with ((5) * (5)) before compilation
    return 0;
}


What are the most common predefined macrosPredefined macros, also known as built-in macros, are commonly provided by programming languages or development environments to offer information about the code being compiled or to control the compilation process. The availability and names of these macros can vary across different programming languages and compilers. Here are some commonly used predefined macros in the context of the C and C++ programming languages:

C and C++ Predefined Macros:
__FILE__:
Represents the current file name as a string literal.


printf("Current file: %s\n", __FILE__);
__LINE__:
Represents the current line number as an integer literal.


printf("Current line: %d\n", __LINE__);
__func__ (C99 and later):
Represents the current function name as a string literal.


printf("Current function: %s\n", __func__);
__DATE__ and __TIME__:
Represent the compilation date and time as string literals.


printf("Compiled on: %s at %s\n", __DATE__, __TIME__);
__cplusplus:
Defined in C++ to indicate the compiler is processing C++ code.


#ifdef __cplusplus
// C++ specific code here
#endif
__STDC__:
Defined in C to indicate the compiler is processing Standard C code.


#ifdef __STDC__
// Standard C specific code here
#endif
__STDC_VERSION__:
Represents the version of the C standard being used (e.g., 199901L for C99).


#if __STDC_VERSION__ >= 199901L
// Code specific to C99 and later
#endif

These macros can be useful for conditional compilation and for obtaining information about the code at compile time. Keep in mind that the availability and behavior of these macros can vary between different compilers and programming languages. Always refer to the documentation of the specific compiler or language standard for accurate information.

