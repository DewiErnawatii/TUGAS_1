#include "Header.h"

boolean ListEmpty (List L)
{
    return(First(L) == Nil);
}


void CreateList (List * L)
{
    First(*L) = Nil;
}

address Alokasi (infotype X)
{
    address P;

    P = (address) malloc (sizeof(ElmtList));
    if (P != Nil){
        Info(P) = X;
        Next(P) = Nil;
    }

    return(P);
}

void Dealokasi (address *P)
{
    free(*P);
}


address Search (List L, infotype X)
{
    address P,Prec,Found=Nil;
    P = First(L);
    Prec=Nil;

    while (P != Nil)
        {
        if (Info(P) == X)
        {
            Found = Prec;
            P = Next(P);
        }
    else
        {
            Prec = P;
            P = Next(P);

        }
    }

    return(Found);
}

boolean FSearch (List L, address P)
{
    address Pt;
    boolean Found;

    Pt = First(L);
    Found = false;

    while ((Pt != Nil) && (!Found))
        {
        if (P == Pt)
        {
            Found = true;
        }
    else
        {
            Pt = Next(Pt);
        }
    }

    return(Found);
}

address SearchPrec (List L, infotype X)
{
    address P,Prec,Before,Found=Nil;

    P = First(L);
    Prec=Nil;
    Before=Nil;

    while (P = Nil)
        {
        if (Info(P) == X)
        {
            Found = Before;
        }else
        {
            Before=Prec;
            Prec = P;
            P = Next(P);

        }
    }

    return(Found);
}


void InsertFirst (List * L, address P)
{
    Next(P) = First(*L);
    First(*L) = P;
}

void InsVFirst (List * L, infotype X)
{
    address P;

    P = Alokasi(X);
    if (P != Nil){
        InsertFirst(L,P);
    }
}


void InsertLast (List *L, address P)
{
    address Last;

    if (First(*L) == Nil)
        {
        InsertFirst(L,P);
    }
    else
    {
        Last = First(*L);
        while (Next(Last) != Nil)
        {
            Last = Next(Last);

        }
        /* Next(Last)=Nil */
        InsertAfter(L,P,Last);
    }
}

void InsVLast (List * L, infotype X){
    address P;

    P = Alokasi(X);
    if (P != Nil){
        InsertLast(L,P);
    }
}

void DelFirst (List * L, address * P)
{
    *P = First(*L);
    First(*L) = Next(First(*L));
    Next(*P) = Nil;
}

void DelVFirst (List * L, infotype * X)
{
    address P;

    DelFirst(L,&P);
    *X = Info(P);
    Next(P) = Nil;
    Dealokasi(P);
}

void DelVLast (List * L, infotype * X)
{
    address P;

    DelLast(L,&P);
    *X = Info(P);
    Dealokasi(P);
}





void InsertAfter (List * L, address P, address Prec){
    Next(P) = Next(Prec);
    Next(Prec) = P;
}







void DelP (List * L,infotype X)
{
    address Pdel,P;

    Pdel = First(*L);
    P = Nil;
    while (Info(Pdel) != X)
    {
        P = Pdel;
        Pdel = Next(Pdel);
    }
    Next(P)=Next(Next(P));
    Next(Pdel)= Nil;
    Dealokasi(Pdel);
}


void DelLast (List * L, address * P)
{
    address Last, PrecLast;

    Last = First(*L);
    PrecLast = Nil;
    while (Next(Last) != Nil)
    {
        PrecLast = Last;
        Last = Next(Last);
    }

    /* Next(Last)=Nil */
    *P = Last;
    if (PrecLast == Nil)
    {
    /* kasus satu elemen */
        First(*L) = Nil;
    }
    else
    {
        Next(PrecLast)= Nil;
    }
}


void DelAfter (List * L, address * Pdel, address Prec)
{
    *Pdel = Next(Prec);
    Next(Prec) = Next(Next(Prec));
    Next(*Pdel) = Nil;
}


// PROSES SEMUA ELEMEN LIST
void Printinfo (List L)
{
    address P;

    if (First(L) == Nil)
    {
        printf("List Kosong\n");
    }
    else
    {
        P = First(L);
        printf("\nIsi List :\n");
        do
        {
            printf("%d \n",Info(P));
            P = Next(P);
        } while (P != Nil);
    }
    printf("\n");
}

int NbElmt (List L)
{
    int x=0;
    address P;

    if (First(L) == Nil)
    {
        return (0);
    }
    else
    {
    P = First(L);
    do
    {
       x++;
       P = Next(P);
    } while (P != Nil);
    return (x);
}
}

// Prekondisi untuk Max/Min/rata-rata : List tidak kosong
int Max (List L)
{
    int x=0;
    address
    P;

    if (First(L) == Nil) {
        return (0);
    } else {
    P = First(L);
    do {
        if(x<Info(P))
        {x=Info(P);}
        P = Next(P);
    } while (P != Nil);
    return (x);
}
}
void SearchGenapMax(List L)
{
    int max=0;
    if(First(L)%2==0)
    {
        if(First(L)>=Next(P))
        {
            max=First(L);
        }
    }
}
