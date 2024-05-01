**My_library**

This repository contains the main implementation of the string.h library in C, featuring various functions for string manipulation and character classification. Additionally, it includes an obj_file storing the object version of these functions for archive purposes.

**Functions:**

- `o_isalpha(int c)`: Checks if a character is alphabetic.
- `o_isdigit(int c)`: Checks if a character is a digit.
- `o_isalnum(int c)`: Checks if a character is alphanumeric.
- `o_isascii(int c)`: Checks if a character is within the ASCII range.
- `o_isprint(int c)`: Checks if a character is printable.
- `o_strlen(const char *s)`: Calculates the length of a string.
- `o_memset(void *s, int c, size_t n)`: Sets a block of memory to the specified value.
- `o_bzero(void *s, size_t n)`: Sets a block of memory to zero.
- `o_strlcpy(char *dest, const char *src, size_t size)`: Copies a string with size limit.
- `o_strlcat(char *dest, const char *src, size_t size)`: Concatenates strings with size limit.
- `o_toupper(int c)`: Converts a character to uppercase.
- `o_tolower(int c)`: Converts a character to lowercase.
- `o_strchr(const char *s, int c)`: Finds the first occurrence of a character in a string.
- `o_strrchr(const char *s, int c)`: Finds the last occurrence of a character in a string.

**Archive File:**

To use the archive file (`obj_file`), follow these steps:

1. **Include the Archive File**: Ensure that the `obj_file` is included in your project directory.

2. **Link the Archive File**: When compiling your program, include the `obj_file` in the compilation process. For example, if using GCC, you can link the archive file by adding it to the compilation command:

   ```
   gcc your_program.c library.a
   ```

3. **Include Headers**: Include the necessary headers in your source code to utilize the functions from the library:

   ```c
   #include "my_library.h"
   ```

4. **Use Library Functions**: You can now use the functions provided by `My_library` in your C program as needed.
