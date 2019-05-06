# 4if-else-ObjectiveC
if else


# Boolean Variables

# else if

# Conditional (ternary) operator

``` objective-c
int minutesPerPound;
if (isBoneless)
  minutesPound = 15;
else 
  minutesPerPound = 20
```
  
``` objective-c
  int minutesPerPound = isBoneless ? 15 : 20;
```
  
  
``` c
//
//  main.c
//  ConditionalOperatorTernary
//
//  Created by Carlos Santiago Cruz on 4/21/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>

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
```

# I suspect over time you will embrace the ternary operator as a concise way to do conditional value assigment.

# Evaluating a variable with if statement

``` objective-c
//
//  main.m
//  IfElseStatement
//
//  Created by Carlos Santiago Cruz on 5/5/19.
//  Copyright © 2019 Carlos Santiago Cruz. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        // What happen when you allocate an object an test
        NSString *string = nil;
        string = @"hola mundo";
        if (string) {
            NSLog(@"%@", string);
        } else {
            NSLog(@"say something else");
        }
    }
    return 0;
}
```

``` console
2019-05-05 21:55:14.816827-0600 IfElseStatement[46191:2991491] hola mundo
Program ended with exit code: 0
```


