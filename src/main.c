/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: raph
 *
 * Created on 18 novembre 2019, 07:11
 */

#include <stdio.h>
#include <stdlib.h>
#include "lirehd.h"
/*
 * 
 */
 

int main() {

   
    int nligne;
     char *ptrlig[MAXLIG];
    
    if ((nligne = lireligne(ptrlig,MAXLIG)) >=0 )
        trier(ptrlig,nligne);
    printf("debug main : %d\n",nligne);
    ecrire(ptrlig,nligne);
    
    
    
    
            
    return (EXIT_SUCCESS);
}

void ecrire(char *ptrlig[],int nlig){
    while (nlig-- > 0){
       // printf("%d",nlig);
        printf("%s\n",*ptrlig++);
    }
}

