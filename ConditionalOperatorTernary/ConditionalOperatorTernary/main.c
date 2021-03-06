//
//  main.c
//  ConditionalOperatorTernary
//
//  Created by Carlos Santiago Cruz on 4/21/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>
           
int main(int argc, const char * argv[]) {
    BOOL isBoneLess = true;
    int minutesPerPound;

    if (isBoneLess) {
        minutesPerPound = 15;
        printf("minutesPerPound = %d\n", minutesPerPound);

    } else {
        minutesPerPound = 20;
        printf("minutesPerPound = %d\n", minutesPerPound);
    }

    isBoneLess = NO;

    int newMinutesPerPound = isBoneLess ? 15 : 20;

    printf("newMinutesPerPound = %d\n", newMinutesPerPound);

    return 0;
}
