#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct                  // lokasi bom
{
    char name[51];
    int bombtot;
} bomloc ;

typedef struct                  // pengawas + point to where
{
    char name[51];
    bomloc *control;
} gd ;

int main () {
    int a, p=0,q=0;
    scanf("%d", &a);
    gd guardian[101];
    bomloc locate[101];
    while(a--) {
        char order[5], temp[51];
        scanf("%s%s", order, temp); {
            if (strcmp(order,"set")==0) {                               // set
                if(strcmp(temp, "*")==0) {                              // di cek kalo inputnya ada * atau ga
                    scanf("%s%s",guardian[p].name, temp);
                    char pname[51];
                    scanf("%s", pname);
                    for (int i = 0; i<q; i++){
                        if(strcmp(locate[i].name, pname)==0) {
                            guardian[p].control = &locate[i];
                        }
                    }
                    p++;
                }
                else {
                    strcpy(locate[q].name, temp);
                    scanf("%d", &locate[q].bombtot);
                    q++;
                }
            }
            else if (strcmp(order,"chg")==0) {                          // change value n point to whr
               if(strcmp(temp, "*")==0) {                               // cek ada * ga
                char pnama[51], plok[51];
                scanf("%s%s", pnama, temp);                     
                    if(strcmp(temp, "&")==0) {                          // kalo ada & input penjaga dan mana yang di point
                        scanf("%s", plok);
                        for (int i = 0; i<p; i++) {
                            if(strcmp(pnama, guardian[i].name)==0) {
                                for (int j = 0; j<q ; j++) {
                                    if (strcmp(plok,locate[j].name)==0) {
                                        guardian[i].control = &locate[j];
                                        break;
                                    }
                                }
                            break;
                            }
                        }
                    }
                    else {                                                // kalo gaadda langsung bom
                        for (int i = 0; i<p; i++){
                            if (strcmp(pnama, guardian[i].name)==0){
                                (*guardian[i].control).bombtot = atoi(temp);
                                break;
                            }
                        }
                    }
               }
               else {                                                   // ganti value(bom) lewat nama var/lokasi
                for (int i = 0; i< q; i++) {
                    if (strcmp(temp, locate[i].name)==0) {
                        scanf("%d", &locate[i].bombtot);
                        break;
                    }
                }
               }
			}
            else if (strcmp(order,"get")==0) {                          // get / print
               char src[51];
               scanf("%s", src);
               for (int i = 0; i<p; i++) {
                if (strcmp(guardian[i].name, src)==0) {
                    printf("%d\n", (*guardian[i].control).bombtot);
                }
               }
            }
        }

    }
    return 0;
}

