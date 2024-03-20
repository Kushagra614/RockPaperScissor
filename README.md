## Rock-Paper-Scissors Game 

This code implements a simple Rock-Paper-Scissors game against the computer.

**How to Play:**

1. Compile and run the code (e.g., `g++ rock_paper_scissors.cpp -o rock_paper_scissors`).
2. The program will greet you and display the game options:
    * 1) ROCK
    * 2) PAPER
    * 3) SCISSOR
3. Enter the number corresponding to your chosen option (1, 2, or 3).
4. The program will generate a random choice for the computer and display both selections.
5. The game outcome will be announced based on the rules of Rock-Paper-Scissors (draw, win, or lose).

**Code Breakdown:**

* **`ROCK`, `PAPER`, `SCISSOR`**: Define constants representing the game choices.
* **`computer_choice()`**: Generates a random number between 1 and 3 to represent the computer's choice and displays it.
* **`options()`**: Presents the game options to the user and takes their input. It validates the user's choice and displays a message based on the selection.
* **`game()`**: Compares the user's choice with the computer's and announces the game outcome (draw, win, or lose).
* **`main()`**: Drives the program flow, calling functions for greetings, options, computer choice, game logic, and ending the program.

**Additional Notes:**

* The code uses `srand` and `rand` for generating a random number. These functions rely on system time for seeding, so the randomness might not be perfectly uniform across multiple runs.
* The code could be extended to include features like keeping score, playing multiple rounds, and allowing the user to choose the number of rounds.
