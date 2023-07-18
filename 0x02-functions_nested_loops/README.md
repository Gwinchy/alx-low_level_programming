Nested Loops:
Nested loops are loops that are placed inside another loop's body. They allow you to iterate over elements in a multi-dimensional data structure or perform repetitive tasks with multiple levels of iteration. Each time the outer loop runs, the inner loop executes completely. Nested loops are often used when dealing with arrays, matrices, or performing tasks that require multiple levels of iteration.
Example of a nested loop in C:

c
Copy code
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
    return 0;
}
Functions:
A function is a reusable block of code that performs a specific task. Functions allow you to break down complex tasks into smaller, manageable parts. They improve code readability, maintainability, and promote code reusability. In most programming languages, functions are defined with a name, input parameters (optional), and a return type (optional). The function's body contains the instructions to be executed when the function is called.
Example of a simple function in C:

c
Copy code
#include <stdio.h>

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3); // Function call
    printf("Result: %d\n", result);
    return 0;
}
Difference between Declaration and Definition of a Function:
Declaration: A function declaration informs the compiler about the function's name, return type, and the types of its parameters. It doesn't contain the actual implementation (body) of the function. Function declarations are usually found in header files or at the beginning of the source file. They serve as a promise to the compiler that the function will be defined later.
Example function declaration:

c
Copy code
int add(int a, int b); // Function declaration
Definition: The function definition provides the actual implementation (body) of the function. It includes the instructions to be executed when the function is called. Function definitions are usually found in the source file.
Example function definition:

c
Copy code
int add(int a, int b) { // Function definition
    return a + b;
}
Prototype:
A prototype is a function declaration that provides enough information to the compiler about a function's name, return type, and its parameter types. It acts as an interface for the function, allowing the compiler to understand how the function should be called even before its actual definition. Prototypes are often placed in header files, which can be included in multiple source files to allow them to call the same function.
Example of a function prototype in a header file (e.g., "math_functions.h"):

c
Copy code
// math_functions.h
int add(int a, int b); // Function prototype
Scope of Variables:
The scope of a variable refers to the region of the program where the variable is accessible and can be used. In most programming languages, variables have different levels of scope, such as:
Global Scope: Variables declared outside of any function or block have global scope. They can be accessed from anywhere in the program.
Function Scope: Variables declared inside a function have function scope. They can be accessed only within that function.
Block Scope: Variables declared inside a block (e.g., within loops, if statements, etc.) have block scope. They are accessible only within that block.
Example of variable scope in C:

c
Copy code
#include <stdio.h>

// Global variable (accessible throughout the program)
int globalVar = 10;

int main() {
    // Function scope variable
    int x = 5;

    if (x > 0) {
        // Block scope variable
        int y = 15;
        printf("x: %d, y: %d\n", x, y);
    }

    printf("globalVar: %d\n", globalVar);
    // printf("y: %d\n", y); // Error: 'y' is not accessible here
    return 0;
}
GCC Flags:
GCC (GNU Compiler Collection) is a popular compiler for various programming languages, including C and C++. The flags you mentioned are compiler options that modify the compiler's behavior during the compilation process:
-Wall: Enables most warning messages, which help to catch potential issues and improve code quality.
-Werror: Treats all warnings as errors, which means any warning will stop the compilation process and prevent the creation of the output binary.
-pedantic: Issue all the mandatory diagnostics required by the C standard. It may also issue some extra diagnostics for certain language features that the standard considers "obsolescent" or "non-portable."
-Wextra: Enables some additional warning messages that are not enabled by -Wall. It provides even more warning coverage.
-std=gnu89: Specifies the C language standard to use during compilation. In this case, it indicates the GNU dialect of C with features from the C89/C90 standard.

Header Files and #include:
Header files contain function prototypes, constant definitions, and other declarations used across multiple source files. They facilitate code organization and modularity, allowing you to split the program into separate files and avoid redundancy.
To use header files, you include them in your source files using the #include preprocessor directive. This directive instructs the compiler to read the contents of the specified header file and include them at the location of the #include statement.

Example of using a header file:

Suppose you have a header file called "math_functions.h" containing the function prototype:

c
Copy code
// math_functions.h
int add(int a, int b); // Function prototype
Then, in your source file (e.g., "main.c"), you include the header file and use the function:

c
Copy code
#include <stdio.h>
#include "math_functions.h" // Include your custom header file

int main() {
    int result = add(5, 3); // Function call from the included header
    printf("Result: %d\n", result);
    return 0;
}
Remember to compile both the "main.c" source file and the "math_functions.c" file (containing the definition of the add function) to create the final executable.





