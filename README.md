# Libft
<h4 align="left">This project is about coding a C library. 
It will contain a lot of general purpose functions your programs will rely upon.
</h4>

<h1 align="center"> Functions 🧑🏻‍💻 ⚙️ </h1>


| Name | Prototype | Description | Return Value |
|:-------------:|:---------:|:-----------:|:------------:|
| ft_isalpha | `int isalpha(int c);` | Checks if the character is an alphabetic letter. | Non-zero if true, 0 otherwise. |
| ft_isdigit | `int isdigit(int c);` | Checks if the character is a digit (0-9). | Non-zero if true, 0 otherwise. |
| ft_isalnum | `int isalnum(int c);` | Checks if the character is alphanumeric. | Non-zero if true, 0 otherwise. |
| ft_isascii | `int isascii(int c);` | Checks if the character is an ASCII character. | Non-zero if true, 0 otherwise. |
| ft_isprint | `int isprint(int c);` | Checks if the character is printable. | Non-zero if true, 0 otherwise. |
| ft_strlen | `size_t strlen(const char *s);` | Computes the length of the string. | The number of characters in the string. |
| ft_memset | `void *memset(void *s, int c, size_t n);` | Fills memory with a constant byte. | A pointer to the memory area `s`. |
| ft_bzero | `void bzero(void *s, size_t n);` | Sets the first `n` bytes of the area starting at `s` to zero. | None |
| ft_memcpy | `void *memcpy(void *dest, const void *src, size_t n);` | Copies `n` bytes from memory area `src` to memory area `dest`. | A pointer to `dest`. |
| ft_memmove | `void *memmove(void *dest, const void *src, size_t n);` | Copies `n` bytes from memory area `src` to memory area `dest`. Memory areas may overlap. | A pointer to `dest`. |
| ft_strlcpy | `size_t strlcpy(char *dst, const char *src, size_t dstsize);` | Copies up to `dstsize - 1` characters from `src` to `dst`. | The total length of the string it tried to create. |
| ft_strlcat | `size_t strlcat(char *dst, const char *src, size_t dstsize);` | Appends `src` to the end of `dst`. | The total length of the string it tried to create. |
| ft_toupper | `int toupper(int c);` | Converts a lower-case letter to upper-case. | The upper-case equivalent, or `c` if not a lower-case letter. |
| ft_tolower | `int tolower(int c);` | Converts an upper-case letter to lower-case. | The lower-case equivalent, or `c` if not an upper-case letter. |
| ft_strchr | `char *strchr(const char *s, int c);` | Locates the first occurrence of `c` in the string `s`. | A pointer to the found character, or NULL if not found. |
| ft_strrchr | `char *strrchr(const char *s, int c);` | Locates the last occurrence of `c` in the string `s`. | A pointer to the found character, or NULL if not found. |
| ft_strncmp | `int strncmp(const char *s1, const char *s2, size_t n);` | Compares up to `n` characters of the strings `s1` and `s2`. | An integer less than, equal to, or greater than zero. |
| ft_memchr | `void *memchr(const void *s, int c, size_t n);` | Scans the initial `n` bytes for the first instance of `c`. | A pointer to the found character, or NULL if not found. |
| ft_memcmp | `int memcmp(const void *s1, const void *s2, size_t n);` | Compares the first `n` bytes of memory areas `s1` and `s2`. | An integer less than, equal to, or greater than zero. |
| ft_strnstr | `char *strnstr(const char *haystack, const char *needle, size_t len);` | Locates the first occurrence of `needle` in the string `haystack`, where not more than `len` characters are searched. | A pointer to the found string, or NULL if not found. |
| ft_atoi | `int atoi(const char *str);` | Converts the string to an integer. | The converted value or zero on error. |
| ft_calloc | `void *calloc(size_t nmemb, size_t size);` | Allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. | A pointer to the allocated memory, or NULL if allocation fails. |
| ft_strdup | `char *strdup(const char *s);` | Returns a pointer to a new string which is a duplicate of the string `s`. | A pointer to the duplicated string, or NULL if allocation fails. |
| ft_substr | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Allocates and returns a substring from `s`. | The substring or NULL if allocation fails. |
| ft_strjoin | `char *ft_strjoin(char const *s1, char const *s2);` | Allocates and returns a new string, result of concatenation of `s1` and `s2`. | The new string or NULL if allocation fails. |
| ft_strtrim | `char *ft_strtrim(char const *s1, char const *set);` | Allocates and returns a copy of `s1` with characters specified in `set` removed from the beginning and the end. | The trimmed string or NULL if allocation fails. |
| ft_split | `char **ft_split(char const *s, char c);` | Allocates and returns an array of strings obtained by splitting `s` using the character `c` as a delimiter. | The array of new strings or NULL if allocation fails. |
| ft_itoa | `char *ft_itoa(int n);` | Allocates and returns a string representing the integer received as an argument. | The string representing the integer or NULL if allocation fails. |
| ft_strmapi | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies the function `f` to each character of the string `s` to create a new string. | The string created from the successive applications of `f` or NULL if allocation fails. |
| ft_striteri | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies the function `f` to each character of the string `s`. | None |
| ft_putchar_fd | `void ft_putchar_fd(char c, int fd);` | Outputs the character `c` to the given file descriptor. | None |
| ft_putstr_fd | `void ft_putstr_fd(char *s, int fd);` | Outputs the string `s` to the given file descriptor. | None |
| ft_putendl_fd | `void ft_putendl_fd(char *s, int fd);` | Outputs the string `s` to the given file descriptor, followed by a newline. | None |
| ft_putnbr_fd | `void ft_putnbr_fd(int n, int fd);` | Outputs the integer `n` to the given file descriptor. | None |

<h2>Bonus💎</h2>

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```

| Name | Prototype | Description | Return Value |
|:-------------:|:---------:|:-----------:|:------------:|
| ft_lstnew | `t_list *ft_lstnew(void *content);` | Allocates and returns a new node. | The new node or NULL if allocation fails. |
| ft_lstadd_front | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds the node `new` at the beginning of the list. | None |
| ft_lstsize | `int ft_lstsize(t_list *lst);` | Counts the number of nodes in a list. | The length of the list. |
| ft_lstlast | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of the list. | The last node of the list. |
| ft_lstadd_back | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds the node `new` at the end of the list. | None |
| ft_lstdelone | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees the memory of the node’s content using the function `del`. | None |
| ft_lstclear | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees the given node and every successor of that node. | None |
| ft_lstiter | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Iterates the list `lst` and applies the function `f` on the content of each node. | None |
| ft_lstmap | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates a new list from the successive applications of `f` on the content of each node. | The new list or NULL if allocation fails. |
