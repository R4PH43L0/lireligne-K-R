/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include "lirehd.h"

int lire(char *s, int lim){
    
    int c;
    char *p = s;
    
    while( --lim > 0 && (c=getchar())!= EOF && c !='\n')
        *s++ = c;
    if(c=='\n')
        *s++ = c;
    *s = '\0';
    printf("debug :%d\n",(int)(s-p));
    return (int) (s -p);
}
