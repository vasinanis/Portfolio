
import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        Dictionary dictionary = new Dictionary();
        int totalGames = 0;
        int totalWins = 0;
        int totalLosses = 0;

        while (true) {
            System.out.println("MAIN MENU");
            System.out.println("1. Start a new Game (N)");
            System.out.println("2. Statistics (S)");
            System.out.println("3. Exit (E)");
            System.out.print("Please enter your choice: ");
            char choice = scanner.next().charAt(0);

            if (choice == 'N' || choice == 'n') {
                totalGames++;
                String secretWord = dictionary.getWord(random.nextInt(10));
                playGame(scanner, secretWord);
            } else if (choice == 'S' || choice == 's') {
                System.out.println("You have played " + totalGames + " games so far. You won " + totalWins + " times and lost " + totalLosses + " times.");
            } else if (choice == 'E' || choice == 'e') {
                System.out.println("Thanks for playing Hangman!");
                break;
            } else {
                System.out.println("Invalid choice. Please enter a valid option.");
            }
        }
    }

    private static void playGame(Scanner scanner, String secretWord) {
        int maxAttempts = 8;
        int remainingAttempts = maxAttempts;
        int correctGuesses = 0;
        int wrongGuesses = 0;
        StringBuilder guessedWord = new StringBuilder("-".repeat(secretWord.length()));

        System.out.println("The random word is now: " + guessedWord);
        System.out.println("You have " + remainingAttempts + " guesses left.");

        while (remainingAttempts > 0) {
            System.out.print("Your guess: ");
            char guess = scanner.next().toUpperCase().charAt(0);

            if (!Character.isLetter(guess)) {
                System.out.println("Invalid input. Please enter a letter.");
                continue;
            }

            if (secretWord.contains(String.valueOf(guess))) {
                System.out.println("The guess is CORRECT!");
                for (int i = 0; i < secretWord.length(); i++) {
                    if (secretWord.charAt(i) == guess) {
                        guessedWord.setCharAt(i, guess);
                        correctGuesses++;
                    }
                }
            } else {
                System.out.println("There are no " + guess + "'s in the word.");
                wrongGuesses++;
                remainingAttempts--;
            }

            System.out.println("The random word is now: " + guessedWord);
            System.out.println("You have " + remainingAttempts + " guesses left.");

            if (guessedWord.toString().equals(secretWord)) {
                System.out.println("Congratulations! You guessed the word: " + secretWord);
                System.out.println("You made " + correctGuesses + " correct guesses and " + wrongGuesses + " wrong guesses.");
                if (remainingAttempts == maxAttempts) {
                    System.out.println("Perfect! You guessed the word with all " + maxAttempts + " attempts remaining.");
                }
                break;
            }
        }

        if (remainingAttempts == 0) {
            System.out.println("You've run out of attempts. The word was: " + secretWord);
            System.out.println("You made " + correctGuesses + " correct guesses and " + wrongGuesses + " wrong guesses.");
            totalLosses++;
        } else {
            totalWins++;
        }
    }
}

class Dictionary {
    public String getWord(int index) {
        switch (index) {
            case 0: return "UNIVERSITY";
            case 1: return "COMPUTER";
            case 2: return "LAPTOP";
            case 3: return "HEADPHONES";
            case 4: return "FUZZY";
            case 5: return "DOG";
            case 6: return "KEYHOLE";
            case 7: return "TELEPHONE";
            case 8: return "PRINTER";
            case 9: return "BUILDING";
            default: return "Illegal index";
        }
    }
}
