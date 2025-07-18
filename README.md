# 🧠 C Programming: Deep Dive From Bits to Systems

Welcome to the Miracle C Programming Course — custom-built for a system-savvy, architecture-curious engineering mind. This repository will guide you from basic syntax all the way to memory-level mastery and systems programming.

---

## 🧭 Course Goals

- 🚀 Master C from both a programmer’s and an engineer’s perspective.
- 🔬 Understand memory, stack, heap, and system calls in depth.
- 🧱 Build projects that bridge theory (digital design, low-level systems) with practical coding.
- 🔧 Prepare for embedded systems, OS-level development, and hardware interfacing.

---

## 📚 Course Roadmap

> Designed to evolve with you — from foundational C to memory hacking, systems programming, and networking.

### 🏁 Week 00: C Bootcamp - Python to C ✅

**Topics Covered:**
- [x] Basic C program structure (`#include`, `main()`)
- [x] Printf formatting and format specifiers
- [x] Escape sequences
- [x] Input/output with `scanf()`
- [x] Variable declarations and basic data types
- [x] Width, precision, and alignment formatting

**Subtopics:**
- [x] Preprocessor directives (`#include <stdio.h>`)
- [x] Entry point function (`int main()`)
- [x] Format specifiers (`%d`, `%f`, `%c`, `%s`, `%x`, `%p`)
- [x] Escape sequences (`\n`, `\t`, `\\`, `\'`, `\"`, `\r`, `\f`, `\b`)
- [x] Printf width and precision (`%10.2f`, `%-10s`, `%05d`)
- [x] Flag formatting (`+`, `-`, `0`, space padding)
- [x] User input with `scanf()` and address operator (`&`)
- [x] Basic arithmetic operations
  
**Files Created:**
- [x] [`01_hello.c`](Week_00_C_Bootcamp_Python_to_C/01_hello.c) - Hello World program
- [x] [`02_square_number.c`](Week_00_C_Bootcamp_Python_to_C/02_square_number.c) - User input and calculations
- [x] [`03_printf.c`](Week_00_C_Bootcamp_Python_to_C/03_printf.c) - Printf formatting examples
- [x] [`04_format.c`](Week_00_C_Bootcamp_Python_to_C/04_format.c) - Format specifier demonstrations
- [x] [`05_format_specifier.c`](Week_00_C_Bootcamp_Python_to_C/05_format_specifier.c) - Advanced formatting
- [x] [`escape_sequence.c`](Week_00_C_Bootcamp_Python_to_C/escape_sequnce.c) - Escape sequence examples
- [x] [`examples.c`](Week_00_C_Bootcamp_Python_to_C/examples.c) - Character and string examples
- [x] [`exercise_01.c`](Week_00_C_Bootcamp_Python_to_C/exercise_01.c) - Data type demonstrations
- [x] [`exercise_02.c`](Week_00_C_Bootcamp_Python_to_C/exercise_02.c) - Table formatting

---

### ✅ Week 1: Variables, Memory, and the Hidden Machinery of C

**Topics:**
- [ ] Data types deep dive (`int`, `float`, `double`, `char`, `void`)
- [ ] Type modifiers (`signed`, `unsigned`, `short`, `long`)
- [ ] Variables as memory labels
- [ ] Binary storage and representation
- [ ] Stack vs Heap introduction
- [ ] Memory layout visualization
- [ ] Compilation steps (`gcc` flags)

**Subtopics:**
- [ ] Sizeof operator and memory footprint
- [ ] Type casting and implicit conversions
- [ ] Constants (`const`, `#define`)
- [ ] Variable scope (local, global, static)
- [ ] Memory addresses and the `&` operator
- [ ] Hexadecimal representation
- [ ] Endianness concepts

**Mini Projects:**
- [ ] Variable size & address explorer
- [ ] Binary printer utility
- [ ] Memory layout visualizer (CLI)
- [ ] Type conversion calculator

---

### 🧠 Week 2: Control Flow and Logic in Action

**Topics:**
- [ ] Conditional statements (`if`, `else if`, `else`)
- [ ] Switch statements and fall-through
- [ ] Loops (`while`, `do-while`, `for`)
- [ ] Break and continue statements
- [ ] Logic operators (`&&`, `||`, `!`)
- [ ] Comparison operators
- [ ] Ternary operator (`? :`)

**Subtopics:**
- [ ] Nested conditionals
- [ ] Loop optimization techniques
- [ ] Short-circuit evaluation
- [ ] Truth tables in C
- [ ] Bitwise logical operations
- [ ] Flow control best practices

**Mini Projects:**
- [ ] CLI Rock-Paper-Scissors with flowchart
- [ ] Logic Gate Evaluator
- [ ] Number guessing game
- [ ] Simple calculator with menu

---

### 💾 Week 3: Arrays, Strings, and Matrices

**Topics:**
- [ ] 1D arrays declaration and initialization
- [ ] 2D arrays and multi-dimensional arrays
- [ ] String manipulation (`char[]` arrays)
- [ ] String functions (`strlen`, `strcpy`, `strcmp`)
- [ ] Array bounds and memory safety
- [ ] Character arrays vs string literals

