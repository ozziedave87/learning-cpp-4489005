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

Structures: hetergenous data, for simple models

Classes contain data and functions - same as in python and java. Encapsulation; hiding the data from the pouside world. makes members private or public as needed

Setters and getters - write inti fucntions and get values - used in classes.

compiling code -> source -> compiler tool chain -> executable. NB make files. 

Implementation and header files (headers inc class def and function declerations)

Pointers - nb each int takes 4 bytes - 
-> type_of_variable * name_of_ptr - nb pointer is a variable i.e. int a = 37 -> int*ptr 
-> ptr&a -> where & is address of

smart pointers are a safer alternative 

pointers are important for dynamic memory management; malloc - memory allocation. As a programmer you need to free up memory to prevent leakage. C++ supports this and frees the memory once you dont need it - multiple levels of indirection possible

References; not pointers or objects. No arrays of references and no pointers to references. Can reference to a reference. must be init at decleration. Only one level of indirection. no need to dereference. references are safer than pointers. Useful application: passing paramaters by reference (i.e. the variable passed in can be modief within the function), avoid copying large objects in for loops

*/