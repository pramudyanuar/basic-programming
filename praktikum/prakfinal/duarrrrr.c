#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{
    char locate[50], guard[50], pointbygd[50];
    int tbom;
}inp;
int main(){
    int N;
    char cmd[100];                    
    scanf("%d", &N);
    inp arr[N];

    for (int i = 0; i < N; i++){       
        scanf("%s", cmd);
        char temp[50];
        int counter = 0;

        if (strcmp(cmd, "set") == 0){        
            scanf("%s", temp);
            if (strcmp(temp, "*") == 0){
                char prov[50], semloc[10];
                scanf("%s & %s", prov, semloc);
                strcpy(arr[i].guard, prov);
                strcpy(arr[i].pointbygd, semloc);
            }
            else {
                strcpy(arr[i].locate, temp);
                scanf("%d", &arr[i].tbom);
            }
        }
        else if (strcmp(cmd, "chg") == 0){ 
            scanf("%s", temp);
            if (strcmp(temp, "*") == 0){
                char sem[50];
                scanf("%s", sem);
                for(int i = 0; i < N; i++){
                    if(strcmp(sem, arr[i].guard) == 0){                      
                        for(int e = 0; e < i; e++){
                            if(strcmp(arr[i].pointbygd, arr[e].locate) == 0){
                                scanf("%d", &arr[e].tbom);
                            }
                        }
                    }
                }
            }
            else {
                for (int i = 0; i < N; i++){
                    if (strcmp(temp, arr[i].guard) == 0){
                        scanf(" &");
                        scanf("%s", arr[i].pointbygd);
                    } 
                    else if (strcmp(temp, arr[i].locate) == 0){
                        scanf("%d", &arr[i].tbom);
                    } 
                }
            }
        }
        else if (strcmp(cmd, "get") == 0){ //print funct
            char src[50];
            scanf("* %s", src);
            for (int i=0;i<N;i++) {
                if (strcmp(src,arr[i].guard)==0) {
                    printf("%d", arr[i].tbom);
                }
            }
        }
    }
}