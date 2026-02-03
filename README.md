_This project has been created as part of the 42 curriculum by Visual._

# Libft

## Description

Libft is a custom C library implementing fundamental functions from the standard C library (libc) and additional utility functions. This library serves as a foundation for future 42 projects, providing reliable, reusable implementations of essential functions for string manipulation, memory management, character validation, and linked list operations.

The project emphasizes understanding low-level C programming concepts including pointer arithmetic, memory allocation, and data structure implementation.

## Instructions

### Compilation

```bash
make        # Compile the library
make bonus  # Compile with bonus functions (linked lists)
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```

The library is compiled into `libft.a` using the `ar` command with flags `-Wall -Wextra -Werror`.

### Usage

Include the header in your C files:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror your_file.c libft.a
```

## Library Overview

### Part 1: Libc Functions

Standard C library functions reimplemented with `ft_` prefix:

- **Character checks:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String operations:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- **Memory operations:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Character conversion:** `ft_toupper`, `ft_tolower`, `ft_atoi`

### Part 2: Additional Functions

Custom utility functions not in standard libc:

- **String manipulation:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- **Conversion:** `ft_itoa`
- **Function application:** `ft_strmapi`, `ft_striteri`
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Part 3: Bonus - Linked Lists

Functions for manipulating singly linked lists using the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

- **Node operations:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`
- **List utilities:** `ft_lstsize`, `ft_lstlast`, `ft_lstiter`, `ft_lstmap`

## Resources

### Documentation

- [42 Cursus Gitbook](https://42-cursus.gitbook.io/guide/0-rank-00/libft) — Libft guide and resources
- [Linux man pages](https://man7.org/linux/man-pages/) — Standard C library function references
- [42 Norm](https://github.com/42School/norminette) — 42 coding standards

### AI Usage

AI was used for the following specific tasks:

- **Documentation:** Writing this README and converting `subject.pdf` to `subject.md` (available in repo)
- **Makefile optimization:** Reviewing compilation rules and ensuring proper relinking behavior
- **Edge case verification:** Discussing boundary conditions for functions like `ft_split` and `ft_calloc`

All function implementations were written manually to ensure deep understanding of C fundamentals. AI was not used to generate function logic or solve core algorithmic challenges.
