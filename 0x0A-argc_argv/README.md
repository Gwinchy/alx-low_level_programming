
How to use arguments passed to your program:
In C, the main function can receive command-line arguments through its parameters argc and argv. Here's how you can use them:
c
Copy code
#include <stdio.h>

int main(int argc, char *argv[]) {
    // argc: Number of command-line arguments, including the program name
    // argv: Array of strings containing the command-line arguments

    // Print the program name (argv[0])
    printf("Program name: %s\n", argv[0]);

    // Loop through and print the command-line arguments (skip argv[0] which is the program name)
    for (int i = 1; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
When you run your compiled program with command-line arguments, they will be accessible via the argc and argv parameters. For example:

shell
Copy code
$ ./my_program arg1 arg2 arg3
The output will be:

yaml
Copy code
Program name: ./my_program
Argument 1: arg1
Argument 2: arg2
Argument 3: arg3
Two prototypes of main and when to use each:
The two common prototypes for the main function are:

int main(void): This version of main takes no command-line arguments. It is used when your program does not require any input from the command line.

int main(int argc, char *argv[]): This version of main takes command-line arguments. It is used when your program needs to process the arguments passed from the command line.

Choose the appropriate prototype based on whether your program needs to process command-line arguments or not.

How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters:
In C, you might encounter situations where you have variables or parameters in functions that are not used within the function's body. Unused variables can generate compiler warnings, which might be undesirable.

To avoid warnings about unused variables or parameters, you can use either of the following methods:

Method 1: Using __attribute__((unused)):

c
Copy code
#include <stdio.h>

void unused_variable_example(__attribute__((unused)) int unused_var) {
    // The 'unused_var' parameter is not used in this function,
    // but we prevent compiler warnings using the __attribute__((unused)) directive.
    printf("Function called.\n");
}

int main() {
    int some_variable = 10;
    unused_variable_example(some_variable);

    return 0;
}
Method 2: Using (void):

c
Copy code
#include <stdio.h>

void unused_variable_example(int unused_var) {
    (void)unused_var; // This line silences the "unused variable" warning
    printf("Function called.\n");
}

int main() {
    int some_variable = 10;
    unused_variable_example(some_variable);

    return 0;
}
Both methods ensure that the compiler does not emit warnings about unused variables or parameters in the function. Use whichever method you find more convenient and readable.





