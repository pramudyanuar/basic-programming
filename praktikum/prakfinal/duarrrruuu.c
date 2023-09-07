#include <stdio.h>
#include <string.h>

typedef struct 
{
  char locate[50], guard[50], point[50];
  int bomb;
} inp ;


int main() {
  int a;
  char cmd[100];
  scanf("%d", &a);
  inp arr[a];

  for (int i =0; i<a; i++) {
    scanf("%s", cmd);
    char temp[50];
    int ct =0;

    if (strcmp(cmd, "set")) {
        scanf("%s", temp);
              if (strcmp(temp, "*") == 0){
                  char prov[50], semloc[10];
                  scanf("%s & %s", prov, semloc);
                  strcpy(arr[i].guard, prov);
                  strcpy(arr[i].point, semloc);
              }
              else {
                  strcpy(arr[i].locate, temp);
                  scanf("%d", &arr[i].bomb);
              }
    }
    else if (strcmp(cmd, "chg")) {
        scanf("%s", temp);
            if (strcmp(temp, "*") == 0){
                char sem[50];
                scanf("%s", sem);
                for(int i = 0; i < a; i++){
                    if(strcmp(sem, arr[i].guard) == 0){                      
                        for(int e = 0; e < i; e++){
                            if(strcmp(arr[i].point, arr[e].locate) == 0){
                                scanf("%d", &arr[e].bomb);
                            }
                        }
                    }
                }
            }
            else {
                for (int i = 0; i < a; i++){
                    if (strcmp(temp, arr[i].guard) == 0){
                        scanf(" &");
                        scanf("%s", arr[i].point);
                    } 
                    else if (strcmp(temp, arr[i].locate) == 0){
                        scanf("%d", &arr[i].bomb);
                    } 
                }
            }
    }
    else if (strcmp(cmd, "get")) {
      
    }
  } 
}