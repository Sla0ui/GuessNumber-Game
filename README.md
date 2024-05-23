# Number Guessing Game

This is a simple number guessing game written in C. The player tries to guess a randomly generated number within a certain number of attempts, depending on the difficulty level chosen. The game includes special features like cheat codes and score management.

## Features

- Three difficulty levels: Easy, Medium, and Hard
- Score tracking
- Cheat code to reveal the number or get additional attempts
- Option to continue playing after a win or loss

## Requirements

- Windows operating system (due to usage of `conio.h` and `system` commands)
- C compiler (e.g., GCC)

## How to Play

1. **Choose a difficulty level:**
   - 1 for Hard
   - 2 for Medium
   - 3 for Easy
   - 4 to Quit

2. **Enter your guess:**
   - If your guess is higher than the target number, you will be informed that the number is smaller.
   - If your guess is lower than the target number, you will be informed that the number is larger.
   - If your guess is correct, you will be congratulated and your score will increase.
   - You have a limited number of attempts based on the chosen difficulty level.

3. **Special Commands:**
   - Enter `404` to access the cheat menu:
     - View the target number at the cost of points.
     - Add 10 attempts at the cost of points.
     - Add points to your score from a limited pool.
   - Enter `666` to forfeit the current game.

4. **Win/Lose Conditions:**
   - If you guess the number correctly within the allowed attempts, you win.
   - If you exhaust all attempts without guessing correctly, you lose.

## Compilation

To compile the game, use a C compiler like GCC:

```bash
gcc -o guessing_game guessing_game.c
```

## Running the Game

After compiling, run the executable:

```bash
./guessing_game
```

## Example Gameplay

```
Niveau :                                          Score : 0 
1-Difficile
2-Moyen
3-Facile
4-Quitter
Votre Choix ? 2

$$\      $$\  
$$$\    $$$ |  
$$$$\  $$$$ | $$$$$$\  $$\   $$\  $$$$$$\  $$$$$$$\ 
$$\$$\$$ $$ |$$  __$$\ $$ |  $$ |$$  __$$\ $$  __$$\
$$ \$$$  $$ |$$ /  $$ |$$ |  $$ |$$$$$$$$ |$$ |  $$ |
$$ |\$  /$$ |$$ |  $$ |$$ |  $$ |$$   ____|$$ |  $$ |
$$ | \_/ $$ |\$$$$$$  |\$$$$$$$ |\$$$$$$$\ $$ |  $$ |
\__|     \__| \______/  \____$$ | \_______|\__|  \__|
                       $$\   $$ | 
                       \$$$$$$  | 
                        \______/                    (666 pour Quitter)


Entrer un Nombre : 50
Le nombre est plus grand ! (Coups Restantes : 19)
Entrer un Nombre : 75
Le nombre est plus petit ! (Coups Restantes : 18)
Entrer un Nombre : 60
Vous avez obtenu la solution en 3 coups !
```

## License

This project is licensed under the GNU License.

---

Enjoy the game! If you encounter any issues or have suggestions, feel free to open an issue or contribute to the repository.
