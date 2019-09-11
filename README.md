# hw01
Skeleton for the first homework assignment.
The goal of this assignment is to create a four-function calculator. The program should read its operator and two operands from argv. For example, the command:
```
./calc x 2 2.5 
``` 
should print `5` and then exit. The calculator should support addition, subtraction, multiplication, and division.
The corresponding characters for these operations will be `'+', '-', 'x', '/'`

For this assignment, you will be writing your own implementation of `calc.c`. An obfuscated implementation of `calc.c` has been provided here so you can test it and see how it should work, but DO NOT attempt to emulate the actual code in this file; by design it is far more complicated and less readable than your code should be. 

# Running the calc
First, compile calc.c:
```
clang calc.c -o calc
```
or 
```
gcc calc.c -o calc
```

This will produce a binary executable named `calc`. You can run calc with your own inputs on the command line like this:
```
./calc + 1 2.5
```
which should print `3.5` to stdout and then exit. 

# Running the test script
A shell scipt is also provided with some test cases for your program, along with the expected outputs. You may use this to test your program. The program used to grade this assignment will be a script in the same format but with additional test cases. 

From your terminal of choice, run 
```
sh calc_test.sh
```
or 
```
./calc_test.sh
```
The script should print one answer per line, and those should match the provided `calc_output.txt` file. 
