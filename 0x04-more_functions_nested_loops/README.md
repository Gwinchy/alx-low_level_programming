Nested loops:
Nested loops are loops that are placed inside one another, forming a loop within another loop. They are used to perform repetitive tasks with multiple levels of iterations. Each iteration of the outer loop will trigger the complete execution of the inner loop.
Example of a nested loop in C:

c
Copy code
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("(%d, %d) ", i, j);
    }
    printf("\n");
}
Functions:
A function is a block of code that performs a specific task or set of operations. Functions in programming promote code reusability and modularity. They are declared with a return type (if any), a function name, and optional parameters (input). Functions can be called and executed from other parts of the code.
Example of a function in C:

c
Copy code
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}
Difference between declaration and definition of a function:
Declaration of a function is a statement that specifies the function's signature (return type, name, and parameters) without providing the actual function body. It informs the compiler about the existence and interface of the function. Function declarations typically go in header files.
Definition of a function, on the other hand, includes the actual implementation of the function, providing the code that gets executed when the function is called. Function definitions are usually placed in source files (.c files).

Example:

c
Copy code
// Function Declaration
int add(int a, int b);

// Function Definition
int add(int a, int b) {
    return a + b;
}
Prototype:
A prototype is a function declaration that provides the function's signature without the actual implementation. It informs the compiler about the function's existence and how it can be called. Prototypes are typically placed in header files and allow other parts of the code to know about the function before it's defined.
Example:

c
Copy code
// Prototype (Function Declaration)
int add(int a, int b);

// Function Definition
int add(int a, int b) {
    return a + b;
}
Scope of variables:
The scope of a variable refers to the part of the code where the variable is visible and can be accessed. In C, variables can have local scope or global scope.
Local variables: Variables declared inside a function or a block have local scope. They are only accessible within that function or block and are not visible to other parts of the code.

Global variables: Variables declared outside any function or block have global scope. They are accessible throughout the entire program, meaning they can be used in any function.

GCC flags -Wall -Werror -pedantic -Wextra -std=gnu89:
-Wall: Enables all warning messages.
-Werror: Treats all warnings as errors, which means the compiler will stop and report an error if any warning is encountered.
-pedantic: Enforces strict ANSI C standard compliance.
-Wextra: Enables some additional warning messages not covered by -Wall.
-std=gnu89: Specifies the C language standard to be used. In this case, it's the GNU dialect of the C89 standard.
Header files:
Header files are files containing function prototypes, constant definitions, and other declarations that are meant to be shared across multiple source files in a C or C++ program. They are commonly used to provide interfaces for libraries, allowing users to access and use functions defined in those libraries.
To use a header file in your program, you include it using the #include preprocessor directive. This directive tells the compiler to copy the contents of the specified header file into the source file during compilation.

Example:

c
Copy code
// Example header file named "myheader.h"
#ifndef MYHEADER_H
#define MYHEADER_H

// Function prototype declaration
int add(int a, int b);

#endif
c
Copy code
// Source file using the header
#include <stdio.h>
#include "myheader.h" // Include user-defined header

int main() {
    int result = add(5, 3);
    printf("Result: %d\n", result);
    return 0;
}
