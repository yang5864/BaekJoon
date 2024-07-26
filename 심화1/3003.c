#include <stdio.h>
int main()
{
    int king, queen, bishop, knight, rook, pawn;
    scanf("%d %d %d %d %d %d", &king, &queen, &bishop, &knight, &rook, &pawn);
    
    king = 1 - king;
    queen = 1 - queen;
    bishop = 2 - bishop;
    knight = 2 - knight;
    rook = 2 - rook;
    pawn = 8 - pawn;

    printf("%d %d %d %d %d %d\n", king, queen, bishop, knight, rook, pawn);

    return 0;
}
