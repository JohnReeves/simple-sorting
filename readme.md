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

#### Hello_World.c 
```c
for (i = 0; i < strlen(cipher_text); i++){
  printf("%c", cipher_text[i]);
}
```

#### Hello_Ciphers.c 
```c
for (i = 0; i < cipher_text); i++){
  if i % 30 == 0 printf("\n");
  printf("%c", cipher_text[i]);
}
```

### Task 3. substitue letters that you know   

Powerpoint 1 tells us that WKH repeats itself and 
thus might be 'the'.

Let's substitue those letters and see what happens:

```c
for (i = 0; i < cipher_text); i++){
  if i % 30 == 0 printf("\n");
  if cipher_text[i] == "W" printf(); else
  if cipher_text[i] == "K" printf(); else
  if cipher_text[i] == "H" printf(); else
  printf("%c", cipher_text[i]);
}
```

### Task 4. reversing the text   


### Task 5. removing spaces   

The space is just another character, so if we want to remove 
spaces we just don't print them.

### Task 6. printing the trial alphabet    

