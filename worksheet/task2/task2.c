/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:  anthony wills
 * ID: 201961071
 */

#include <stdio.h>
#include <string.h>

int main(void){
    long decimal = 0;
    char hex[9];
    int length;
    int valid = 1;  
    
    printf("Enter a hexadecimal:");
    scanf("%8s", hex);
    
    length = strlen(hex);
    
    // conversion
    for (int i = 0; i < length; i++) {
        char current = hex[i];
        int value;
        
        // current hex digit value
        if (current >= '0' && current <= '9') {
            value = current - '0';
        }
        else if (current >= 'A' && current <= 'F') {
            value = current - 'A' + 10;
        }
        else if (current >= 'a' && current <= 'f') {
            value = current - 'a' + 10;
        }
        else {
            valid = 0;
            break;
        }
        
        //aad to decimal
        decimal = decimal * 16 + value;
    }
    
    
    if (!valid) {
        printf("Error: Invalid Hexadecimal\n");
        return 1;
    }
    

    printf("decimal:%ld\n", decimal);
    
    return 0;
}