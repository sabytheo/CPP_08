*This project has been created as part of the 42 curriculum by tsaby.*

# C++ Module 08

> Templated containers, iterators, algorithms

## Description

Working with the STL: containers, iterators and algorithms.

Part of the C++ piscine of the 42 curriculum: every exercise is written in **C++98** and compiled with `-Wall -Wextra -Werror -std=c++98`.

## Exercises

| Exercise | Name | What it does |
|---|---|---|
| [`ex00`](ex00/) | Easy find | `easyfind` searches an integer in any container of `int` and throws if it is not found. |
| [`ex01`](ex01/) | Span | `Span` stores up to N integers and returns the shortest and longest span between them; numbers can be added one by one or from an iterator range. |
| [`ex02`](ex02/) | Mutated abomination | `MutantStack` inherits from `std::stack` and exposes the iterators of its underlying container. |

## Instructions

Each exercise is an independent program with its own `Makefile`:

```bash
cd ex00
make
```

| Exercise | Binary | Usage |
|---|---|---|
| `ex00` | `EasyFind` | `./EasyFind` |
| `ex01` | `Span` | `./Span` |
| `ex02` | `MutantStack` | `./MutantStack` |

`make clean` removes the object files, `make fclean` also removes the binary and `make re` rebuilds from scratch.

## Resources

- [cppreference.com](https://en.cppreference.com/w/cpp) — language and standard library reference
- [cplusplus.com](https://cplusplus.com/reference/) — C++98 standard library reference
