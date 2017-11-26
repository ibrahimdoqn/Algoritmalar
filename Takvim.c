//
//  main.c
//  Takvim
//
//  Created by Wantto on 25.11.2017.
//  Copyright © 2017 Wantto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int yil,ay,gun,sayac,mon,q;char mons[7][10];sayac=0;mon=1;ay=1;
    yil=2016;
    system("clear");goto basla;
mons:
    {
        switch(mon)
        {
            case 1: printf(" Cuma",mons[4]);break;
            case 2: printf(" Cumartesi",mons[5]);break;
            case 3: printf(" Pazar",mons[6]);break;
            case 4: printf(" Pazartesi",mons[0]);break;
            case 5: printf(" Salı",mons[1]);break;
            case 6: printf(" Çarşamba",mons[2]);break;
            case 7: printf(" Perşembe",mons[3]);break;
        }
        if(mon==7)mon=0;
        if(q==0)goto q;
        if(q==1)goto q1;
        if(q==2)goto q2;
        if(q==3)goto q3;
        if(q==4)goto q4;
    }
basla:
    for(ay=1;ay<=12;ay++){
        if(ay==2){
            if(sayac%4==0)for(gun=1;gun<=29;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
                q=0;goto mons;
            q:
            mon++;
            sayac++;
        }
        else for(gun=1;gun<=28;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
            q=1;goto mons;
        q1:
            mon++;
            sayac++;
        }
        }
        else{
            if(ay==1)for(gun=1;gun<=31;gun++){
                printf("\n%d.%d.%d",yil,ay,gun);
                q=4;goto mons;
            q4:
                mon++;
            }
            else{
        if(ay%2==0)for(gun=1;gun<=30;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
            q=2;goto mons;
        q2:
            mon++;
        }
        if(ay%2==1)for(gun=1;gun<=31;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
            q=3;goto mons;
        q3:
            mon++;
        }
        }
        }
    }
    yil++;
    if(yil==10000)exit(0);
    goto basla;
}
