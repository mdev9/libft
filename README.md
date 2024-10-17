# 📚 Libft – Custom Standard C Library

Welcome to **Libft**, a personalized implementation of the standard C library featuring over 40 common functions! 🎉 This library focuses on memory management, string manipulation, and linked list operations. 🚀 

## 📝 Project Overview

**Libft** aims to enhance your programming skills by providing a rich set of functions that are often needed in C programming. From memory allocation to string handling and linked lists, this library covers a broad spectrum of functionalities that are essential for various applications.

### Key Features:
- 🔹 **Memory Management**: Functions for allocating and managing memory.
- 🔹 **String Manipulation**: Operations for handling strings, including conversions and searches.
- 🔹 **Linked Lists**: Comprehensive support for linked list operations.

## 📦 Installation & Setup

To get started with **Libft**, follow these simple steps:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/mdev9/libft.git
   cd libft
   ```

2. **Build the project**:
   ```bash
   make
   ```
## 🛠️ How to Use Libft in Your Code

To use the functions from Libft in your C programs, include the header file at the top of your source files:
   ```C
#include "libft.h"
   ```
### Example Usage:

Here’s a simple example demonstrating how to use a few functions from the library:
   ```C
#include "libft.h"

int main() {
    char *str = "Hello, World!";
    char *dup = ft_strdup(str); // Duplicate the string
    int len = ft_strlen(dup);    // Get the length of the duplicated string

    printf("Original: %s\n", str);
    printf("Duplicate: %s\n", dup);
    printf("Length: %d\n", len);

    free(dup); // Remember to free allocated memory!
    return 0;
}
   ```
## 🔍 Function Descriptions

Here’s a comprehensive table summarizing each function in Libft:

| Function                | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| `ft_abs`                | Computes the absolute value of an integer.                                 |
| `ft_atoi`               | Converts a string to an integer.                                           |
| `ft_bzero`              | Sets the first n bytes of the memory area to zero.                        |
| `ft_calloc`             | Allocates memory for an array and initializes all bytes to zero.          |
| `ft_isalnum`            | Checks if a character is alphanumeric (a-z, A-Z, 0-9).                   |
| `ft_isalpha`            | Checks if a character is an alphabetic letter (a-z, A-Z).                |
| `ft_isascii`            | Checks if a character is an ASCII character.                               |
| `ft_isdigit`            | Checks if a character is a digit (0-9).                                   |
| `ft_isprint`            | Checks if a character is a printable character.                            |
| `ft_itoa`               | Converts an integer to a string.                                           |
| `ft_lstadd_back_bonus`  | Adds a new element at the end of a linked list.                           |
| `ft_lstadd_front_bonus` | Adds a new element at the beginning of a linked list.                     |
| `ft_lstclear_bonus`     | Deletes and frees a linked list.                                          |
| `ft_lstdelone_bonus`    | Deletes a node from a linked list and frees its memory.                   |
| `ft_lstiter_bonus`      | Iterates through a linked list and applies a function to each element.    |
| `ft_lstlast_bonus`      | Returns the last element of a linked list.                                 |
| `ft_lstmap_bonus`       | Applies a function to each element of a linked list and returns a new list.|
| `ft_lstnew_bonus`       | Creates a new node for a linked list.                                     |
| `ft_lstsize_bonus`      | Counts the number of elements in a linked list.                           |
| `ft_memchr`             | Searches for a character in a memory block.                               |
| `ft_memcmp`             | Compares two memory blocks.                                               |
| `ft_memcpy`             | Copies memory area from source to destination.                            |
| `ft_memmove`            | Moves memory area from source to destination safely.                      |
| `ft_memset`             | Fills a memory area with a specified value.                               |
| `ft_printf`             | Custom implementation of printf for formatted output.                      |
| `ft_putchar_fd`         | Outputs a character to a given file descriptor.                           |
| `ft_putendl_fd`         | Outputs a string to a given file descriptor followed by a newline.        |
| `ft_putnbr_fd`          | Outputs an integer to a given file descriptor.                            |
| `ft_putstr_fd`          | Outputs a string to a given file descriptor.                              |
| `ft_split`              | Splits a string into an array of substrings based on a delimiter.        |
| `ft_strchr`             | Locates the first occurrence of a character in a string.                 |
| `ft_strdup`             | Duplicates a string by allocating sufficient memory.                       |
| `ft_striteri`           | Applies a function to each character of a string, passing the index as an argument. |
| `ft_strjoin`            | Joins two strings into a new string.                                      |
| `ft_strlcat`            | Concatenates two strings while limiting the total length.                 |
| `ft_strlcpy`            | Copies a string with size limit to prevent overflow.                      |
| `ft_strlen`             | Returns the length of a string.                                           |
| `ft_strmapi`            | Applies a function to each character of a string and returns a new string. |
| `ft_strncmp`            | Compares two strings up to n characters.                                   |
| `ft_strnstr`            | Locates a substring in a string, searching only the first n characters.   |
| `ft_strrchr`            | Locates the last occurrence of a character in a string.                  |
| `ft_strtrim`            | Trims specified characters from the beginning and end of a string.       |
| `ft_substr`             | Creates a substring from a string.                                        |
| `ft_tolower`            | Converts a character to lowercase.                                        |
| `ft_toupper`            | Converts a character to uppercase.                                        |
| `get_next_line`         | Reads a line from a file descriptor, managing buffer allocation.          |

## 🎯 Goals of the Project

- Create a robust C library that mimics standard functions.
- Improve understanding of memory management and pointer usage in C.
- Enhance debugging and testing skills through rigorous function testing.

Thank you for checking out Libft! 🌟 Happy coding! 💻
