/**
 * @file read_number.c
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "/home/runner/work/M1_Application_Bus-Ticket-Reservation/M1_Application_Bus-Ticket-Reservation/3_Implementation/inc/read_number.h"

/*for putting the numeric value in the array*/
int read_number(int trno)
{   
    FILE *a,*b;
    char tempstr[100],tempstr2[12]="number";
    char numstr[100];
    int i=0,j=0,k;

    itoa(trno,numstr,10);
    strcat(numstr,".txt");
    strcat(tempstr2,numstr);
    
    /*for open the file to write the name in the file*/
    a=fopen(tempstr2,"a+");
    
    while(!feof(a))
    {
        number[i][j]=fgetc(a);
        if(number[i][j]==' ')
        {
            j=0;
            i++;
        }
        else
        {
            j++;
        }
    }
    k=i;
    for(i=0;i<k;i++)
    {
        num1[i]=atoi(number[i]);
    }
    fclose(a);
    return k;
}
