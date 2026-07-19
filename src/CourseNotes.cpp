/* Course Notes

<< and >> in cout and cin is insertion and extraction

<< and >> is otherwise bit shifting left and right - Used with integers to shift their binary representation.

computaitonally more expensive to work with doubles over floats

Pointers: for memory addresses 

Constant literals; starts with 0 is octo - be aware of this.

float must have a trailing f i.e. 23.5f

//global variables - allocated in data segment, only freed when the program ends. if declared in scope variables are freed when the function end (located in the stack section of memory).

variable names: non number start, can not be the same as any language keyword. 

% is mod or remainder of division

Bitwise; binary operations bit by bit operations: &, | (or) ~ not, ^XOR

Logical: operators: && and, || or, ! not
Relational: ==, !=, >, <, >=, <=
Poiners: * redirection gives access to the variable the pointer is pointing too, - address of, returns the address of the variable to the right, > members of classes. 

See cppreference.com to see operator precedences. 

Preprocessor; code is processed prior to compiling.

#ifdef directive is a preprocessor directive used in C and C++ programming to include or exclude code sections based on the presence of certain macros. It is used to control the compilation process by checking if a macro defined with #define is defined.

Constants - values will not change during execution. either regulaor of defined directives (find and replace). #define can be bad practice, no enforcement.

Const qualifier instead of #define - better. NB not the same in C++ as C

Arrays: fixed in size, continous in memory (sequential block), NB indexed from 0. NB auto does not work for arrays. nb no ; at the end of directives (i.e. macro)

// use string class rather than char arrays

type casting - useful for converting data types. To explicitly cast add the type in brackets before i.e. 5 as in 5.0 can be written as (float)5

//nb floating points are an approximation - a double would be a better approximation

Enumerations (Enum) - define a set of name int constands, a list of idenitifiers. Typically not suitable for C++.

*/