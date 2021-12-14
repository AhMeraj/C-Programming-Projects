#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(int s){
    int ms=1000*s;
    clock_t start_time=clock();
    while(clock()<start_time+ms)
        ;
}
int main()
{
    int s,m,hr,dy,mon,yr;
    char s1[]="pm";
    char mnt[50];
    printf("Enter your present time:\n");
    printf("Year:");
    scanf("%d",&yr);
    printf("Month no:");
    scanf("%d",&mon);
    printf("day:");
    scanf("%d",&dy);
    printf("Hour:");
    scanf("%d",&hr);
    printf("Minute:");
    scanf("%d",&m);
    printf("Second:");
    scanf("%d",&s);
    printf("am/pm?:");
    scanf("%s",&s1);
    system("cls");
    while(1)
    {
        if(mon==1){
            strcpy(mnt,"Jan");
        }
        else if(mon==2){
            strcpy(mnt,"Feb");
        }
        else if(mon==3){
            strcpy(mnt,"Mar");
        }
        else if(mon==4){
            strcpy(mnt,"Apr");
        }
        else if(mon==5){
            strcpy(mnt,"May");
        }
        else if(mon==6){
            strcpy(mnt,"Jun");
        }
        else if(mon==7){
            strcpy(mnt,"Jul");
        }
        else if(mon==8){
            strcpy(mnt,"Aug");
        }
        else if(mon==9){
            strcpy(mnt,"Sep");
        }
        else if(mon==10){
            strcpy(mnt,"Oct");
        }
        else if(mon==11){
            strcpy(mnt,"Nov");
        }
        else{
            strcpy(mnt,"Dec");
        }
        printf("\n\n\n\n\t\t\t%0.2d:%0.2d:%0.2d%s",hr,m,s,s1);
        printf("\n \t\t\t%0.2d/%s/%0.4d\n",dy,mnt,yr);
        s++;
        delay(1);
        system("cls");
        if(s==60){
            m++;
            s=0;
        }
        if(m==60){
            m=0;
            hr++;
        }
        if(hr==13){
                if(hr==13 && s1[0]=='p'){
                    s1[0]='a';
                    s1[1]='m';
                    dy++;
                }
                else if(hr==13 && s1[0]=='a'){
                    s1[0]='p';
                    s1[1]='m';
                }
            hr=0;
        }
        if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
            if(dy==31){
                dy=0;
                mon++;
            }
        }
        else if(mon==2){
            if(yr%4==0){
                if(dy==29){
                    dy=0;
                    mon++;
                }
            }
            else{
                if(dy==28){
                    dy=0;
                    mon++;
                }
            }
        }
        else if(mon==4||mon==6||mon==9||mon==11){
            if(dy==30){
                dy=0;
                mon++;
            }
        }
        if(mon==13){
            mon=0;
            yr++;
        }
    }
}
