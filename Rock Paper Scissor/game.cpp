
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
    cout << "Enter your choice (Rock, Paper, Scissor): ";
    cin >> choice;
    string isUserChoiceValid = checkTheUserChoice(choice);
    return isUserChoiceValid;
}

// function to get the computer choice
string getComputerChoice(){
    string choice[] = {"Rock", "Paper", "Scissor"};
    int random = rand() % 3;
    return choice[random];
}

// function to determine the winner
string determineTheWinner(string user, string computer){
    if(user == computer){
        return "It's a tie!";
    }else if(user == "Rock" && computer == "Paper"){
        return "Computer wins!";
    }else if(user == "Paper" && computer == "Scissor"){
        return "Computer wins!";
    }else if(user == "Scissor" && computer == "Rock"){
        return "Computer wins!";
    }else{
        return "You win!";
    }

}

// function to check the play choice is valid or not
string checkThePlayChoiceIsValid(string choice){
    if(choice == "y" || choice == "n"){
        return choice;
    }else{
        cout << "Invalid choice!" << endl;
        cout << "Do you want to play again? (yes/no): ";
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
    cout << "Computer choice: " << computer << endl;
    cout << determineTheWinner(user, computer) << endl;

    string playAgain = userWantToPlayAgain();
    if(playAgain == "yes" || playAgain == "y"){
        playGame();
    }else{
        cout << "Thanks" << endl;
    }
}

// function to display the main menu
void mainMenu(){
    int choice;
    do{
        cout << "0. Quit" << endl;
        cout << "1. Play Game" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice){
            case 0:
                cout << "Thanks for playing! Have a nice day!" << endl;
                break;
            case 1:
                playGame();
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(choice != 0);
}

// main function to call the other functions
int main(){
    displayGameArt(); // display the game art
    openingMessage(); // display the opening message
    
    srand(time(0)); // seed the random number generator
    mainMenu(); // display the main menu

    return 0;
}