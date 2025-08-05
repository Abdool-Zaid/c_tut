#include <stdio.h>
int max_size(void* data, char data_type)
{       
    switch (data_type)
    {
    case 's':
        printf("type : short");
        break;
        
        case 'l':
        printf("type : long");
        break;
        
        case 'i':
        printf("type : interger");
        break;
        
        case 'd':
        printf("type : double");
        break;
        
        case 'f':
        printf("type : float");
        break;

        case 'c':
        printf("type : char");
        break;

        case 'p':
        printf("type : pointer");
        break;
        
    default:
        printf("\n incorrect notation ");
    break;
    }
    return 0;
}

