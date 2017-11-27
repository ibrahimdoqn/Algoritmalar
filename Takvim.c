//
//  main.c
//  Takvim
//
//  Created by Wantto on 25.11.2017.
//  Copyright © 2017 Wantto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int yil,ay,gun,sayac,mon,q,w;char mons[7][10];mon=1;ay=1;w=3;
    yil=2016;
    system("clear");goto basla;
mons:
    {
        switch(mon)
        {
            case 1: printf(" Cuma");break;
            case 2: printf(" Cumartesi");break;
            case 3: printf(" Pazar");break;
            case 4: printf(" Pazartesi");break;
            case 5: printf(" Salı");break;
            case 6: printf(" Çarşamba");break;
            case 7: printf(" Perşembe");break;
        }
        if(mon==7)mon=0;
        if(q==0)goto q;
        if(q==1)goto q1;
        if(q==2)goto q2;
        if(q==3)goto q3;
    }
basla:
    w++;
    for(ay=1;ay<=12;ay++){
        sayac++;
        if(ay==2){
            if(w==4)for(gun=1;gun<=29;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
                q=0;goto mons;
            q:
            mon++;
        }
        else for(gun=1;gun<=28;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
            q=1;goto mons;
        q1:
            mon++;
        }
        }
        else{
            if(ay==1||ay==3||ay==5||ay==10||ay==12||ay==7||ay==8)for(gun=1;gun<=31;gun++){
            printf("\n%d.%d.%d",yil,ay,gun);
            q=2;goto mons;
        q2:
            mon++;
        }
            if(ay==4||ay==6||ay==9||ay==11)for(gun=1;gun<=30;gun++){
                printf("\n%d.%d.%d",yil,ay,gun);
                q=3;goto mons;
            q3:
                mon++;
            }
        }
    }
    yil++;
    if(w==4)w=0;
    getchar();
    goto basla;
}
