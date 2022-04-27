//tic-tac-toe

#include <iostream>
#include <string>

using namespace std;

//message to players
string playerColumn = "Put the number of column: ";
string playerInput = "Put your input(x for player 1 and o for player 2: ";

//playerOne
void playerOne(char array[], char PlayerOneInput, int column){
    cout << endl << playerColumn; cin >> column;
    cout << endl << playerInput; cin >> PlayerOneInput;
    if(column == 1 || column == 2 || column == 3 || column == 4 || column == 5 || column == 6 || column == 7 || column == 8 || column == 9){
        array[column-1]=PlayerOneInput;
    }
    else {
        cout << "invalid input"; cin >> column;
    }
}

//playerTwo
void playerTwo(char array[], char PlayerTwoInput, int column){
    cout << endl << playerColumn; cin >> column;
    cout << endl << playerInput; cin >> PlayerTwoInput;
    if(column == 1 || column == 2 || column == 3 || column == 4 || column == 5 || column == 6 || column == 7 || column == 8 || column == 9){
        array[column-1]=PlayerTwoInput;
    }
    else {
        cout << "invalid input"; cin >> column;
    }
}


// displays the game board
void gameboard(char array[], int size){
    for(int x=0;x<size;x++){
        if(x==3 || x== 6 || x == 9){
            cout << endl;
        }
        cout << array[x] << " ";
    }
    cout << endl;
}

bool playerOne(char array[]){
    if(array[0]=='x'&&array[1]=='x'&&array[2]=='x'){
        return true;
    }
    else if(array[3]=='x' && array[4]=='o'&& array[5]=='x'){
        return true;
    }
    else if(array[6]=='x' && array[7]=='o' && array[8]=='x'){
        return true;
    }
    else if(array[0]=='x' && array[3]=='o' && array[6]=='x'){
        return true;
    }
    else if(array[1]=='x' && array[4]=='o' && array[7]=='x'){
        return true;
    }
    else if(array[2]=='x' && array[5]=='o' && array[8]=='x'){
        return true;
    }
    else if(array[0]=='x' && array[4]=='o' && array[8]=='x'){
        return true;
    }
    else if(array[2]=='x' && array[4]=='o' && array[6]=='x'){
        return true;
    }
    else{
        return false;
    }
}

bool playerTwo(char array[]){
    if(array[0]=='o'&&array[1]=='o'&&array[2]=='o'){
        return true;
    }
    else if(array[3]=='o' && array[4]=='o'&& array[5]=='o'){
        return true;
    }
    else if(array[6]=='o' && array[7]=='o' && array[8]=='o'){
        return true;
    }
    else if(array[0]=='o' && array[3]=='o' && array[6]=='o'){
        return true;
    }
    else if(array[1]=='o' && array[4]=='o' && array[7]=='o'){
        return true;
    }
    else if(array[2]=='o' && array[5]=='o' && array[8]=='o'){
        return true;
    }
    else if(array[0]=='o' && array[4]=='o' && array[8]=='o'){
        return true;
    }
    else if(array[2]=='o' && array[4]=='o' && array[6]=='o'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    const int sizeofarray = 9;
    char TTT_array[sizeofarray]={'1','2','3','4','5','6','7','8','9'};
    char x, o;
    int columnNumber;

    while(playerOne(TTT_array)!=true || playerTwo(TTT_array)!=true){
        
        //display the gameboard
        gameboard(TTT_array, sizeofarray);
        
        //playerOneturn
        playerOne(TTT_array,x,columnNumber);
        playerOne(TTT_array);
        
        //display the gameboard
        gameboard(TTT_array, sizeofarray);
        
        //playerTwoTurn
        playerTwo(TTT_array,o,columnNumber);
        playerTwo(TTT_array);

        if(playerOne(TTT_array)==true){
            cout << endl << "Player One wins" << endl;
            break;
        }
        else if(playerTwo(TTT_array)==true){
            cout << endl << "Player Two wins" << endl;
            break;
        }
        else {
            cout << endl << "Draw" << endl;
            break;
        }
    }    


    return 0;
}