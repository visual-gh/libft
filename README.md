# Libft - Progress Tracker

## 1. Part 1: Libc Functions (Standard Library Re-implementations)

These functions are fundamental re-implementations of their standard C counterparts (e.g., `ft_strlen` is the custom version of `strlen`).

### **Character & String Tests**

* [x] `ft_isalpha`
* [x] `ft_isdigit`
* [x] `ft_isalnum`
* [x] `ft_isascii`
* [x] `ft_isprint`
* [x] `ft_toupper`
* [x] `ft_tolower`

### **Memory & String Manipulation**

* [ ] `ft_strlen`
* [ ] `ft_memset`
* [ ] `ft_bzero`
* [ ] `ft_memcpy`
* [ ] `ft_memmove`
* [ ] `ft_strlcpy`
* [ ] `ft_strlcat`
* [ ] `ft_strchr`
* [ ] `ft_strrchr`
* [ ] `ft_strncmp`
* [ ] `ft_memchr`
* [ ] `ft_memcmp`
* [ ] `ft_strnstr`

### **Conversions & Allocations**

* [ ] `ft_atoi`
* [ ] `ft_calloc` (Memory allocation)
* [ ] `ft_strdup` (String allocation and copy)

---

## 2. Part 2: Additional Functions (Custom Utility Functions)

These functions do not have exact standard C library equivalents and introduce new concepts like dynamic memory allocation for returned values.

### **String Utilities**

* [ ] `ft_substr` (Extract a substring)
* [ ] `ft_strjoin` (Join two strings)
* [ ] `ft_strtrim` (Trim whitespace/set from a string)
* [ ] `ft_split` (Split a string by a delimiter)
* [ ] `ft_itoa` (Integer to string conversion)

### **Iterative & Output Functions**

* [ ] `ft_strmapi` (Apply function to string characters with index)
* [ ] `ft_striteri` (Iterate string and apply function to each character)
* [ ] `ft_putchar_fd` (Output a character to a file descriptor)
* [ ] `ft_putstr_fd` (Output a string to a file descriptor)
* [ ] `ft_putendl_fd` (Output a string and a newline to a file descriptor)
* [ ] `ft_putnbr_fd` (Output a number to a file descriptor)

---

## 3. Bonus Part: Linked List Functions

These functions are required for the bonus part and operate on a custom linked list structure (`t_list`).

* [ ] `ft_lstnew` (Create a new node)
* [ ] `ft_lstadd_front` (Add a node to the beginning of the list)
* [ ] `ft_lstsize` (Count the number of nodes in a list)
* [ ] `ft_lstlast` (Find the last node of the list)
* [ ] `ft_lstadd_back` (Add a node to the end of the list)
* [ ] `ft_lstdelone` (Delete a single node)
* [ ] `ft_lstclear` (Delete all nodes)
* [ ] `ft_lstiter` (Apply a function to the content of all nodes)
* [ ] `ft_lstmap` (Apply a function and create a new list from the results)

---

## Key Project Components

Don't forget these required files:

* [ ] **Makefile:** To compile your library (`libft.a`).
* [ ] **libft.h:** Header file containing all your function prototypes.
* [ ] **libft.a:** The final static library file.
