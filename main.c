/*
int main(void) {
  printf("Hello World\n");
  return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char cyphertext[]="WKH HDVLHVW PHWKRG RI HQFLSKHULQJ D WHAW PHVVDJH LV WR UHSODFH HDFK FKDUDFWHU EB DQRWKHU XVLQJ D ILAHG UXOH, VR IRU HADPSOH HYHUB OHWWHU D PDB EH UHSODFHG EB G, DQG HYHUB OHWWHU E EB WKH OHWWHU H DQG VR RQ.";
char alphabet[]="abcdefghijklmnopqrstuvwxyz";

int main(void) 
{
   int i;
   char * name = "Your Name\0";

   printf("Hello %s, ", name);

   // removing spaces, printing forward
   for (i = 0; i < strlen(name); i++) {
      if (name[i] != ' ') printf("%c", name[i]);
   }
    printf(" or ");

    // keeping spaces, printing backwards
    for (i = strlen(name); i >= 0; i--) {
      printf("%c", name[i]);
    }
     printf("\n");

  printf("\nThe cypher challenge text is :\n");
  for (i = 0; i < strlen(cyphertext); i++){
    if (i%30 == 0) printf("\n");
    printf("%c", cyphertext[i]);
  }

    // alphabet with a shift
    printf("\n\n");
    for (i = 0; i < strlen(alphabet); i++) {
      printf("%c", alphabet[i]);
    }

  printf("\n\nAaand, translated the text is :\n");
  for (i=0; i<strlen(cyphertext); i++){
    // formatting
    if (i%30 == 0) printf("\n");

    // translated letters
    if (cyphertext[i] == 'W') printf("t"); else
    if (cyphertext[i] == 'K') printf("h"); else
    if (cyphertext[i] == 'H') printf("e"); else
    // trying these ones
    if (cyphertext[i] == 'D') printf("a"); else
    if (cyphertext[i] == 'V') printf("s"); else
    if (cyphertext[i] == 'L') printf("i"); else

    // display the letter we don't know yet
    printf("%c", cyphertext[i]);

  }

  printf("\n\n");
  printf("[We think we know: \"WKH\" is \"the\"]\n");
  printf("[We are trying . : \"D\" as \"a\" and \"V\" as \"s\"]\n");
    
  return 0;
} 

