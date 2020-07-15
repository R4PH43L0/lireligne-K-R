/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lirehd.h"

//extern char *ptrlig[MAXLIG];

int lireligne(char *ptrlig[MAXLIG], int max) {
    
    int nlig, lgr;
    char *p, ligne[MAXLGR];
    
    nlig =0;
    while (( lgr = lire(ligne,MAXLGR)) > 0 )
        if (nlig >= max || (p = malloc(lgr)) == NULL)
                return -1;
        
        else {
            printf("%s",p);
            ligne[lgr -1] = '\0';
            strncpy (p,ligne,lgr);
            ptrlig[nlig++] = p;
        }
    //printf("%d",nlig);
    return nlig;
}