#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    int occurs[26]; //TO KEEP TRACK of letter occurrences
    char str[100];  //To input OUR STRINGS
    int i;
    char ch;
    int anagram = 1;    //0 (false) if it's not anagram, 1 (true) if it's anagram

    //INITIALIZATION
    for (i = 0; i < 26; i++){
        occurs[i] = 0;
    }

    //FIRST INPUT//
    printf("Enter first string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++){
        ch = toupper(str[i]);   //this way, we only have to worry about uppercase

        /*
        We increment the occurrences of the letter we find...
        Suppose, our string is "Hello"
        here L comes two times,
        L is the 12th (11th if counting from 0) letter so,
        occur[11] = 2
        and similarly for other letters
        */
        occurs[ch-'A']++;
    }


    //SECOND INPUT//
    printf("Enter second string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++){
        ch = toupper(str[i]);

        occurs[ch-'A']--;   //We decrement the occurrences of the letter we find...
    }


    //NOW, if the occurrence values of all alphabets are zero... only then the two words are anagrams
    for (i = 0; i < 26; i++){
        if (occurs[i] != 0){
            anagram = 0;
            break;
        }
    }

    if (anagram)
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
}
