
# Push_swap

`Push_swap` is a sorting algorithm project in C, designed to sort data on a stack using a limited set of operations. The main goal of this project is to sort a stack of integers with the minimum number of operations and to understand and implement sorting algorithms.

## Table of Contents

- [Introduction](#introduction)
- [How It Works](#how-it-works)
- [Installation](#installation)
- [Usage](#usage)
- [Operations](#operations)
- [Example](#example)
- [Resources](#resources)
- [License](#license)

## Introduction

The `Push_swap` project is part of the 42 curriculum and is designed to improve your algorithmic skills, especially regarding sorting algorithms and manipulation of stacks. The goal is to sort a stack using a set of predefined operations while minimizing the number of moves.

## How It Works

The project consists of two main components:

1. **Push_swap Program**: This program calculates and outputs the list of operations needed to sort the stack of integers.
2. **Checker Program**: This program validates if the stack is correctly sorted using the provided operations.

The allowed operations are a set of basic operations on two stacks (stack `a` and stack `b`). You need to implement these operations and combine them efficiently to sort the stack with the minimum number of moves.

## Installation

To install and build the project, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/jternero/push_swap.git
   cd push_swap
   ```

2. Build the project:
   ```bash
   make
   ```

This will compile the `push_swap` and `checker` programs.

## Usage

### Running the `push_swap` Program

You can run the `push_swap` program to generate the operations needed to sort a stack:

```bash
./push_swap [numbers]
```

- Example:
  ```bash
  ./push_swap 4 3 2 1
  ```

This will output the operations required to sort the stack `[4, 3, 2, 1]`.

### Running the `checker` Program

You can validate your sorting operations using the `checker` program:

```bash
./checker [numbers]
```

After running `checker`, you can input the operations manually or use the output of `push_swap`:

```bash
./push_swap 4 3 2 1 | ./checker 4 3 2 1
```

This will verify if the operations provided by `push_swap` correctly sort the stack. The `checker` will output `OK` if the stack is sorted, or `KO` if not.

## Operations

The following operations are allowed:

- **sa**: Swap the first two elements of stack `a`.
- **sb**: Swap the first two elements of stack `b`.
- **ss**: Perform `sa` and `sb` simultaneously.
- **pa**: Push the first element from stack `b` onto stack `a`.
- **pb**: Push the first element from stack `a` onto stack `b`.
- **ra**: Rotate stack `a` (move the first element to the end).
- **rb**: Rotate stack `b`.
- **rr**: Perform `ra` and `rb` simultaneously.
- **rra**: Reverse rotate stack `a` (move the last element to the beginning).
- **rrb**: Reverse rotate stack `b`.
- **rrr**: Perform `rra` and `rrb` simultaneously.

## Example

```bash
$ ./push_swap 3 2 1
sa
ra
```

This example shows the output of `push_swap` for sorting the stack `[3, 2, 1]`. The operations `sa` and `ra` will sort the stack in ascending order.

You can verify it with the `checker`:

```bash
$ ./push_swap 3 2 1 | ./checker 3 2 1
OK
```

## Resources

For more information on the `Push_swap` project and how to implement efficient sorting algorithms, you can refer to:

- [42 School Push_swap Subject](https://cdn.intra.42.fr/pdf/pdf/492/push_swap.en.pdf)
- [Sorting Algorithms](https://en.wikipedia.org/wiki/Sorting_algorithm)

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
