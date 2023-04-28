#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, y = 2, z = 3, *px = &x, *py = &y, *pz = &z;
    printf("Values Before Swapping:-\n\n");
    printf("x = %d, y = %d, z = %d\npx = %d, py = %d, pz = %d\n*px = %d, *py = %d, *pz = %d\n",x,y,z,px,py,pz,*px,*py,*pz);
    printf("\nSwapping Pointers..........\n");
    pz = px;
    px = py;
    py = pz;
    //now py = pz and points to x and px points to y
    printf("Values After Swapping:-\n\n");
    printf("x = %d, y = %d, z = %d\npx = %d, py = %d, pz = %d\n*px = %d, *py = %d, *pz = %d\n\n",x,y,z,px,py,pz,*px,*py,*pz);
	
	//readline to prevent file from closing
	printf("\n\nEnter anything To Close\n");
    int tempvar; scanf("%d",&tempvar);
}