#include <iostream>

int Level = 1;

void PrintIntroduction()
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
    std::cout << "SON. I HAVE NO TIME TO EXPLAIN. YOU MUST PASS THE FIVE TEST OR I MAY BE LOST FOREVER...\n";
    std::cout << "\n";
}

void WinGame()
{
    std::cout << "The screen turns blank white. As you sit and stare, you feel a sense of horror overwhelm you.\n";
    std::cout << "The screen gets brighter and brighter until it blinds you completely. You lose any idea of existance, as if you just died and every religion was wrong.\n";
    std::cout << "After a few seconds, you start to recover your senses, starting with your sense of smell.\n";
    std::cout << "A rotting, putrid stench overwhelms your nose and makes you want to vomit. Your proceed to do so, emptying any contents in your stomach.\n";
    std::cout << "Next comes your sense of touch. You feel what you can only imagine the inside of some organ must feel like.\n";
    std::cout << "You're lying down, and you can feel warmth and slime on the surface you lay on. It feels soft and firm.\n";
    std::cout << "As you regain your vision, you realize you are in a pitch black environment. Thankfully you would rather not see where you have ended up.\n";
    std::cout << "As your hearing comes back to you, a familiar voice calls out your name in suscession.\n";
    std::cout << "You realize it is your father, and you finally respond to his calls.\n";
    std::cout << "\"Oh thank God you are here! I didn't think you would make it through those test.\"\n";
    std::cout << "\"I'm sorry to have to drag you into this son. I know this doesn't make a lot of sense. I'm going to have a hard time explaining it all to you\"\n";
    std::cout << "\"Let's just say I'm not the kind of person you thought I was. I've gotten myself into something dark and I don't think we are getting out of it.\"\n";
    std::cout << "\"I know it is cowerdly, but when I realized what I had done, I knew I couldn't face it alone. So I asked them to bring you in with me.\"\n";
    std::cout << "\"They were happy to have another soul...\"\n";
    std::cout << "END\n";
}

void LoseGame()
{
    std::cout << "The computer screen shuts off suddenly.\n";
    std::cout << "Behind you, the sound of a heavy, monstorous breating fills the walls of the room.\n";
    std::cout << "Hot breath blows over your whole torso with each huff from the creature.\n";
    std::cout << "You hear what sounds like bones cracking when you feel a slime dripping over your forhead.\n";
    std::cout << "Right as you realize what is happening, it's jaws clamp down over your body down to your waste your with the force of a great white.\n";
    std::cout << "As the creature crushes through your body, its sharp teeth cutting through your belly like butter, you feel your blood gush our all over your legs.\n";
    std::cout << "Within a second, your torso is seperated from your legs, your inside the mouth of this creatre being chewed like nothing, dying a slow, painful death.\n";
    std::cout << "END\n";
}

bool PlayGame()
{
    
    // Set const variables
    const int Num1 = 4;
    const int Num2 = 3;
    const int Num3 = 2;

    // Set math of consts in varialbes
    int Sum = Num1 + Num2 + Num3;
    int Product = Num1 * Num2 * Num3;

    // Prints the math variables onto the terminal
    std::cout << "Test " << Level << std::endl;
    std::cout << "***********************************\n";
    std::cout << "There are three numbers in the code\n";
    std::cout << "The numbers add up to " << Sum << std::endl;
    std::cout << "The numbers multiplied together equal " << Product << std::endl;
    std::cout << "***********************************\n";

    // Store Guessed numbers variables
    int Guess1, Guess2, Guess3;

    // Instruct User to enter guessed numbers and store inputs to Guess variables.
    std::cout << "PLEASE ENTER THE NUMBERS YOU THINK IS THE CODE GIVEN THE HINTS ABOVE\n";
    std::cin >> Guess1 >> Guess2 >> Guess3;
    std::cout << "YOU GUESSED: " << Guess1 << Guess2 << Guess3 << std::endl;

    // Store the sum and product of the guessed variables
    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProduct = Guess1 * Guess2 * Guess3;

    // Check if players guess is correct. Prints statement if based on result.
    if (GuessSum == Sum && GuessProduct == Product)
    {
        std::cout << "CODE IS CORRECT.\n";
        return true;
    }
    else
    {
        std::cout << "WRONG CODE.\n";
        return false;
    }
}

int main()
{
    PrintIntroduction();

    int MaxLevel = 5;

    while (Level <= MaxLevel) // Loops games until ten levels are completed.
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++Level;
        }
        else
        {
            break;
        }
        
    }

    if (Level > MaxLevel)
    {
        WinGame();

    }
    else
    {
        LoseGame();
    }

    return 0;
}