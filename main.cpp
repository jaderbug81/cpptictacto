#include <iostream>
#include "game,hpp"

int main()
{
  Game myGame;
  int turn = 0;
  bool gameOver = false;
  int rowIn;
  int colIn;

  std::cout << "Welcome to the game!" << std::endl;

  while(gameOver == false)
  {
    myGame.printBoard();
    if(turn == 0)
    {
      std::cout << "IT is Player One's Turn!" << std::endl;
    }
    else
    {
      std::cout << "It is Player Two's Turn!" << std::endl;
    }

    //do the turn
    std::cout << "Pick a Row: ";
    std::cin >> rowIn;
    std::cout << "Pick a Collumn: ";
    std::cin >> colIn;

    myGame.makeMove(turn, rowIn, colIn);

    turn++;
    turn%= 2;
  }
}
