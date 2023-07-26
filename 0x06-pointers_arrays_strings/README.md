README: Introduction to Pointers, Arrays, Strings, and Variable Scope in C
Pointers:
Pointers are variables that store memory addresses of other variables.
They allow direct manipulation of memory and dynamic memory allocation.
To declare a pointer, use the * symbol followed by the data type.
To access the value pointed to by a pointer, use the * symbol before the pointer variable name.
Pointers are commonly used for dynamic memory allocation, passing addresses to functions, and working with data structures.
Arrays:
Arrays are collections of elements of the same data type stored in contiguous memory locations.
To declare an array, specify the data type and the number of elements in square brackets.
Array elements are accessed using indices, starting from 0 to (size - 1).
Arrays are useful for handling multiple data elements efficiently and are often used in loops.
Differences between Pointers and Arrays:
Pointers store memory addresses, whereas arrays store multiple elements of the same data type.
Pointers can be reassigned to point to different memory locations, while arrays are fixed in size after declaration.
Array names represent the base address of the array, acting as constant pointers to the first element.
Pointers can be used for dynamic memory allocation, while arrays are typically used for static memory allocation.
Strings and Manipulation:
In C, strings are arrays of characters terminated by a null character '\0'.
To declare a string, use an array of characters with enough space for the string and the null terminator.
Strings can be initialized using double quotes, e.g., char str[] = "Hello";.
To manipulate strings, use standard library functions from <string.h> like strlen, strcpy, strcat, strcmp, etc.
Be careful when manipulating strings to avoid buffer overflows.
Scope of Variables:
The scope of a variable defines its visibility and lifetime in a program.
Local variables have limited scope within the block they are declared in and are destroyed after the block execution.
Global variables have scope throughout the entire program and are declared outside any functions.
Function parameters are also local variables with scope limited to the function body.
Static variables inside functions retain their values between function calls.
These concepts are fundamental to programming in C. Understanding pointers, arrays, strings, and variable scope will help you build efficient and reliable C programs. For more in-depth information, consult C programming textbooks or online resources.

Note: Make sure to compile and execute C programs using a C compiler, such as GCC or Clang.
