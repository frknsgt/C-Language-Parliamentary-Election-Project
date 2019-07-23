#include <stdio.h>
#include <stdlib.h>

int main()
{   int il,kontenjan,a,parti_sayisi,i,indis,k,c=0,tut=0,top_kontenjan=0,il_birincilik[10]={},sayac[10]={},buyuk=0;
float oy_yuzdesi,il_oylari[10],buyuk_oy=0,parti_oylari[10],top_parti_oy=0,parti_oy[10]={},mv_say2[10]={};
    char parti_adi2[10]={'A','B','C','D','E','F','G','H','J','K'};
    printf("Secime katilan parti sayisini Giriniz(1-8):");
    scanf("%d",&parti_sayisi);
    while(1){
    int mv_say[10]={},top_oy=0;
    char parti_adi[10]={'A','B','C','D','E','F','G','H','J','K'};
    printf("\n\nIlin Plaka Kodunu Giriniz:");
    scanf("%d",&il);
    //****************************TÜRKÝYE GENELÝ BÝLGÝLERÝ YAZDIRMA SAYFASI************************
            if (il<=0)
        {   printf("\nTurkiye Geneli");
            printf("\nMillet Vekili Kontenjani:%d",top_kontenjan);
            printf("\nGecerli Oy Sayisi:%.0f",top_parti_oy);
            printf("\n\t OY SAY  OY YUZDESI   MV SAY   MV YUZDESI  IL 1.cilik SAY  0MV IL SAY");
            printf("\n\t ------  ----------   ------   ----------  --------------  ----------");
            for(a=0;a<parti_sayisi;a++)
            printf("\n%c Partisi: %.0f\t%%%.2f\t\t%.0f\t%%%.2f\t\t%d\t\t%d",parti_adi2[a],parti_oy[a],parti_oy[a]*100/top_parti_oy,mv_say2[a],mv_say2[a]*100/top_kontenjan,il_birincilik[a],sayac[a]);
            for (a=0;a<parti_sayisi;a++)
            {if (buyuk<mv_say2[a])
                {buyuk=mv_say2[a];  k=a;}}
                printf("\n\n\nIktidar Partisi:%c Partisi",parti_adi2[k]);
                mv_say2[k]=0;
                k=0;    buyuk=0;
                for (a=0;a<parti_sayisi;a++)
            {if (buyuk<=mv_say2[a])
                {buyuk=mv_say2[a];  k=a;}}
                printf("\nAna Muhalefet Partisi:%c Partisi\n\n",parti_adi2[k]);
            break;}
    printf("Milletvekili kontenjanini Giriniz:");
    scanf("%d",&kontenjan);
    top_kontenjan+=kontenjan;
    //********************PARTÝLERÝN OY SAYILARINI ÝSTEME SATIRI********************
    for(a=0;a<parti_sayisi;a++)
    {
        printf("\n%c Partisinin Oy sayisini Giriniz:",parti_adi2[a]);
        scanf("%f",&il_oylari[a]);
        parti_oylari[a]=il_oylari[a];
        top_oy=top_oy+il_oylari[a];
        top_parti_oy=top_parti_oy+il_oylari[a];
        parti_oy[a]=parti_oy[a]+il_oylari[a];
    }//********************TÜRKÝYE GENELÝ ÝÇÝN BAZI ÝÞLEMLER********************
      int yuksek=0,c=0;
             for(i=0;i<parti_sayisi;i++)
            {if (yuksek<parti_oy[i])
                {yuksek=parti_oy[i];
                c=i;}}
            il_birincilik[c]++;
    for (i=0;i<kontenjan;i++){
        buyuk_oy=0; indis=0;
    for (a=0;a<parti_sayisi;a++)
    {if(buyuk_oy<parti_oylari[a])
        {buyuk_oy=parti_oylari[a]; indis=a;}
        }
     parti_oylari[indis]=parti_oylari[indis]/2;
     mv_say[indis]++;
     mv_say2[indis]++;
     }//********************MÝLLETVEKÝLÝ SAYISINI BELÝRLEME********************
     for (i=0;i<parti_sayisi-1;i++)
     {for (a=0;a<parti_sayisi-1-i;a++)
         {if(mv_say[a]<mv_say[a+1])
            {tut=mv_say[a];
             mv_say[a]=mv_say[a+1];
             mv_say[a+1]=tut;}}}
     for (a=0;a<parti_sayisi;a++)
     {if(mv_say[a]==0)
        sayac[a]++;}
        //********************EKRANA YAZDIRMA SATIRI********************
    printf("\n\nIl Plaka Kodu:%d",il);
    printf("\nMilletvekili Kontenjani:%d",kontenjan);
    printf("\nGecerli Oy Sayisi:%d\n\n",top_oy);
    printf("\n\t   OY SAY   OY YUZDESI    MV SAY");
    printf("\n\t   ------   ----------    ------");
    sirala(il_oylari,parti_adi,parti_sayisi,top_oy,mv_say);
    for(i=0;i<parti_sayisi;i++)
    {printf("\n%c Partisi   %.0f      %%%.2f          %d",parti_adi[i],il_oylari[i],il_oylari[i]*100/top_oy,mv_say[i]);}
    }
    return 0;
}//********************PARTÝLERÝN OYLARINI SIRALAYAN FONKSÝYON********************
int sirala(float il_oylari[],char parti_adi[],int parti_sayisi,int top_oy,int mv_say[])
{   int i,a=0,yuksek_oy[8],tut;
char tut2[1]={};
    for (i=0;i<parti_sayisi-1;i++)
    {   for (a=0;a<parti_sayisi-i-1;a++)
        {       if(il_oylari[a]<il_oylari[a+1])
                {tut=il_oylari[a];
                il_oylari[a]=il_oylari[a+1];
                il_oylari[a+1]=tut;
                tut2[1]=parti_adi[a];
                parti_adi[a]=parti_adi[a+1];
                parti_adi[a+1]=tut2[1];}
                }}}
