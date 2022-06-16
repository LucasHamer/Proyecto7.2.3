#include <stdio.h>
#include <stdlib.h>

void sumafilas(int [][4],int [],int ,int );
int main()
{
    int mat[5][4]={{0}};
    int x,i,vecsum[5];

    for(x=0;x<5;x++)
    {
        for(i=0;i<4;i++)
        {
            printf("Ingrese para la fila %d la columna %d: ",x+1,i+1);
            scanf("%d",&mat[x][i]);
        }
    }

    sumafilas(mat,vecsum,5,4);

    for(x=0;x<5;x++)
    {
        printf(" %d\n",vecsum[x]);
    }

    return 0;
}
void sumafilas(int mats[][4],int vs[],int cf,int cc)
{
    int x,i;

    for(x=0;x<cf;x++)
    {
        vs[x]=0;
        for(i=0;i<cc;i++)
        {
            vs[x]+=mats[x][i];
        }
    }
};
