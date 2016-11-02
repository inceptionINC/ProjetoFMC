#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <graphics.h>

typedef struct{
int posicao [4][4];

}card;




void graficos();
void mouseclick();
int compara(int contador1, int contador2);
void percorre(int matriz[3][4]);
void voltacarta1(int cont1);
void voltacarta2(int cont2);
main()
{


    initwindow(1080,500,"Supervisorio do Gasoduto",0,0);
    readimagefile("menu2.jpg",0,0,1080,500);
    do
    {

        //readimagefile("iniciar.jpg",158,260,10,200);

        while(!kbhit())
        {


            //getchar();

            if(mousex()>=0 && mousex()<=1080 &&
                    mousey()>=0 && mousey()<= 700 && ismouseclick(WM_LBUTTONDOWN))
            {
                graficos();
                clearmouseclick(WM_LBUTTONDOWN);
            }


        }


    }
    while(getch()== '72');


}

void graficos()
{
    card card1;
    card card2;
    card card3;
    card card4;
    card card5;
    card card6;
    card card7;
    card card8;
    card card9;
    card card10;
    card card11;
    card card12;
    int matrizCartas[3][4];
    int carta1=0;
    int carta2=0;
    int cont1=0;
    int cont2=0;
    int resultado=0;
    int click=0;
    int aux=0;
    int i,j;
    int termina=0;
    FILE* txtR;

    txtR = fopen("matriz.txt","rt");

  if( txtR )
  {

    for(i = 0; i < 3; i++)
    {
      for(j = 0; j < 4; j++)
      {
        if( !fscanf(txtR,"%d",&matrizCartas[i][j]) )
        {

          printf("Erro a o ler a entrada (%d,%d) da matriz\n",i,j);
          break;
        }
      }
    }
    }
    initwindow(900,500,"Relatorio de uso do supervisório",0,0);
    readimagefile("img-1.jpg",15,15,120,150);
    //matrizCartas[0][0]= 1;
    readimagefile("img-2.jpg",155,15,255,150);
    //matrizCartas[0][1]= 2;
    readimagefile("img-3.jpg",285,15,385,150);
    //matrizCartas[0][2] = 2;
    readimagefile("img-4.jpg",415,15,515,150);
    //matrizCartas[0][3]=3;
    readimagefile("img-5.jpg",15,175,120,320);
    //matrizCartas[1][0]=4;
    readimagefile("img-6.jpg",155,175,255,320);
    //matrizCartas[1][1] = 1;
    readimagefile("img-7.jpg",285,175,385,320);
   // matrizCartas[1][2] = 5;
    readimagefile("img-8.jpg",415,175,515,320);
   // matrizCartas[1][3] = 4;
    readimagefile("img-9.jpg",15,340,120,490);
   // matrizCartas[2][0] = 3;
    readimagefile("img-10.jpg",155,340,255,490);
    //matrizCartas[2][1] = 5;
    readimagefile("img-11.jpg",285,340,385,490);
    //matrizCartas[2][2]= 6;
    readimagefile("img-12.jpg",415,340,515,490);
    //matrizCartas[2][3]=6;
    //percorre(matrizCartas);
    do{
        int cont1=0;
        int cont2=0;

    printf("\nEscolha o numero da primeira carta desejada: ");
    scanf("%d",&carta1);
     //printf("matrizcartas na posicao[2][4] = %d",matrizCartas[2][4]);
    switch(carta1)
    {
        case 1:
        readimagefile("card1.jpg",15,15,120,150);
        cont1= matrizCartas[0][0];
        break;

        case 2:
        readimagefile("card2.jpg",155,15,255,150);
        cont1 = matrizCartas[0][1];
        break;
        case 3:
        readimagefile("card2.jpg",285,15,385,150);
        cont1 = matrizCartas[0][2];
        break;

        case 4:
        readimagefile("card3.jpg",415,15,515,150);
        cont1= matrizCartas[0][3];
        break;

        case 5:
        readimagefile("card4.jpg",15,175,120,320);
        cont1= matrizCartas[1][0];
        break;

        case 6:
        readimagefile("card1.jpg",155,175,255,320);
        cont1 =  matrizCartas[1][1];
        break;

        case 7:
        readimagefile("card5.jpg",285,175,385,320);
        cont1 = matrizCartas[1][2];
        break;

        case 8:
        readimagefile("card4.jpg",415,175,515,320);
        cont1 = matrizCartas[1][3];
        break;

        case 9:
        readimagefile("card3.jpg",15,340,120,490);
        cont1 = matrizCartas[2][0];
        break;

        case 10:
        readimagefile("card5.jpg",155,340,255,490);
        cont1= matrizCartas[2][1];

        break;

        case 11:
        readimagefile("card6.jpg",285,340,385,490);
        cont1 = matrizCartas[2][2];

        break;

        case 12:
        readimagefile("card6.jpg",415,340,515,490);
        cont1 = matrizCartas[2][3];
        break;

        default:
        break;
    }

     printf("\nEscolha o numero da segunda carta desejada: ");
    scanf("%d",&carta2);
    if(carta1!=carta2){
    switch(carta2)
    {
       case 1:
        readimagefile("card1.jpg",15,15,120,150);
        cont2= matrizCartas[0][0];
        break;

        case 2:
        readimagefile("card2.jpg",155,15,255,150);
        cont2 = matrizCartas[0][1];
        break;
        case 3:
        readimagefile("card2.jpg",285,15,385,150);
        cont2 = matrizCartas[0][2];
        break;

        case 4:
        readimagefile("card3.jpg",415,15,515,150);
        cont2 = matrizCartas[0][3];
        break;

        case 5:
        readimagefile("card4.jpg",15,175,120,320);
        cont2 = matrizCartas[1][0];
        break;

        case 6:
        readimagefile("card1.jpg",155,175,255,320);
        cont2 =  matrizCartas[1][1];
        break;

        case 7:
        readimagefile("card5.jpg",285,175,385,320);
        cont2 = matrizCartas[1][2];
        break;

        case 8:
        readimagefile("card4.jpg",415,175,515,320);
        cont2 = matrizCartas[1][3];
        break;

        case 9:
        readimagefile("card3.jpg",15,340,120,490);
        cont2 = matrizCartas[2][0];
        break;

        case 10:
        readimagefile("card5.jpg",155,340,255,490);
        cont2 = matrizCartas[2][1];

        break;

        case 11:
        readimagefile("card6.jpg",285,340,385,490);
        cont2 = matrizCartas[2][2];

        break;

        case 12:
        readimagefile("card6.jpg",415,340,515,490);
        cont2 = matrizCartas[2][3];
        break;

        default:
        break;
    }
    }else{
    printf("\nVoce escolheu a mesma carta!");
    }
     //printf("cont1  = %d cont2 = %d",cont1,cont2);
    resultado=compara(cont1,cont2);

    if(resultado==1)
    {
        printf("\nVoce Acertou!");
        //printf("\nresultado = %d", resultado);
        termina++;
        //printf("\nCont1= %d cont2= %d",cont1,cont2);
    }
    if(resultado==0)
    {
       printf("Voce Errou!");
       Sleep(350);
       voltacarta1(cont1);
       voltacarta2(cont2);
       //printf("cont1  = %d cont2 = %d",cont1,cont2);
    }
    if(termina>=6)
    {   printf("resultado = %d", resultado);
        printf("\n============================================================================");
        printf("\n P A R A B E N S     V O C E    G A N H O U  !!!!!!");
        printf("\n============================================================================");
    }

}while(termina<=5);


}


