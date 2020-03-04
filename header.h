#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "boolean.h"
#define Nil 0

typedef int infotype;
typedef struct tElmtList *address; ///type address : pointer to elmtlist

typedef struct tElmtList
{
    infotype Info;
    address Next;
}ElmtList;

typedef struct
{
    address first;
}List;

#define First(L) (L).first
#define Next(P) (P)->Next
#define Info(P) (P)->Info

List L;
///test list kosong
boolean ListEmpty (List L);
///pembuatan list kosong
void CreateList (List *L);
///manajemen memori
address Alokasi (infotype x);
void Dealokasi (address *P);
///pencarian sebuah elemen list
address Search (List L, infotype x);
boolean Fsearch (List L, address P);
address  SearchPrec (List L, infotype x);
///primitif berdasarkan nilai
void InsVFirst (List *L, infotype x);
void InsVLast (List *L, infotype x);
///penghapusan elemen
void DelVFirst (List *L, infotype *x);
void DelVLast (List *L, infotype *x);
///primitif berdasarkan alamat
void InsertFirst (List *L, address P);
void InsertAfter (List *L, address P, address Prec);
void InsertLast (List *L, address P);
///penghaspusan sebuah elemen
void DelFirst (List *L, address *P);
void DelP (List *L, infotype x);
void DelLast (List *L, address *P);
void DelAfter (List *L, address *Pdel, address Prec);
///proses semua elemen list
void Printinfo (List L);
int NbElmt (List L);
///prekondisi untuk max/min/rata2 : list tidak kosong
infotype Max (List L);
address AdrMax (List L);

void SearchGenapMax(List L);
