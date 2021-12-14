#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int k;
struct person{
    char name[50];
    int id;
    float cgpa;
    char address[100];
};
struct person p[16];
int main()
{
    printf("Enter your id\n");
    scanf("%d",&k);
    printf("Your details are given\n");
    switch(k)
    {
        case 315182001:pers01(0);
            display(0);
        break;
        case 315182002:pers02(1);
            display(1);
        break;
        case 315182003:pers03(2);
            display(2);
        break;
        case 315182004:pers04(3);
            display(3);
        break;
        case 315182005:pers05(4);
            display(4);
        break;
        case 315182006:pers06(5);
            display(5);
        break;
        case 315182007:pers07(6);
            display(6);
        break;
        case 315182008:pers08(7);
            display(7);
        break;
        case 315182010:pers09(8);
            display(8);
        break;
        case 315182012:pers10(9);
            display(9);
        break;
        case 315182013:pers11(10);
            display(10);
        break;
        case 315182014:pers12(11);
            display(11);
        break;
        case 315182016:pers13(12);
            display(12);
        break;
        case 315181005:pers14(13);
            display(13);
        break;
        case 315181024:pers15(14);
            display(14);
        break;
        default:printf("Your ID is invalid\n");
    }
    return 0;
}
int pers01(int i)
{
    strcpy(p[i].name,"Nurun Nahar Anika");
    p[i].id=315182001;
    p[i].cgpa=2.94;
    strcpy(p[i].address,"Chasara,Narayanganj");
}
int pers02(int i)
{
    strcpy(p[i].name,"Md. Afjal Hosen");
    p[i].id=315182002;
    p[i].cgpa=3.83;
    strcpy(p[i].address,"Bayder Bazar,Shonargaon,Narayanganj");
}
int pers03(int i)
{
    strcpy(p[i].name,"Tanzila Akter");
    p[i].id=315182003;
    p[i].cgpa=3.90;
    strcpy(p[i].address,"Tengarchor,Gazaria,Munshiganj");
}
int pers04(int i)
{
    strcpy(p[i].name,"Rokeya Akter");
    p[i].id=315182004;
    p[i].cgpa=3.75;
    strcpy(p[i].address,"");
}
int pers05(int i)
{
    strcpy(p[i].name,"Sabina Yeasmin Nishi");
    p[i].id=315182005;
    p[i].cgpa=3.77;
    strcpy(p[i].address,"Vaterchor,Gazaria,Munshiganj");
}
int pers06(int i)
{
    strcpy(p[i].name,"Meem Akter");
    p[i].id=315182006;
    p[i].cgpa=3.88;
    strcpy(p[i].address,"Vaterchor,Gazaria,Munshiganj");
}
int pers07(int i)
{
    strcpy(p[i].name,"Md. Masud Hasan");
    p[i].id=315182007;
    p[i].cgpa=3.44;
    strcpy(p[i].address,"Tetuitola,Jamaldi,Gazaria,Munshiganj");
}
int pers08(int i)
{
    strcpy(p[i].name,"Monika Akter");
    p[i].id=315182008;
    p[i].cgpa=3.50;
    strcpy(p[i].address,"Mograpara,Sonargaon,Narayanganj");
}
int pers09(int i)
{
    strcpy(p[i].name,"Azadia Easmin Badhon");
    p[i].id=315182010;
    p[i].cgpa=2.92;
    strcpy(p[i].address,"");
}
int pers10(int i)
{
    strcpy(p[i].name,"Mahdi Hasan Sabbir");
    p[i].id=315182012;
    p[i].cgpa=3.44;
    strcpy(p[i].address,"Matuail,Dhaka");
}
int pers11(int i)
{
    strcpy(p[i].name,"Ripa Akter");
    p[i].id=315182013;
    p[i].cgpa=3.72;
    strcpy(p[i].address,"Valuka,Munshiganj");
}
int pers12(int i)
{
    strcpy(p[i].name,"Jariya Akter");
    p[i].id=315182014;
    p[i].cgpa=3.92;
    strcpy(p[i].address,"Uddobgonj,Sonargaon,Narayanganj");
}
int pers13(int i)
{
    strcpy(p[i].name,"Sumaiya Rahman Oishi");
    p[i].id=315182016;
    p[i].cgpa=3.77;
    strcpy(p[i].address,"Uddobgonj,Sonargaon,Narayanganj");
}
int pers14(int i)
{
    strcpy(p[i].name,"Arjun Ray");
    p[i].id=315181005;
    p[i].cgpa=3.04;
    strcpy(p[i].address,"");
}
int pers15(int i)
{
    strcpy(p[i].name,"Mahedi Hasan Hemal");
    p[i].id=315181024;
    p[i].cgpa=2.82;
    strcpy(p[i].address,"Modonpur,Sonargaon,Narayanganj");
}
int display(int i)
{
    printf("Name=%s\n",p[i].name);
    printf("ID=%d\n",p[i].id);
    printf("CGPA=%0.2f\n",p[i].cgpa);
    printf("Address=%s\n",p[i].address);
}
