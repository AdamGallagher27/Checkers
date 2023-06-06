#include <stdio.h>
#include <stdlib.h>

// structure for a checker piece
// also is empty property for empty spaces
struct Piece
{
    char position[3];
    int isEmpty;
    char colour[6];
};

void printPiece(struct Piece piece)
{
    printf("position: %s \n", piece.position);
    printf("isEmpty: %d \n", piece.isEmpty);
    printf("colour: %s \n", piece.colour);
}


void populateBoard(struct Piece board[8][8])
{
    char letters[9] = "ABCDEFGH";
    char numbers[9] = "12345678";

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            strncpy(board[i][j].position, letters[j], 1);
            strncpy(board[i][j].position, "black", 1);
            board[i][j].isEmpty = 1;
        }
    }

};

int main()
{
    struct Piece board[8][8];
    populateBoard(board);

    // Print the populated board
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("Piece at position %s is %s\n", board[i][j].position, board[i][j].colour);
        }
    }

    return 0;
}
