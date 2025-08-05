Assignment 3
Problem 1
sort (C)

In sort.c, I’ve implemented a basic implementation of insertion sort (not too efficient, but a very simple sorting algorithm). Look at and understand the code (read comments), and put the proper argument data type for the sort function’s first argument. Compile and run the code to make sure it works (it sorts the numbers).

Now, replace all array index access (places where I access the array with [], such as in A[i]) in the entire program by using pointer addition instead. Also, where I create the array (line 34, int array[n];), replace that with an array creation using malloc (of same size).

Hint: Since we’re using malloc, we must also make another change!

Make sure your program compiles and runs correctly (numbers are sorted).

Problem 2
resize (C)

The purpose of resize.c is to create an initial array of a user-specified size, then dynamically resize the array to a new user-specified size. I’ve given a shell of the code, including code to get user-specified sizes as ints.

However, the code is missing a few things. You must manage the memory for the array! Look at the comments in the code that describe what should be done and fill in blanks. Make sure the program compiles and runs as expected.

