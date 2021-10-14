#include <stdio.h>
#include <math.h>

int fcheck (int *volume)
{
    printf ("Enter the number 0-5 to select type of figure \n 1 - parallelogram \n 2 - sphere \n 3 - ring \n 4 - cone \n 5 - cylinder \n");
    int a;
    int flag = 1;
    while (flag)
    {
    scanf("%d", &a);
        switch (a)
        {
        case 1:
        printf("parallelogram \n");
        fparf(&volume);
        break;
        case 2:
        printf("sphere \n");
        fshaf(&volume);
        break;
        case 3:
        printf("ring \n");
        fkolf(&volume);
        break;
        case 4:
        printf("cone \n");
        fkonf(&volume);
        break;
        case 5:
        printf("cylinder \n");
        fcylf(&volume);
        break;
        default:
        printf("Please, enter the number from 0 to 5 \n");
        continue;
        }
        flag=0;
    }
    return volume;
}

int fparf (int *volume)
{
int a, b, c;
int vpar;
int flag = 1;
    while (flag)
    {
        printf("input a-side: ");
        scanf("%d", &a);
        if (a<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }

        printf("input b-side: ");
        scanf("%d", &b);
        if (b<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }

        printf("input c-side: ");
        scanf("%d", &c);
        if (c<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }
        flag=0;
    }

vpar=a*b*c;
*volume = vpar;
}

int fshaf (int *volume)
{
int R;
int vsha;
int flag = 1;
    while (flag)
    {
        printf("input Radius: ");
        scanf("%d", &R);
        if (R<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }
        flag=0;
    }
vsha=(4/3)*M_PI*(R*R*R);
*volume = vsha;
}

int fkolf (int *volume)
{
int R,r;
int vkol;
int flag = 1;
    while (flag)
    {
        printf("input Outside Radius: ");
        scanf("%d", &R);
        if (R<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }
        
        printf("input Inside Radius: ");
        scanf("%d", &r);
        if (r<0 || r>R)
        {
        printf("Please, enter the positive number and lower then Outside Radius \n");
        continue;
        }

        flag=0;
    }

vkol=M_PI*(R*R-r*r);
*volume = vkol;
}

int fkonf (int *volume)
{
int R,H;
int vkon;
int flag = 1;
    while (flag)
    {
        printf("input Radius: ");
        scanf("%d", &R);
        if (R<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }
        
        printf("input High: ");
        scanf("%d", &H);
        if (H<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }

        flag=0;
    }

vkon=(R*R*H*M_PI)/3;
*volume = vkon;
}

int fcylf (int *volume)
{
int R,H;
int vcyl;
int flag = 1;
    while (flag)
    {
        printf("input Radius: ");
        scanf("%d", &R);
        if (R<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }
        
        printf("input High: ");
        scanf("%d", &H);
        if (H<0)
        {
        printf("Please, enter the positive number \n");
        continue;
        }

        flag=0;
    }

vcyl=R*R*H*M_PI;
*volume = vcyl;
}

int main()
{
int a, b, c, volume;
printf("Hello, this programm will help you to calculate the volume of some figures (Press ENTER to continue) \n");
scanf ("d");
volume=fcheck(&volume);
printf("volume of this figure = %d", volume);
}
