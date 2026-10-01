# dominosaC

A terminal version of **Dominosa**, the logic puzzle where a grid of numbers has to be split into dominoes so that every pair of numbers appears exactly once.

This was my project for *Fonaments d'Ordinadors* (FO), my first programming subject in Telecommunications Engineering at UPC.

## The puzzle

A Dominosa of order `n` uses the numbers `0..n` on a grid of `(n+1) × (n+2)` cells. Your goal is to connect adjacent cells in pairs until the whole board is covered by a full set of dominoes, with no domino repeated.

## Features

- Loads puzzles from text files (`dominosa/*.txt`)
- Draws the board in the terminal with column numbers, row letters (`A`, `B`, ...) and a different color for each number
- Uses a simple cell notation for moves, for example `A0B0`

> **Status:** the board loading and drawing work. The logic for connecting cells and checking the solution was never finished.

## Puzzle file format

```
3 4 5          <- order n, number of rows, number of columns
0 0 2 3 1
2 3 2 1 3
1 3 3 1 2
2 0 1 0 0
```

## Build and run

```bash
cd dominosa
gcc dominosafich.c tablero.c fichero.c colores.c -o dominosa
./dominosa
```

When it asks for a file name, enter one of the puzzles (for example `3001.txt`). Enter `1` to quit.

## Project structure

| File | Purpose |
|---|---|
| `dominosafich.c` | Entry point and main loop |
| `tablero.c/.h` | Board data structures and drawing |
| `fichero.c/.h` | Reading integers from a file (provided by the course) |
| `colores.c/.h` | ANSI terminal colors (provided by the course) |
| `*.txt` | Puzzle boards of different sizes |
