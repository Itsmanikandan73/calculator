# Calculator (C + x86 Assembly)

A hybrid calculator that demonstrates low-level programming by combining **C** and **x86 Assembly** using SSE instructions.

---

## Overview

This project implements a simple calculator where:
- The user interface and logic are written in **C**
- All arithmetic operations (`+`, `-`, `*`, `/`) are implemented in **x86-64 Assembly** using SSE floating-point instructions

Great for learning C/Assembly interoperability, calling conventions, and SSE instructions.

---

## Features

- Basic arithmetic operations: Addition, Subtraction, Multiplication, Division
- Double-precision floating point support
- Function pointers for dynamic operation selection
- Pure assembly implementation of math operations

---

## Prerequisites

- **GCC** (C compiler)
- **NASM** (Netwide Assembler)
- Linux or WSL (64-bit)

### Install dependencies (Ubuntu/Debian)

```bash
sudo apt update
sudo apt install gcc nasm -y
```
# Build & Run
```