**Subtopics:**
- [ ] Array indexing and traversal
- [ ] String concatenation techniques
- [ ] Null termination in strings
- [ ] Array passing to functions
- [ ] Matrix operations (addition, multiplication)
- [ ] Dynamic string handling

**Mini Projects:**
- [ ] Matrix calculator (add, multiply, transpose)
- [ ] String reversal & tokenizer
- [ ] Histogram grapher (ASCII art)
- [ ] Text statistics analyzer

---

### 🧠 Week 4: Functions, Stack Frames, Recursion

**Topics:**

- [ ] Function declaration and definition
- [ ] Parameter passing (by value)
- [ ] Return values and types
- [ ] Function prototypes
- [ ] Recursion concepts and implementation
- [ ] Stack frames visualization
- [ ] Local vs global scope in functions
- [ ] Inline assembly basics (for curiosity)
  
**Subtopics:**
- [ ] Function overloading limitations
- [ ] Inline functions
- [ ] Static functions
- [ ] Variadic functions (`...`)
- [ ] Function pointers introduction
- [ ] Tail recursion optimization

**Mini Projects:**
- [ ] Recursive Fibonacci + memory trace
- [ ] Call Stack Simulator
- [ ] Function library creator
- [ ] Mathematical functions package

---

### 🧠 Week 5: Pointers, Dynamic Memory, Structs

**Topics:**
- [ ] Pointer basics and syntax (`*`, `&`)
- [ ] Pointer arithmetic
- [ ] Dynamic memory allocation (`malloc`, `calloc`, `realloc`)
- [ ] Memory deallocation (`free`)
- [ ] Memory leaks and debugging
- [ ] Structures (`struct`) definition and usage
- [ ] Arrays of structures

**Subtopics:**
- [ ] Null pointers and safety checks
- [ ] Double pointers (`**`)
- [ ] Pointer to pointer concepts
- [ ] Structure padding and alignment
- [ ] Typedef for cleaner code
- [ ] Union types
- [ ] Bit fields in structures

**Mini Projects:**
- [ ] Custom dynamic array implementation
- [ ] Memory allocator clone
- [ ] Student record management system
- [ ] Memory leak detector

---

### 📁 Week 6: File I/O and Data Structures (1 Hour)

**Topics:**
- [ ] File handling (`fopen`, `fclose`, `fread`, `fwrite`)
- [ ] Text vs binary file operations
- [ ] File positioning (`fseek`, `ftell`)
- [ ] Error handling in file operations
- [ ] Linked lists implementation
- [ ] Stacks and queues
- [ ] Basic tree structures

**Subtopics:**
- [ ] File modes (`r`, `w`, `a`, `rb`, `wb`)
- [ ] Buffer management
- [ ] CSV file parsing
- [ ] Binary data serialization
- [ ] Dynamic data structure memory management
- [ ] Iterator patterns for data structures

**Mini Projects:**
- [ ] File-based contact manager
- [ ] CSV data processor
- [ ] Simple database simulator
- [ ] Log file analyzer

---

### 🔨 Week 7: Build Systems and Advanced C (1 Hour)

**Topics:**
- [ ] Makefile creation and usage
- [ ] Multi-file projects organization
- [ ] Header files and include guards
- [ ] Preprocessor directives (`#define`, `#ifdef`)
- [ ] Conditional compilation
- [ ] Static vs dynamic linking
- [ ] Library creation

**Subtopics:**
- [ ] Makefile variables and rules
- [ ] Dependency management
- [ ] Cross-platform compilation
- [ ] Debugging with `gdb`
- [ ] Profiling and optimization
- [ ] Code documentation standards

**Mini Projects:**
- [ ] Multi-module calculator project
- [ ] Static library creation
- [ ] Build system for previous projects
- [ ] Cross-platform utility

---



---

### 🌐 Extraaas: Networking and Low-level Systems

**Topics:**
- Bit-level data structures
- TCP/UDP socket programming
- DNS, HTTP, and packet structure

**Mini Projects:**
- [ ] Socket chat app
- [ ] Packet visualizer (C + ASCII)
- [ ] Basic TCP/IP simulator

---

## 🛠 Tools Used

- **Compiler**: GCC
- **Debugger**: GDB
- **Memory Tools**: Valgrind
- **Online IDEs**: Replit, Compiler Explorer
- **Version Control**: Git + GitHub

---

## 📁 Folder Structure

/src # Source code
/projects # Larger integrations 
/memory-lab # Memory visualizations, stack tracers 
/docs # Notes, diagrams, flowcharts 
/tests # Challenge exercises 
README.md # You're here


---

## 🧠 This Repo is For You If...

- You care how systems work under the hood.
- You enjoy digital logic and want to bridge it with code.
- You want to build smarter C programs, not just functional ones.
- You believe every line of code should be memory-aware.

---

## 📌 Milestone Goals

- [ ] Finish all mini-projects
- [ ] Write a 4-layer TCP/IP simulator in C
- [ ] Build your own malloc
- [ ] Submit an embedded project (e.g., ESP32 or STM32-based)
- [ ] Teach a topic to someone else

---

## 🧑‍💻 License

MIT License — This is your playground.

---

