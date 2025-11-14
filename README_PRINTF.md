# ft_printf 🖨️

A recreation of the printf function from the C standard library, developed as part of the 42 school curriculum.

## 📊 Score

**100/100** ✅ Perfect Score!

## 🎯 Description

ft_printf is a project that involves recoding the famous printf function from libc. This project introduces variadic functions in C and provides a deep understanding of formatted output and type conversions.

## 🚀 Function Prototype

```c
int ft_printf(const char *format, ...);
```

## 📋 Parameters

- `format`: A string containing the format and conversion specifiers

## 📤 Return Value

- Returns the number of characters printed (excluding the null terminator)
- Returns -1 on error

## 🔤 Implemented Conversions

The function handles the following conversion specifiers:

| Specifier | Description |
|-----------|-------------|
| `%c` | Print a single character |
| `%s` | Print a string |
| `%p` | Print a pointer address in hexadecimal |
| `%d` | Print a decimal (base 10) number |
| `%i` | Print an integer in base 10 |
| `%u` | Print an unsigned decimal number |
| `%x` | Print a number in hexadecimal (lowercase) |
| `%X` | Print a number in hexadecimal (uppercase) |
| `%%` | Print a percent sign |

## 🛠️ Compilation

```bash
make        # Compile the library
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile the entire project
```

## 💡 Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    int     count;
    char    *str = "World";
    int     num = 42;
    void    *ptr = &num;

    count = ft_printf("Hello, %s!\n", str);
    ft_printf("Characters printed: %d\n", count);
    
    ft_printf("Number: %d\n", num);
    ft_printf("Hex lowercase: %x\n", num);
    ft_printf("Hex uppercase: %X\n", num);
    ft_printf("Pointer: %p\n", ptr);
    ft_printf("Unsigned: %u\n", -1);
    ft_printf("Percent: %%\n");
    
    return (0);
}
```

**Output:**
```
Hello, World!
Characters printed: 14
Number: 42
Hex lowercase: 2a
Hex uppercase: 2A
Pointer: 0x7ffd5c8e4a2c
Unsigned: 4294967295
Percent: %
```

## 📁 Project Structure

```
ft_printf/
├── ft_printf.h           # Header file
├── ft_printf.c           # Main function
├── ft_print_char.c       # Character printing
├── ft_print_string.c     # String printing
├── ft_print_pointer.c    # Pointer printing
├── ft_print_number.c     # Number printing functions
├── ft_print_hex.c        # Hexadecimal printing
├── ft_print_unsigned.c   # Unsigned number printing
├── Makefile
└── README.md
```

## 🧰 Technical Details

- **Language:** C
- **Allowed Functions:** malloc, free, write, va_start, va_arg, va_copy, va_end
- **Library:** libftprintf.a
- **Memory Management:** No memory leaks
- **Norm:** Compliant with 42's coding standard

## 🎯 Key Concepts

### Variadic Functions
The project introduces the use of variadic functions through the `stdarg.h` library:
- `va_list` - holds information about variable arguments
- `va_start` - initializes the va_list
- `va_arg` - retrieves the next argument
- `va_end` - cleanup after using arguments

### Type Conversions
Different approaches for handling various data types:
- Character and string handling
- Integer to string conversion (decimal and hexadecimal)
- Pointer address formatting
- Unsigned number management

## 🔧 Implementation Highlights

- **Modular design:** Each conversion has its own function
- **Efficient parsing:** Format string is parsed character by character
- **Accurate counting:** Returns exact number of printed characters
- **Error handling:** Manages NULL pointers and edge cases

## 💭 What I Learned

- Understanding variadic functions in C
- Working with format strings and specifiers
- Base conversion algorithms (decimal, hexadecimal)
- Type casting and pointer manipulation
- Building a clean and modular codebase
- Mimicking standard library behavior

## 🧪 Testing

Compare outputs with the original printf:
```c
// Test with various inputs
ft_printf("ft: %d\n", 42);
printf("or: %d\n", 42);

ft_printf("ft: %s\n", "Hello");
printf("or: %s\n", "Hello");

ft_printf("ft: %p\n", &num);
printf("or: %p\n", &num);
```

Test edge cases:
- NULL strings: `ft_printf("%s\n", NULL)`
- Zero values: `ft_printf("%d\n", 0)`
- Negative numbers: `ft_printf("%d\n", -2147483648)`
- Multiple conversions: `ft_printf("%d %s %x\n", 42, "test", 255)`

## 🏆 Bonus Features

If implemented:
- Flag management: `-0.# +`
- Width and precision handling
- Additional conversions

## 📚 Resources

- `man 3 printf`
- `man 3 stdarg`
- C standard library documentation

## 📝 License

This project is part of the 42 school curriculum.

---

Made with ☕ at 42
