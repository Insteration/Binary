//
//  main.c
//  Binary
//
//  Created by Artem Karmaz on 14.06.2019.
//  Copyright © 2019 Artem Karmaz. All rights reserved.
//

#include <stdio.h>

void printer(void);

int main(int argc, const char * argv[]) {
    
    int number;
    int ostatok;
    char result[12];

    printf("Enter INT number for conversion\n");
    scanf("%d", &number);
    printf("Your number is - %d\n", number);
    
    while (number > 1) {
        
        ostatok = number % 2;
        number /= 2;
        
        sprintf(result, "%d", ostatok);
        printf("%s", result);
        
    }
    
    printf("%d\n", number);
    printer();
    
    return 0;
}

void printer() {
    printf("\n");
    printf("Good head! Super!\n");
    printf("\n");
}
