# ciphers in c
## (are still very easy)

For decripting text, we a simply using the computer to record 
our thoughts during the trial and error process.

Mr Gill tends to use Word and Excel to do things that only
take a couple of lines of code.

To be fair to Mr Gill, that is exactly what the Cipher Challenge
website says to do.

Being lazy let's do the couple of lines of programming instead.

### Task 1. Make a list of common decript functions  

These are all taken from listening to Mr Gill use the *very*
 complicated process in Word and Excel, and from the Cipher 
 Challenge worksheets.

The first list of what we might like to do:   
* print the cipher text   
* substitue letters that you know   
* reversing the text   
* removing spaces   
* printing the trial alphabet    

### Task 2. Print the cipher text

Programming languages are good with processing text because, 
if you think about it, that's how programmers write programs.

Let's start with 'hello world' the most widely used program
for finding out how to display things on the screen, how to 
organise our programs, and how to build and run on the computer.

In `repl.it` start a new `c` repl and press `run`:

#### Hello_World.c 
```c
#include <stdio.h>

int main(void) {
  printf("Hello World\n");
  return 0;
}
```

Replace the "Hello World" line with the `for-loop` to see 
how we can display a string letter by letter.

We will need to display letter by letter when we start 
substituting the letters in the next task.

#### Hello_Ciphers.c 
```c
for (i = 0; i < cipher_text); i++){
  if i % 30 == 0 printf("\n");
  printf("%c", cipher_text[i]);
}
```

`STOP` Did your `cipher_text` string display anything?

Did you remember to give a string called `cipher_text`?

```c
char cyphertext[]="WKH HDVLHVW PHWKRG RI HQFLSKHULQJ D WHAW PHVVDJH LV WR UHSODFH HDFK FKDUDFWHU EB DQRWKHU XVLQJ D ILAHG UXOH, VR IRU HADPSOH HYHUB OHWWHU D PDB EH UHSODFHG EB G, DQG HYHUB OHWWHU E EB WKH OHWWHU H DQG VR RQ.";
```
### Task 3. Substitue letters that you know   

Powerpoint 1 tells us that WKH repeats itself and 
thus might be 'the'.

Let's substitue those letters and see what happens:


```c
for (i = 0; i < cipher_text); i++){
  if i % 30 == 0 printf("\n");

  // substituted letters
  if cipher_text[i] == "W" printf(); else
  if cipher_text[i] == "K" printf(); else
  if cipher_text[i] == "H" printf(); else

  // letters kept the same
  printf("%c", cipher_text[i]);
}
```

### Task 4. Reversing the text   

```c
    // keeping spaces, printing backwards
    for (i = strlen(name); i >= 0; i--) {
      printf("%c", name[i]);
    }
     printf("\n");
```

### Task 5. Removing spaces   

The space is just another character, so if we want to remove 
spaces we just don't print them.

```c
    // removing spaces, printing forward
    for (i = 0; i < strlen(name); i++) {
      if (name[i] != ' ') printf("%c", name[i]);
    }
    printf(" or ");
```

### Task 6. Printing the trial alphabet    

#### Caesar shift

```c
char alphabet[]="abcdefghijklmnopqrstuvwxyz";
int shift = 23; 

int main(){
    // alphabet with a shift
    printf("\n\n");
    for (i = 0; i < strlen(alphabet); i++) {
      // normal alphabet
      printf("%c", alphabet[i]);

      // alphabet shifted by -3 or +23, 
      // which is the same
      printf(" -> %c, ",alphabet[((i+shift) % 26)]);
    }
}
```

#### Affine shift

```c
char alphabet[]="abcdefghijklmnopqrstuvwxyz";
int shift = 23; 

int a = 5;
int b = 3;

// affine letter shift = a*x+b % 26
// thus the caesar letter shift = a*x + 0 % 26
int main(){
    // alphabet with a shift
    printf("\n\n");
    for (i = 0; i < strlen(alphabet); i++) {
      printf("%c", alphabet[i]);
      printf(" -> %c, ",alphabet[((a*i + b) % 26)]);
    }
}
```


