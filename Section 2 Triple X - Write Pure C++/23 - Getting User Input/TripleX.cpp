#include <iostream>

int main()
{
    // Prints to the terminal to describe to the player the setting before playing the game.
    std::cout << "You wake up in your bedroom suddenly in a cold sweat.\n";
    std::cout << "Looking over to your right, you can see your alarm clock reads 3:00 AM.\n";
    std::cout << "You have an uneasy feeling in the pit of your stomach.\n";
    std::cout << "As you sit up, you hear a loud bang come from your fathers room.\n";
    std::cout << "You remember that he was up late working as you went to bed.\n";
    std::cout << "You decide to get up and check in on him.\n";
    std::cout << "As you enter the room, you notice it is pitch black except for the blaring glow of his computer monitor.\n";
    std::cout << "Weirdly, wherever area of the room the light from the monitor does not penetrate, you cannot make anything out. This makes you feel uneasy inside.\n";
    std::cout << "As you stare into the room, you notice a message on the screen appear.\n";
    std::cout << "SON. I HAVE NO TIME TO EXPLAIN. YOU MUST ENTER IN THE RIGHT CODES OR I MAY BE LOST FOREVER...\n";
    std::cout << "\n";
    
    // Set const variables
    const int Num1 = 4;
    const int Num2 = 3;
    const int Num3 = 2;

    // Set math of consts in varialbes
    int Sum = Num1 + Num2 + Num3;
    int Product = Num1 * Num2 * Num3;

    // Prints the math variables onto the terminal
    std::cout << "***********************************\n";
    std::cout << "There are three numbers in the code\n";
    std::cout << "The numbers add up to " << Sum << std::endl;
    std::cout << "The numbers multiplied together equal " << Product << std::endl;
    std::cout << "***********************************\n";

    int Guess1, Guess2, Guess3;

    std::cout << "PLEASE ENTER THE NUMBERS YOU THINK IS THE CODE GIVEN THE HINTS ABOVE\n";
    std::cin >> Guess1;
    std::cin >> Guess2;
    std::cin >> Guess3;
    std::cout << "YOU GUESSED: " << Guess1 << Guess2 << Guess3;

    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProduct = Guess1 * Guess2 * Guess3;
    
    return 0;
}