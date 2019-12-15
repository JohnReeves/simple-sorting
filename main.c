/*
int main(void) {
  printf("Hello World\n");
  return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SWAP(a,b)   { int t; t=a; a=b; b=t; }
#define INDEX 8

void bubble_srt(int a[], int n);


char cyphertext[]="WKH HDVLHVW PHWKRG RI HQFLSKHULQJ D WHAW PHVVDJH LV WR UHSODFH HDFK FKDUDFWHU EB DQRWKHU XVLQJ D ILAHG UXOH, VR IRU HADPSOH HYHUB OHWWHU D PDB EH UHSODFHG EB G, DQG HYHUB OHWWHU E EB WKH OHWWHU H DQG VR RQ.";
char alphabet[]="abcdefghijklmnopqrstuvwxyz";

int main(void) 
{
   int i;
   int array[INDEX] = {12, 9, 4, 99, 120, 1, 3, 10};
   char * john = "John\0";

   printf("Hello %s, ", john);
   // printf("forwards: ");
   for (i=0; i<strlen(john);i++) {
      printf("%c", john[i]);
   }
    printf(" or ");

    // printf("backwards: ");
    for (i=strlen(john); i>=0;i--) {
      printf("%c", john[i]);
    }
     printf("\n");

   printf("\nSome numbers: ");
   for(i = 0; i < INDEX; i++)
      printf("%d ", array[i]);
   printf("\n");
     
   bubble_srt(array, INDEX);
   
   printf("Sorted:        ");
   for(i = 0; i < INDEX; i++)
      printf("%d ", array[i]);
   printf("\n");   

   // system("pause"); doesn't do anything here

   
  printf("\nSooo, the cypher challenge text is :\n");
  for (i=0; i<strlen(cyphertext); i++){
    if (i%30 == 0) printf("\n");
    printf("%c", cyphertext[i]);

  }

   printf("\n");
   return 0;
} 

void bubble_srt( int a[], int n ) {   
    int i, j;     
    for(i = 0; i < n; i++){              
        for(j = 1; j < (n-i); j++){              
           if(a[j-1] > a[j]) 
              SWAP(a[j-1],a[j]);   
        }
    }
}
