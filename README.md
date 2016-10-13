# RCD C++ Bubble Sort Program

## Requirements
* LLVM/Clang 2.9 running on a Core i7 processor for best performance.
* Input file containing random unsorted signed integers (32-bit), one per line.
* Optimized for a file with 1,000,000 ints.  Set the value of the NUM_ELEMS contstant in num_io.h to a different value to optimize for a different # of ints in the file.

## GCC
You can reconfigure to build with GCC by setting the CC flag in the Makefile to g++ instead of clang++.

### Other Processors
For other processors set the march flag in the Makefile appropriately

## Usage
```bash
$ ./rcd_cpp_bubble_sort INFILE OUTFILE
```
* *INFILE* = input file containing unsorted integers, one per line
* *OUTFILE* = output file where we write the sorted integers

## LLVM/Clang Setup
* Minimum version of Clang is 2.9.  
* Anything older than that may be somewhat slower.

## Ubuntu
```bash
$ sudo apt-get install clang
```

## Fedora
```bash
$ sudo yum install clang
```
