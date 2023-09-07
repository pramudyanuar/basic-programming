#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    char region[57];
    char name[57];
    int  age;
    char phonum[27];
    int Bestofurendoo;
    int nBestofurendoo;
} biodata;

typedef struct
{
    biodata ingsfo[17];
    int ncityzen; // bukan nctzen ehe
} allbiodata;

typedef struct
{
    allbiodata initial[17];
    char region[57];
} wilayah;

int main(){
    int i, j, k, l, m,n, x;
    bool flag[57][57];
    memset(flag, false, sizeof(flag));
    char region[57][57];
    wilayah identitas;
    scanf("%d", &x);
    for (i = 0; i < x; i++)
    {
        scanf("%s", region[i]);
        scanf("%d", &n);
        identitas.initial[i].ncityzen = n;
        for (j = 0; j < n; j++)
        {
            strcpy(identitas.initial[i].ingsfo[j].region, region[i]);
            scanf("%s %d %s", identitas.initial[i].ingsfo[j].name, &identitas.initial[i].ingsfo[j].age, identitas.initial[i].ingsfo[j].phonum);
        }
    }

    int searchid;
    scanf("%d", &searchid);
    for (i = 0; i < searchid; i++)
    {
        char a[51], b[51];
        scanf("%s %s", a, b);
        for (j = 0; j < x; j++)
        {
            for (k = 0; k < identitas.initial[j].ncityzen; k++)
            {
                if (strcmp(a, identitas.initial[j].ingsfo[k].name) == 0)
                {
                    int p = 1;
                    for (l = 0; l < x && p == 1; l++)
                    {
                        for (m = 0; m < identitas.initial[l].ncityzen && p == 1; m++)
                        {
                            if (strcmp(b, identitas.initial[l].ingsfo[m].name) == 0)
                            {
                                identitas.initial[j].ingsfo[k].Bestofurendoo = l;
                                identitas.initial[j].ingsfo[k].nBestofurendoo = m;
                                flag[j][k] = true;
                                break;
                                p = 0;
                            }
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < x; i++)
    {
        printf("%s\n", region[i]);
        for (j = 0; j < identitas.initial[i].ncityzen; j++)
        {
            printf("Name: %s\n", identitas.initial[i].ingsfo[j].name);
            printf("Age: %d\n", identitas.initial[i].ingsfo[j].age);
            printf("Phone Number:%s\n", identitas.initial[i].ingsfo[j].phonum);
            if (flag[i][j])
            {
                printf("His/Her bestie is: %s\n", identitas.initial[identitas.initial[i].ingsfo[j].Bestofurendoo].ingsfo[identitas.initial[i].ingsfo[j].nBestofurendoo].name);
                printf("His/Her contact info is as follows\n");
                printf("Name: %s\n", identitas.initial[identitas.initial[i].ingsfo[j].Bestofurendoo].ingsfo[identitas.initial[i].ingsfo[j].nBestofurendoo].name);
				printf("Age: %d\n", identitas.initial[identitas.initial[i].ingsfo[j].Bestofurendoo].ingsfo[identitas.initial[i].ingsfo[j].nBestofurendoo].age);
				printf("Phone Number:%s\n", identitas.initial[identitas.initial[i].ingsfo[j].Bestofurendoo].ingsfo[identitas.initial[i].ingsfo[j].nBestofurendoo].phonum);
            }

            else
            {
                printf("His/Her bestie is: No one\n");
            }
            printf("\n");
        }
    }
}