# T3Tactical Game in C++

This is a simple implementation of the classic Tic Tac Toe game in C++. The game is played through the command line interface.

## Features

- Two-player gameplay.
- 3x3 grid for the Tic Tac Toe board.
- Determines the winner based on rows, columns, and diagonals.
- Handles invalid moves and provides error messages.

## Getting Started

1. Clone the repository:
   ```bash
   git clone <repository_url>
   cd T3Tactical
   
2. Compile the code using a C++ compiler (e.g., g++):
    ```bash
    g++ -o t3_tactical t3_tactical.cpp

3. Run the executable:
    ```bash
    t3_tactical

  **Follow the on-screen instructions to play the game. Enter the position (1 to 9) where you want to place your symbol (X or O).**

## Gameplay

- The game is played on a 3x3 grid.
- Players take turns to enter the position where they want to place their symbol (X or O).
- The game checks for a winner after each move and declares the winner if there's a winning combination.
- If the board is filled and there's no winner, the game ends in a draw.

## Example

```diff
1 2 3
4 5 6
7 8 9
Player X, enter the position: 5
1 2 3
4 X 6
7 8 9
Player O, enter the position: 3
1 2 O
4 X 6
7 8 9
...
Player X wins!
```

## Acknowledgments

- The game logic is inspired by classic Tic Tac Toe rules.
- Developed as a learning exercise in C++ programming.















