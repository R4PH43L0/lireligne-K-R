/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <string.h>
#include "lirehd.h"

void trier(char *p[], int lim){
    
    int i,j;

    for(i=0;i< lim;i++){
        for (j=i+1;j< lim;j++)
            if (strcmp(p[i],p[j]) > 0)
                echanger(p,i,j);
    }

}

void echanger(char *p[],int i,int j){
    char *temp;
    
    temp = p[i];
    p[i]= p[j];
    p[j] = temp;
    
}