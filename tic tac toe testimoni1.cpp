#include <iostream> 
#include <iomanip>

using namespace std;
bool gameWon (char ch, char board[] [3]);
bool drawGame(char board[][3]);
void gameBoard(char board[] [3]);
  
bool gameWon(char ch, char board[] [3])
//determines if a game wins or not
{ 
  for (int x = 0; x < 3; x++) 
    if (ch == board[x] [0] && ch == board[x] [1] && ch == board[x] [2]) return true;
  //Tells the program that all X's or all O's in a row wins
   
  for (int y = 0; y < 3; y++) 
    if (ch == board[0] [y] && ch == board[1] [y] && ch == board[2] [y]) return true;
  //Tells the program that all X's or all O's in a column wins
  
  if (ch == board[0] [0] && ch == board[1] [1] && ch == board[2] [2]) return true; 
  //Tells the program that all X's or all O's in a left-to-right diagonal wins
  
  if (ch == board[0] [2] && ch == board[1] [1] && ch == board[2] [0]) return true; 
  //Tells the program that all X's or all O's in a right-to-left diagonal wins
  
  return false;
  //Tells the program that anything else is not a winning method
} 
  
bool drawGame(char board[][3]) 
{ 
  for (int x = 0; x < 3; x++) 
    for (int y = 0; y < 3; y++) 
      if (board[x] [y] == ' ') return false; 
  
  return true; 
} 
  
void gameBoard(char board[] [3])
//Draws the board game for the user to see
{ 
  for (int x = 0; x < 3; x++) 
  { 
    cout << "| "; 
    for (int y = 0; y < 3; y++) 
      cout << board[x] [y] << " | ";//Ticks to draw columns
	cout << "\n-------------" << endl;//Lines to draw rows
  } 
} 
  
int main()
{
  int row;
  int column;
  char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; //Displays the empty initial game board
  gameBoard(board); 
  
  while (true) 
  {
	int firstTurn;
	cout << "TIC TAC TOE \n";
	cout << "Enter who will take the first turn. Choose 0 for user, 1 for computer. \n";
	cin >> firstTurn;
    while (firstTurn == 0)
	{
		cout << "User will take first turn." << endl;
		cout << "Enter a row (0, 1, 2) for X player: "; 
	    cin >> row;
		//First player enters which row to place the X
  
		cout << "Enter a column (0, 1, 2) for X player: "; 
		cin >> column;
	    return gameBoard(board); 
		//First player enters which column to place the X
	}
	while (firstTurn == 1)
	{
		cout << "Computer will take first turn." << endl;
		row = (rand()%2);
		column = (rand()%2);
	}
		
    board[row] [column] = 'x';
	//Puts an X where the player entered it to go
    gameBoard(board);
	//Displays the game board with the current placement of all X's and O's
    if (gameWon('x', board)) 
    { 
      cout << "X player won" << endl; 
      exit(0);
	  //Stops game if X wins
    } 
    else if (drawGame(board)) 
    { 
      cout << "No winner" << endl; 
      exit(0); 
	  //Stops game if all spaces are occupied and there is no winner
    } 
  
    cout << "Enter a row (0, 1, 2) for O player: "; 
    cin >> row;
	//Second player enters which row to place the O
  
    cout << "Enter a column (0, 1, 2) for O player: "; 
    cin >> column;
	//Second player enters which column to place the O
  
    board[row] [column] = 'O';
	//Puts an O where the player entered it to go
    gameBoard(board); 
  
    if (gameWon('O', board)) 
    { 
      cout << "O player won" << endl; 
      exit(0); 
	  //Stops if O wins
    } 
    else if (drawGame(board)) 
    { 
      cout << "No winner" << endl; 
      exit(0); 
    } 
  } 
  
  return 0; 
} 


