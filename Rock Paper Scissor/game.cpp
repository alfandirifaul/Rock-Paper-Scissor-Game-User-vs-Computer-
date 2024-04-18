
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// function to describe the game
void openingMessage(){
    cout << " =============================================================" << endl;
    cout << "| Welcome to Rock, Paper, Scissor Game                        |" << endl;
    cout << "|=============================================================|" << endl;
    cout << "|                                                             |" << endl;
    cout << "| Instructions:                                               |" << endl;
    cout << "| When prompted, enter your move (rock, paper, or scissors).  |" << endl;
    cout << "| Rock beats scissors, scissors beats paper, paper beats rock.|" << endl;
    cout << "| You will be playing against the computer.                   |" << endl;
    cout << "|                                                             |" << endl;
    cout << "| Rules of the game:                                          |" << endl;
    cout << "| 1. Rock vs Paper -> Paper wins                              |" << endl;
    cout << "| 2. Paper vs Scissor -> Scissor wins                         |" << endl;
    cout << "| 3. Rock vs Scissor -> Rock wins                             |" << endl;
    cout << "|                                                             |" << endl;
    cout << "| Good luck!                                                  |" << endl;
    cout << " =============================================================" << endl;
}

// function to display the game art
void displayGameArt() {

    cout << " _    _      _" << endl;
    cout << "| |  | |    | |" << endl;
    cout << "| |  | | ___| | ___ ___  _ __ ___   ___" << endl;
    cout << "| |/\\| |/ _ \\ |/ __/ _ \\| '_ ` _ \\ / _ \\" << endl;
    cout << "\\  /\\  /  __/ | (_| (_) | | | | | |  __/" << endl;
    cout << " \\/  \\/ \\___|_|\\___\\___/|_| |_| |_|\\___|" << endl;

    cout << "    _______           _____              _______" << endl;
    cout << "---'   ____)      ---' ____)____     ---'   ____)____" << endl;
    cout << "      (_____)             ______)              ______)" << endl;
    cout << "      (_____)              _______)          __________)" << endl;
    cout << "      (____)             _______)            (____)" << endl;
    cout << "---.__(___)     ---.__________)     ---.__(___)" << endl;
    cout << "Rock             Paper               Scissors" << endl;

}

// display text when exit
void textDisplayWhenExit(){
    cout << "  _____                 _   ____             _ " << endl;
    cout << " / ____|               | | |  _ \\           | |" << endl;
    cout << "| |  __  ___   ___   __| | | |_) |_   _  ___| |" << endl;
    cout << "| | |_ |/ _ \\ / _ \\ / _` | |  _ <| | | |/ _ \\ |" << endl;
    cout << "| |__| | (_) | (_) | (_| | | |_) | |_| |  __/_|" << endl;
    cout << " \\_____|\\___/ \\___/ \\__,_| |____/ \\__, |\\___(_)" << endl;
    cout << "                                   __/ |        " << endl;
    cout << "                                  |___/         " << endl;
}

// display rock
void displayRock() {
    cout << "    _______" << endl;
    cout << "---'   ____) " << endl;
    cout << "      (_____) " << endl;
    cout << "      (_____) " << endl;
    cout << "      (____) " << endl;
    cout << "---.__(___) " << endl;
}

// display paper
void displayPaper() {
    cout << "     _____" << endl;
    cout << " ---' ____)____" << endl;
    cout << "           ______)" << endl;
    cout << "          _______)" << endl;
    cout << "         _______)" << endl;
    cout << "---.__________)" << endl;
}

// display scissor
void displayScissors() {
    cout << "    _______" << endl;
    cout << "---'   ____)________" << endl;
    cout << "              ______)" << endl;
    cout << "          __________)" << endl;
    cout << "           (____)" << endl;
    cout << "---.__(___)" << endl;
}

// display if the user is win
void userIsWin(){
        cout << " __     __          __          _ _       _ " << endl;
        cout << " \\ \\   / /          \\ \\        / (_)     | |" << endl;
        cout << "  \\ \\_/ /__  _   _   \\ \\  /\\  / / _ _ __ | |" << endl;
        cout << "   \\   / _ \\| | | |   \\ \\/  \\/ / | | '_ \\| |" << endl;
        cout << "    | | (_) | |_| |    \\  /\\  /  | | | | |_|" << endl;
        cout << "    |_|\\___/ \\__,_|     \\/  \\/   |_|_| |_(_)" << endl;
}

