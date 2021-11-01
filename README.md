# basic-c

Basic (and **not** so basic) examples of the `C` programming language.
Modified from these tutorials:
- [x] [learn-c.org](https://learn-c.org/)
- [x] [Cprogramming.com](https://www.cprogramming.com/tutorial/c-tutorial.html)
- [ ] [tutorialspoint](https://www.tutorialspoint.com/cprogramming/index.htm)
- [ ] [GeeksforGeeks](https://www.geeksforgeeks.org/c-programming-language/)

## Structure

- `intro`
    + `hello.c`: a must in every programming language.
    + `input.c`: accepts as input an integer given by the user and transforms it to an ASCII character.
    + `flow-ctrl.c`: flow control structures (`if else` + loops) and statements (`continue` + `break`).
    + `switch-case.c`: compare a variable to several _integral_ (integer) values.
- `builtin-types`
    + `ptr.c`: simple pointer operations and intuition. Includes `malloc()`.
    + `array.c`: array creation, access and modification.
    + `struct-union.c`: demonstrates the use of both, structures and unions.
    + `string.c`: arrays of `char`s and some common functions from `string.h`.
    + `ptr-arr.c`: arrays defined as pointers using dynamic memory allocation. Prints the Pascal triangle.
- `io`
    + `file-io.c`: read and write from text and binary files.
    + `typecast.c`: prints the first half (original) of the ASCII table.
    + `cmd-args.c`: prints the via standard output the file specified as an argument.
- `data-structs`
    + `linked-list.c`: an array that can grow and shrink as needed, from any point in the array. Definition and methods.
    + `inf-recursion.c`: how many simultaneous processes can a `C` program open on the machine?
    + `recursive.c`: canonical recursion example implementing the `factorial()` function.
    + `var-arg-list.c`: function that accepts a variable number of arguments (`va_list` type and `stdarg.h` library).