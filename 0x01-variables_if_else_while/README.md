Arithmetic Operators:

Addition (+): Used to add two operands.
Subtraction (-): Used to subtract one operand from another.
Multiplication (*): Used to multiply two operands.
Division (/): Used to divide one operand by another.
Modulus (%): Returns the remainder after division.
Example:

c
Copy code
int a = 10;
int b = 5;
int result = a + b; // result = 15
Logical Operators (Boolean Operators):

AND (&&): Returns true if both operands are true.
OR (||): Returns true if at least one of the operands is true.
Example:

c
Copy code
int a = 5;
int b = 10;
if (a > 0 && b > 0) {
    // Both conditions are true
    // Code execution goes here
}
Relational Operators:

Equality (==): Returns true if the operands are equal.
Inequality (!=): Returns true if the operands are not equal.
Greater than (>): Returns true if the left operand is greater than the right operand.
Less than (<): Returns true if the left operand is less than the right operand.
Greater than or equal to (>=): Returns true if the left operand is greater than or equal to the right operand.
Less than or equal to (<=): Returns true if the left operand is less than or equal to the right operand.
Example:

c
Copy code
int a = 5;
int b = 10;
if (a > b) {
    // Code execution goes here if a is greater than b
} else if (a < b) {
    // Code execution goes here if a is less than b
} else {
    // Code execution goes here if a and b are equal
}
In C, the values 0 (zero) and any other non-zero value are considered as FALSE and TRUE, respectively. However, it is recommended to use the specific constants false and true (defined in the stdbool.h header) for clarity.

Boolean Operators:

AND (&&): Returns true if both operands are true.
OR (||): Returns true if at least one of the operands is true.
Example:

c
Copy code
bool isTrue = true;
bool isFalse = false;

bool result2 = isTrue && isFalse; // result2 = false
The if statement is used for conditional execution of code. If the condition within the parentheses is true, the code within the associated block is executed. The if statement can be extended with else to provide an alternative block of code if the condition is false.

Example:

c
Copy code
int number = 5;
if (number > 0) {
    printf(The number is positive.n);
} else {
    printf(The number is not positive.n);
}
Comments are used to add explanatory notes within the code. In C, there are two types of comments:

Single-line comments: Begin with // and continue until the end of the line.
Multi-line comments: Enclosed between /* and */ and can span multiple lines.
Example:

c
Copy code
// This is a single-line comment

/*
This is a
multi-line comment
*/
Variable Declaration:
To declare variables of types char, int, and unsigned int, use the following syntax:

c
Copy code
char myChar;
int myInt;
unsigned int myUnsignedInt;
Variable Assignment:
To assign values to variables, use the assignment operator (=).

c
Copy code
myChar = 'A';
myInt = 10;
myUnsignedInt = 20;
Printing Variables with printf:
To print the values of variables of type char, int, and unsigned int using printf, use the appropriate format specifiers %c, %d, and %u, respectively.

c
Copy code
char myChar = 'A';
int myInt = 10;
unsigned int myUnsignedInt = 20;

printf(Character: %cn, myChar);
printf(Integer: %dn, myInt);
printf(Unsigned Integer: %un, myUnsignedInt);
While Loop:
The while loop is used to repeatedly execute a block of code as long as a specified condition is true.

c
Copy code
while (condition) {
    // Code block
}
Example:

c
Copy code
int count = 0;
while (count < 5) {
    printf(Count: %dn, count);
    count++;
}
Using Variables with the While Loop:
Variables can be used within the while loop to control the loop condition or track the loop iterations.

Example:

c
Copy code
int number = 1;
while (number <= 10) {
    printf(%d , number);
    number++;
}
printf(n);
Printing Variables with printf:
Variables can be printed within the while loop using printf in a similar way as demonstrated earlier.

Example:

c
Copy code
int count = 0;
while (count < 5) {
    printf(Count: %dn, count);
    count++;
}
The ASCII character set is a character encoding standard that represents characters as numeric codes. It assigns unique numeric values to various characters, including alphabets, digits, special symbols, and control characters.

The -m32 and -m64 flags in GCC are used to specify the target architecture for compilation. -m32 generates code for a 32-bit architecture, while -m64 generates code for a 64-bit architecture. These flags help ensure that the code is compiled and optimized for the specific target platform.