int compara(int cont1, int cont2)
{
    int contaVitoria=0;
     //printf("\ncont1  = %d cont2 = %d",cont1,cont2);
   if(cont1 == cont2)
{
    Sleep(350);
    switch(cont1)
        {
            case 1:
            readimagefile("img2.jpg",15,15,120,150);
            //matriz[0][0]=0;
            //matriz[1][1]=0;
            readimagefile("img2.jpg",155,175,255,320);
            contaVitoria++;
            break;

            case 2:
            readimagefile("img2.jpg",155,15,255,150);
            readimagefile("img2.jpg",285,15,385,150);
            //matriz[0][1]=0;
            //matriz[0][2]=0;
            contaVitoria++;
            break;

            case 3:
            readimagefile("img2.jpg",415,15,515,150);
            readimagefile("img2.jpg",15,340,120,490);
            //matriz[0][3]=0;
            //matriz[2][0]=0;
            contaVitoria++;
            break;

            case 4:
            readimagefile("img2.jpg",15,175,120,320);
            readimagefile("img2.jpg",415,175,515,320);
            //matriz[1][0]=0;
            //matriz[1][3]=0;
            contaVitoria++;
            break;

            case 5:
            readimagefile("img2.jpg",285,175,385,320);
            readimagefile("img2.jpg",155,340,255,490);
            //matriz[1][2]=0;
            //matriz[2][1]=0;
            contaVitoria++;
            break;

            case 6:
            readimagefile("img2.jpg",285,340,385,490);
            readimagefile("img2.jpg",415,340,515,490);
            contaVitoria++;
            break;
        }

    }
    else{
    return 0;
    }
    if(contaVitoria>=6 || contaVitoria == 5)
    {
        return contaVitoria;
    }
    else{
      return 1;
    }




}
void percorre(int matriz[3][4])
{
    int i = 0;
    int j = 0 ;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("\nmatriz[%d][%d] = Valor %d",i,j,matriz[i][j]);
        }
    }
}
void voltacarta1(int cont1)
{
    switch(cont1)
    {
                 case 1:
        readimagefile("img-1.jpg",15,15,120,150);
        break;

        case 2:
        readimagefile("img-2.jpg",155,15,255,150);

        break;
        case 3:
        readimagefile("img-3.jpg",285,15,385,150);

        break;

        case 4:
        readimagefile("img-4.jpg",415,15,515,150);

        break;

        case 5:
        readimagefile("img-5.jpg",15,175,120,320);

        break;

        case 6:
        readimagefile("img-6.jpg",155,175,255,320);

        break;

        case 7:
        readimagefile("img-7.jpg",285,175,385,320);

        break;

        case 8:
        readimagefile("img-8.jpg",415,175,515,320);

        break;

        case 9:
        readimagefile("img-9.jpg",15,340,120,490);

        break;

        case 10:
        readimagefile("img-10.jpg",155,340,255,490);


        break;

        case 11:
        readimagefile("img-11.jpg",285,340,385,490);

        break;

        case 12:
        readimagefile("img-12.jpg",415,340,515,490);

        break;

        default:
        break;

        }


}



void voltacarta2(int cont2)
{
    switch(cont2)
    {
             case 1:
        readimagefile("img-1.jpg",15,15,120,150);
        break;

        case 2:
        readimagefile("img-2.jpg",155,15,255,150);

        break;
        case 3:
        readimagefile("img-3.jpg",285,15,385,150);

        break;

        case 4:
        readimagefile("img-4.jpg",415,15,515,150);

        break;

        case 5:
        readimagefile("img-5.jpg",15,175,120,320);

        break;

        case 6:
        readimagefile("img-6.jpg",155,175,255,320);

        break;

        case 7:
        readimagefile("img-7.jpg",285,175,385,320);

        break;

        case 8:
        readimagefile("img-8.jpg",415,175,515,320);

        break;

        case 9:
        readimagefile("img-9.jpg",15,340,120,490);

        break;

        case 10:
        readimagefile("img-10.jpg",155,340,255,490);


        break;

        case 11:
        readimagefile("img-11.jpg",285,340,385,490);

        break;

        case 12:
        readimagefile("img-12.jpg",415,340,515,490);

        break;

        default:
        break;

        }

}
