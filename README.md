Here's a simple `README.md` file for your **"Guess the Random Number"** program:  

---

# Guess the Random Number Game

This is a fun, interactive game implemented in C++. The program generates a random number between 1 and 100, and the player must guess the number. The program provides hints to guide the player towards the correct number.

---

## How It Works
1. The program generates a random number between 1 and 100 using the `rand()` function.
2. The player is prompted to input their guess.
3. The program compares the player's guess with the random number and provides feedback:
   - If the guess is too high, it prints: **"number is higher"**.
   - If the guess is too low, it prints: **"number is lower"**.
4. The game continues until the player guesses the correct number.
5. Once guessed correctly, the program prints: **"YOU WIN"** and exits.

---

## How to Run
1. **Compile the Program**:  
   Use a C++ compiler like `g++`. Run the following command in your terminal:
   ```bash
   g++ -o guess_game guess_game.cpp
   ```

2. **Run the Program**:  
   Execute the compiled file:
   ```bash
   ./guess_game
   ```

3. **Play the Game**:  
   Follow the on-screen prompts to guess the number.

---

## Sample Output
```
Guess the random number:
50
number is higher
75
number is lower
65
YOU WIN
```

---

## Key Features
- Random number generation using `rand()` seeded with the current time (`srand(time(0))`).
- Provides real-time feedback on whether the guess is too high or too low.
- Simple, interactive gameplay suitable for beginners learning C++.

---

## Notes
- Ensure you include `<cstdlib>` and `<ctime>` libraries for random number generation.
- The game loop runs indefinitely until the correct number is guessed.

---

## Contact Robinpooniadeveloper@gmail.com