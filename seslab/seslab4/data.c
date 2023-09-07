#include <stdio.h>
#include <string.h>

struct mahasiswa {
    char name[101];
    int math;
    int science;
    int indo;
    int english;

};
struct namaorangdiprint {
    char nameprint[101];
};


int main() {
    int n;
    printf("Enter number of students :");
    scanf("%d", &n);
    struct mahasiswa mhs[n];

    for(int i = 0; i < n; i++) {
        char nama[101];
        printf("Enter name :");
        scanf("%s", &nama);
        strcpy(mhs[i].name, nama);

        printf("Enter math score :");
        scanf("%d", &mhs[i].math);
        printf("Enter science score :");
        scanf("%d", &mhs[i].science);
        printf("Enter indonesian score :");
        scanf("%d", &mhs[i].indo);
        printf("Enter english score :");
        scanf("%d", &mhs[i].english);
        printf("----------------------------\n");
    }


    int jmlh;
    printf("Jumlah orang yang diperlihatkan :");
    scanf("%d", &jmlh);
    struct namaorangdiprint nam[jmlh];
    
    for(int i = 0; i < jmlh; i++) {
        char namap[101];
        printf("Enter name/s to be shown :");
        scanf("%s", &namap);
        strcpy(nam[i].nameprint, namap);       
    }

    for (int i = 0; i < jmlh; i++) {
        nam[i].nameprint;
        int p = 0;

        for (int k = 0; k < n; k++ ) {
            if (strcmp(nam[i].nameprint, mhs[k].name) == 0) {
                printf("Nilai %s\n", mhs[k].name);
                printf("Matematika: %d\n", mhs[k].math);
                printf("IPA: %d\n", mhs[k].science);
                printf("Bahasa Indonesia:%d\n", mhs[k].indo);
                printf("Bahasa Inggris: %d\n", mhs[k].english); 
                printf("----------------------------\n");    
                p = 1;          
            }
        }
        if (p == 0) {

            printf("Nilai %s tidak ditemukan\n", nam[i].nameprint);
        }
    }

    return 0;
}
