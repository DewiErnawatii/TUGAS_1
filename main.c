#include "Header.h"

///Nama     : Parmenas Galang Mangkurai
///NIM      : A11.2017.10072
///Kelompok : A11.4308


int main()
{
    List L, Linv, Lcopy, Lkonkat, L1, L2;
    infotype X;
    int i, N;
    CreateList(&L);

    printf("Penambahan Elemen List First\n\n");
    printf("Input jumlah elemen yang diinginkan ? ");
    scanf("%d",&N);
    for(i=1;i<=N;i++) {
        printf("Elemen ke %d list\t: ", i);
        scanf("%d",&X);
        InsVFirst(&L,X);
    }
    printf("-----TEST LIST KOSONG-----\n");
    printf("Apakah List L kosong? %d\n", ListEmpty(L));

    printf("\n===== LIST L =====\n");
    Printinfo(L);

    printf("\n\n*** Prekondisi Untuk Max/Min/Rata-Rata ***\n\n");
    printf("Jumlah elemen : %d\n", NbElmt(L));
    printf("Rata-rata elemen : %0.2f\n", Average(L));

    SearchGenapMax(L);
//    printf("Elemen maksimum list : %d\n", Max(L));
