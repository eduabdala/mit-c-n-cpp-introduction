# Introduction to C and C++ (by MIT)

### Notes about the first part of the introduction to C and C++

## Compilation pipeline

### Basic compilation

Command to compile:

    gcc main.c -o mainbin

gcc: GNU C Compiler

main.c: source file

-o: specifies output filename (without this, defaults to a.out on Unix-like systems)



### Advanced compilation example:

    gcc -Wall -std=c99 main.c lib_1.c -O **mybinfile**

Flags explanation:

-Wall: enable all major warning messages (helps catch bugs and bad practices)

-std=c99: use C language standard from 1999 (other options: c89, c11, c17)

Multiple source files can be compiled together (main.c + lib_1.c in this case)


## Macros

### 


