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
    
    // Set const variables
    const int a = 4;
    const int b = 3;
    const int c = 2;

    // Set math of consts in varialbes
    int sum = a + b + c;
    int product = a * b * c;

    // Prints the math variables onto the terminal
    std::cout << sum << std::endl;
    std::cout << product;

    return 0;
}