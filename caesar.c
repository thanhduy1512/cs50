#include <stdlib.h>
#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[]){
    
    if(argc == 2 && isdigit(*argv[1])){
        
    
    string plainText = get_string("Plain Text: ");
    printf("Cipher Text: ");
    
    for( int i = 0, n = strlen(plainText); i < n; i++){
        
        if(isalpha(plainText[i]) == false){
            printf("%c", plainText[i]);
        }else if(isupper(plainText[i])){
            if((plainText[i] + atoi(argv[1])) <= 'Z'){
                
                printf("%c", plainText[i] + atoi(argv[1]));
                
            }else{
                
                printf("%c",(plainText[i] + atoi(argv[1]) - 'A') % 26 + 'A');
                
            }    
            
        }else if(islower(plainText[i])){
            
            if((plainText[i] + atoi(argv[1])) <= 'z'){
                
                printf("%c", plainText[i] + atoi(argv[1]));
                
            }else{
                
                printf("%c",(plainText[i] + atoi(argv[1]) - 'a') % 26 + 'a');
                
            }
        }
    }
    
        printf("\n");
    
   
    }else {return printf("Usage: ./caesar key\n");}
    
}