// display if the computer is win
void computerIsWin(){
        cout << "  _____                            _             __          ___       _ " << endl;
        cout << " / ____|                          | |            \\ \\        / (_)     | |" << endl;
        cout << "| |     ___  _ __ ___  _ __  _   _| |_ ___ _ __   \\ \\  /\\  / / _ _ __ | |" << endl;
        cout << "| |    / _ \\| '_ ` _ \\| '_ \\| | | | __/ _ \\ '__|   \\ \\/  \\/ / | | '_ \\| |" << endl;
        cout << "| |___| (_) | | | | | | |_) | |_| | ||  __/ |       \\  /\\  /  | | | | |_|" << endl;
        cout << " \\_____\\___/|_| |_| |_| .__/ \\__,_|\\__\\___|_|        \\/  \\/   |_|_| |_(_)" << endl;
        cout << "                      | |                                                " << endl;
        cout << "                      |_|                                                " << endl;
}

// display if the game is draw 
void gameIsDraw(){
        cout << " _____ _   _               _   _      _ " << endl;
        cout << "|_   _| | ( )             | | (_)    | |" << endl;
        cout << "  | | | |_|/ ___    __ _  | |_ _  ___| |" << endl;
        cout << "  | | | __| / __|  / _` | | __| |/ _ \\ |" << endl;
        cout << " _| |_| |_  \\__ \\ | (_| | | |_| |  __/_|" << endl;
        cout << "|_____|\\__| |___/  \\__,_|  \\__|_|\\___(_)" << endl;
        cout << "                                         " << endl;
        cout << "                                         " << endl;
}

// function to display the choice to ascii art
void choiceArt(string choice){
    if(choice == "Rock"){
        displayRock();
        cout << "\n";
    }else if(choice == "Paper"){
        displayPaper();
        cout << "\n";
    }else if(choice == "Scissor"){
        displayScissors();
        cout << "\n";
    }
}

// function to check the user choice is valid or not
string checkTheUserChoice(string choice){
    if(choice == "Rock" || choice == "Paper" || choice == "Scissor"){
        return choice;
    }else{
        cout << "Invalid choice! Input [Rock, Paper, Scissor]" << endl;
        cout << "Enter your choice (Rock, Paper, Scissor): ";
        cin >> choice;
        return checkTheUserChoice(choice);
    }
}

// function to get the user choice
string getUserChoice(){
    string choice;
    cout << "Enter your choice (Rock, Paper, Scissor):\n >> ";
    cin >> choice;
    string isUserChoiceValid = checkTheUserChoice(choice);
    return isUserChoiceValid;
}

// function to get the computer choice
string getComputerChoice(){
    string choice[] = {"Rock", "Paper", "Scissor"};
    int random = rand() % 3;
    cout << "Computer choice: \n >> " << choice[random] << endl;
    return choice[random];
}

// function to determine the winner
void determineTheWinner(string user, string computer){
    if(user == computer){
        gameIsDraw();
    }else if(user == "Rock" && computer == "Paper"){
        computerIsWin();
    }else if(user == "Paper" && computer == "Scissor"){
        computerIsWin();
    }else if(user == "Scissor" && computer == "Rock"){
        computerIsWin();
    }else{
        userIsWin();
    }
}

// function to check the play choice is valid or not
string checkThePlayChoiceIsValid(string choice){
    if(choice == "y" || choice == "n"){
        return choice;
    }else{
        cout << "Invalid choice!" << endl;
        // cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        return checkThePlayChoiceIsValid(choice);
    }
}

// function to ask the user if they want to play again
string userWantToPlayAgain(){
    string choice;
    cout << "Do you want to play again? (y/n): ";
    cin >> choice;
    choice = checkThePlayChoiceIsValid(choice);
    return choice;
}


// function to play the game
void playGame(){
    string user = getUserChoice();
    string computer = getComputerChoice();
    cout << "\nYou: "<< user << endl;
    choiceArt(user);
    cout << "vs\n" << endl;
    cout << "Computer: " << computer << endl;
    choiceArt(computer);
    determineTheWinner(user, computer);

    string playAgain = userWantToPlayAgain();
    if(playAgain == "y"){
        playGame();
    }else{
        cout << "Thanks" << endl;
    }
}

void exitTheGame();

// function to display the main menu
void mainMenu(){
    int choice;
    do{
        cout << "1. Play Game" << endl;
        cout << "2. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 1:
                playGame();
                break;
            case 2:
                exitTheGame();
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    }while(choice != 2);
}

// function to exit the game
void exitTheGame(){
    string choice;
    cout << "Do you want to exit? (y/n): ";
    cin >> choice;

    string exitGame = checkThePlayChoiceIsValid(choice);
    if(exitGame == "y"){
        cout << "Thanks for playing! Have a nice day!" << endl;
        textDisplayWhenExit();
        return;
    }else{
        mainMenu();
    }
}

// main function to call the other functions
int main(){
    displayGameArt(); // display the game art
    openingMessage(); // display the opening message
    
    srand(time(0)); // seed the random number generator
    mainMenu(); // display the main menu

    return 0;
}






