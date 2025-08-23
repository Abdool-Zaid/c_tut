/*  
 * C program to accept a string and a substring and
 * check if the substring is present in the given string
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef unsigned char sts ;

sts is_empty(char str[80]); 
sts sub_is_empty(char str[10]); 
sts has_non_char(char str[80]); 
sts sub_has_non_char(char str[10]);
void to_lower_case(char *str);
void check_for_sub_in_string(char main[80], char sub[10]);

int main()
{
    char str[80], search[10];

    
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    
    
    while ((is_empty(str) != 0) || (has_non_char(str) != 0)) // loops till user enters a valid string
    {
        printf("please enter a valid non-zero string\nthe string can not have non-alphabetic characters either\n");
        printf("Enter a string:");
        fgets(str, sizeof(str), stdin);
        
    }
    to_lower_case(str);
    
    
    printf("Enter search substring:");
    fgets(search, sizeof(search), stdin);
    
    while ((sub_is_empty(search) != 0) || (sub_has_non_char(search) != 0) || strlen(search) > strlen(str)) // sub cannot be longer than main 
    {
        printf("please enter a valid non-zero string\nthe string can not have non-alphabetic characters either\n");
        printf("please the substring cannot be longer than the main string\n");
        printf("Enter a string:");
        fgets(search, sizeof(search), stdin);
        
    }
    to_lower_case(search);
    
    check_for_sub_in_string(str, search);
    
   
            
    return 0;
}

sts is_empty(char str[80])
{
    sts status =1;
    
    status = (strlen(str) > 1)  ?  0 :  1; 
    
    return status;
} 
sts sub_is_empty(char str[10])
{
    sts status =1;
    
    status = (strlen(str) > 1)  ?  0 :  1; 
    
    return status;
} 

sts has_non_char(char str[80]){
    sts status = 1;
for (size_t i = 0; i < strlen(str)-1 ; i++) { // str -1 since \0 will always fail this test 
        if (!isalpha(str[i])) {
            
            return status; 
        }
    }
    status = 0 ;
    return status;

}
sts sub_has_non_char(char str[10]){
    sts status = 1;
for (size_t i = 0; i < strlen(str)-1 ; i++) { // str -1 since \0 will always fail this test 
        if (!isalpha(str[i])) {
            
            return status; 
        }
    }
    status = 0 ;
    return status;

}

void to_lower_case(char *str) {
    if (str == NULL) return; 
    for (size_t i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void check_for_sub_in_string(char main[80], char sub[10]){

        int count1 = 0, count2 = 0, i, j, flag;
 while (main[count1] != '\0')

        count1++;
        while (sub[count2] != '\0')
        count2++;
        for (i = 0; i <= count1 - count2; i++)
        {
                for (j = i; j < i + count2; j++)
                {
                    flag = 1;
                    if (main[j] != sub[j - i])
                    {
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                break;
            }
            if (flag == 1)
            printf("SEARCH SUCCESSFUL!");
            else
            printf("SEARCH UNSUCCESSFUL!");
}