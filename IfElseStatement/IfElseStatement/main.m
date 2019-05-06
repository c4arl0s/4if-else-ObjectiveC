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
