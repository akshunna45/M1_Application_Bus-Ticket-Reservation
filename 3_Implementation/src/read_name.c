/**
 * @file read_name.c
 * @author Akshunna Prakash (fastmixes291@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-11-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "read_name.h"

/*for putting the numeric value in the array*/
void read_name(int trno)
{
   FILE *b;
   char tempstr1[12]="status";
   char numstr[100];
   int i=0,j=0,k=0;

   itoa(trno,numstr,10);
   strcat(numstr,".txt");
   strcat(tempstr1,numstr);
   
   /*for open the file to write the name in the file*/
   b=fopen(tempstr1,"a+");

   while(!feof(b))
   {
      name[i][j]=fgetc(b);
      if(name[i][j]==' ')
      {
         j=0;
         i++;
      }
      else
      {
         j++;
      }
   }
   name[i][j]='\0';
   k=i;
   fclose(b);
}
