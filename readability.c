#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main (void){

    string arg = get_string("Arg: ");

    int letters = 0;
    int words = 1;
    int sentences = 0;

    for(int i = 0, n = strlen(arg); i < n; i++){
        if(islower(arg[i])){
            letters += 1;
        }else if(isupper(arg[i])){
            letters += 1;
        }else if(arg[i] == '.' || arg[i] == '?' || arg[i] == '!'){
            sentences += 1;
        }else if(arg[i] == ' '){
            words += 1;
        }
    }

    float L = (float)letters / words * 100;

    float S = 100 * (float)sentences / words;

    int index = round(0.0588 * L - 0.296 * S - 15.8);


    if(index < 0){
        printf("Before Grade 1\n");
    }else if (index > 16){
        printf("Grade16+\n");
    }else{
        printf("Grade %i\n", index);
    }
    
    
}