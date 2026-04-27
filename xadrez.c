#include <stdio.h>

void torre(int casa)
{
    if (casa > 0)
    {
        printf("torre direita\n");
        torre(casa - 1);


    }


}
void bispo(int casa)
{
   for (casa; casa>0 ;casa--){

        for( int i = 1; i>0; i--)
        {
       
        printf("bispo direita \n");
        }

        printf("bispo cima \n");
        
   }

    


}
void rainha(int casa)
{
    if (casa > 0)
    {
        printf("rainha esquerda \n");
       
        rainha(casa - 1);


    }


}
int main()
{

    
    



    //Move torre
   torre(5);
    //move bispo
   bispo(10);
   //mover rainha
    rainha(5);
    //mover cavalo
    for(int cavalo = 1 ; cavalo > 0; cavalo-- )
    {
        int i = 2;
        while(i > 0)
        {
            printf("cavalo moveu para cima\n");
            i--;


        }

        printf("cavalo moveu para direita\n");

    }
    return 0;
}