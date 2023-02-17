#include stdio.h
#include stdlib.h

int main()
{
    int p = (int )calloc(5,sizeof(int));
    for(int i = p; i  p + 5; i++){
        printf(Enter %d value ,i - p + 1);
        scanf(%d,i);
    }
    printf(Reallocating To 9 ...................... n);
    p = (int )realloc(p,9  sizeof(int));
    for(int i = p + 5; i  p + 9; i++){
        printf(Enter %d value ,i - p + 1);
        scanf(%d,i);
    }
    for(int i = p; i  p + 9; i++)
    printf(%d ,i);
}