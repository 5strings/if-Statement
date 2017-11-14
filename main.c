//
//  main.c
//  if statement
//
//  Created by Eun Jae Lee on 14/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  If else statements
//  if statemets
//  if else
//  nested if else
//  else if ladderj

//  if else statment

//  Switch
//  conditional operator statements
//  go to statements


#include <stdio.h>
//#include <conio.h>

int main(int argc, const char * argv[]) {
    
    int mark;
    printf("Enter your mark: \n");
    scanf("%d\n", &mark);
    
    if (mark>=90) {
        
        printf("Grade A\n");
    } if (mark >= 70 && mark <90){
        
        printf("Grad B\n");
    }
    
    if (mark >=50 && mark <70) {
        printf("Grad C\n");
    }  else if (mark < 50){
        
        printf("You Faild!\n");
    }
    
   // return 0;
}
