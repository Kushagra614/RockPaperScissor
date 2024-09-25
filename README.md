# 🎮 Rock-Paper-Scissors Game

This is a simple **Rock-Paper-Scissors** game where you can play against the computer. Test your luck and strategy by selecting one of the three choices and see if you can outsmart the computer!

## 🎯 How to Play

1. **Compile and Run the Code**:
   - Use a compiler like `g++` to compile the C++ program:
     ```bash
     g++ rock_paper_scissors.cpp -o rock_paper_scissors
     ```
   - Then, run the program:
     ```bash
     ./rock_paper_scissors
     ```

2. **Choose Your Move**:
   - The game will greet you and present the options:
     ```
     1) ROCK 🪨
     2) PAPER 📄
     3) SCISSORS ✂️
     ```
   - Enter the number (1, 2, or 3) corresponding to your chosen move.

3. **Computer’s Choice**:
   - The computer will randomly select its move, and the game will display both your choice and the computer’s choice.

4. **Game Outcome**:
   - Based on the classic **Rock-Paper-Scissors** rules, the game will declare whether you win, lose, or it’s a draw:
     - **Rock** crushes **Scissors** 🪨✂️
     - **Scissors** cuts **Paper** ✂️📄
     - **Paper** covers **Rock** 📄🪨

## 🧠 Code Breakdown

### 🪨 Constants

The game defines three constants representing the three possible choices:
- **ROCK** (1)
- **PAPER** (2)
- **SCISSORS** (3)

### 🎲 `computer_choice()` Function

This function generates a random number between 1 and 3 to represent the computer’s selection:
- 1 for **ROCK** 🪨
- 2 for **PAPER** 📄
- 3 for **SCISSORS** ✂️

It displays the computer's choice for comparison against the player's move.

### 🎮 `options()` Function

- Presents the player with the three choices (rock, paper, scissors).
- Takes the user’s input and ensures it's a valid option (1, 2, or 3). If not, it prompts the player to try again.
- Displays a message based on the player's input.

### ⚔️ `game()` Function

- Compares the user’s move with the computer’s move.
- Displays the result of the game:
  - **Draw** 🤝: Both the player and the computer selected the same option.
  - **Win** 🏆: The player’s choice beats the computer’s choice according to the game rules.
  - **Lose** 😞: The computer’s choice beats the player’s choice.

### 🏁 `main()` Function

This is the entry point of the program:
- Greets the player with a welcome message.
- Calls the necessary functions to display options, get user input, generate the computer’s choice, and declare the game result.
- Ends the game when the player is done.

## 🛠️ Future Improvements

- **Keep Score**: Track the player’s and computer’s scores across multiple rounds.
- **Best of N**: Allow the user to play a set number of rounds (e.g., best of 3).
- **Input Validation**: Enhance the input validation to handle non-numeric values more gracefully.
- **Enhanced UI**: Add more game messages and animations for a better user experience.

## 💡 Example Output

```
Welcome to Rock-Paper-Scissors! 🎉
Please select your move:
1) ROCK 🪨
2) PAPER 📄
3) SCISSORS ✂️

Your choice: 1
Computer chose: SCISSORS ✂️
You win! 🏆 Rock crushes Scissors!
```

## 👨‍💻 How to Run the Code

1. **Clone the repository**:

   ```bash
   git clone https://github.com/your-username/rock-paper-scissors.git
   ```

2. **Navigate to the directory**:

   ```bash
   cd rock-paper-scissors
   ```

3. **Compile and Run**:

   ```bash
   g++ rock_paper_scissors.cpp -o rock_paper_scissors
   ./rock_paper_scissors
   ```

## 🔧 Additional Notes

- The code uses `srand` and `rand` to generate a random number for the computer's choice. The randomness is seeded using the system time, ensuring that each run of the program is different.
- The game is a single-round version for simplicity, but it can be extended to include more rounds or advanced features like score tracking.

