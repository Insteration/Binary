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
    
    int number, ostatok;
    char result[12];
    int arr[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0;
    
    printf("Enter INT number for conversion\n");
    scanf("%d", &number);
    printf("Your number is - %d\n", number);
    
    while (number > 0) {
        
        ostatok = number % 2;
        number /= 2;
        arr[i] = ostatok;
        i++;
//        sprintf(result, "%d", ostatok);
//        printf("%s", result);
        
    }
    
    arr[7] = number;
    
//    printf("%d\n", number);
//
//    printf("\n");
//
    for (int j = 7; j >= 0; j--) {
        printf("%i", arr[j]);
    }
    
    printer();
    
    return 0;
}

void printer() {
    printf("\n");
    printf("Good head! Super!\n");
    printf("\n");
}
