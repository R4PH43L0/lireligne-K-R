/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   lirehd.h
 * Author: raph
 *
 * Created on 18 novembre 2019, 06:52
 */

#ifndef LIREHD_H
#define LIREHD_H

#ifdef __cplusplus
extern "C" {
#endif




#ifdef __cplusplus
}
#endif

#endif /* LIREHD_H */

#define MAXLGR 1000
#define MAXLIG 100
int lire(char *s, int lim);
int lireligne(char *ptrlig[], int max);
void echanger(char *p[],int i,int j);
void trier(char *p[], int lim);
void ecrire(char *ptrlig[],int nlig);

//extern int nlig;
//char *ptrlig[MAXLIG];