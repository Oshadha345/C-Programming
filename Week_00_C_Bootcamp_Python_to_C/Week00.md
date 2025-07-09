🧪 Week 00: C Bootcamp — From Python to Metal
===

> Think of this as learning to drive manual after years of automatic. It's more control, more powerful-but needs your full attention.

---


##🧠 Python vs. C Mental Shift

Concept|Python|C
----|----|----
Declaration|Dynamic|Static(must declare type)
Memory|Managed(no need to worry)|Manual
Strings|`str` type, flexible|array of `char`s, null-terminated
Lists/Arrays|Resizable|Fixed-size unlesss dynamically allocated
Input|input()|scanf() with format specifiers
Print|print()|printf() with %format specifiers
Errors|Runtime/exceptions|compile-time + runtime(no exceptions)

---

## 🧩 Basic Structure of a C Program



```c
#include <stdio.h>   // Preprocessor directive for I/O

int main() {         // Entry point
    printf("Hello, C world!\\n");  // Output
    return 0;        // Exit status
}
```


   # preprocessor directive

   - The `#` symbol tells the __C preprocessor__ to do something before actual compilation. 
   - `#include` means:

   > “Include the contents of another file right here.”

   So `#include <stdio.h>` tells the compiler;

   > “Before compiling, go grab the __Standard Input/Output Header__ and copy its content into this file.”


   - ### Why `stdio.h` is crucial,

   `<stdio.h>` stands for:
   __Standard Input/Output Header__

   It contains:

      - Function declarations for:
         - `printf()` -> output to console
         - `scanf()` -> input from user
         - `getchar()`,`putchar()` -> low-level I/O
         - `fopen()`,`fclose()` -> file I/O

    It tells the compiler:

    - "Hey, when I use `printf()`, don't panic it's defined in this header"


Without `#include <stdio.h>`, What Happens?
Try compiling this:


```c
    int main(){
        printf("Hello\n");
        return 0;
    }
```

🔴 You’ll get a compiler warning or error like:

```vb
warning: implicit declaration of function 'printf'
```

Think of `#include <stdio.h>` as:

> “Import the manual that describes how to use I/O tools. I’ll call them later in the project.”

Just like importing `math` or `os` in Python, but at __compile-time__, not runtime.

## 🧠 Bonus: Angle Brackets vs Quotes

Syntax|Meaning
----|----
`include <stdio.h>` | Look in __system folders__(stadard libraries) 
`include "myfile.h"` | Look in __local folder__ first, then system


# 🧩 The `main()` Function

- This is the entry point of every C program.
- Every C program must have exactly one `main()` function.
- It’s where execution starts.
- The `int` before `main()` means it returns an integer value, usually `0` for success.

```c
int main() {
    // Your code here
    return 0;  // Return 0 to indicate success
}
``` 

- The `return 0;` line indicates that the program finished successfully.
- If you want to indicate an error, you can return a non-zero value.
- The `main()` function can also take command-line arguments:

```c
int main(int argc, char *argv[]) {
    // Your code here
    return 0;  // Return 0 to indicate success
}
```

- `argc` is the number of command-line arguments.
- `argv` is an array of strings (character pointers) representing the arguments.


`The compiler ignores white spaces. However, it is a good practice to use white spaces to make the code more readable.`

```c
#include <stdio.h> int main() { printf("Hello, C world!\\n"); return 0; }
```

and 

```c
#include <stdio.h>

int main() {
    printf("Hello, C world!\\n");
    return 0;

}
```
__Both are valid, but the second is more readable.__

