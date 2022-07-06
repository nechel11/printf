# printf
My version of printf function on C

## Description :
The C library function int printf(const char *format, ...) sends formatted output to stdout.
Flags I implemented :
  ### • %c Prints a single character.
  ### • %s Prints a string (as defined by the common C convention).
  ### • %p The void * pointer argument has to be printed in hexadecimal format.
  ### • %d Prints a decimal (base 10) number.
  ### • %i Prints an integer in base 10.
  ### • %u Prints an unsigned decimal (base 10) number.
  ### • %x Prints a number in hexadecimal (base 16) lowercase format.
  ### • %X Prints a number in hexadecimal (base 16) uppercase format.
  ### • %% Prints a percent sign. ###
  
## How it works :
  ![ft_printf](https://user-images.githubusercontent.com/91884862/177575883-85301095-7ee5-4811-a0b4-df488000c51a.gif)
## How to run:
```
https://github.com/nechel11/printf.git ft_printf
cd ft_printf
```
## How to use make:
```
make - to create .a file
make test - to create ./test file
make clean - to remove .o files
make fclean - to remove .o, .a and ./test files
```
