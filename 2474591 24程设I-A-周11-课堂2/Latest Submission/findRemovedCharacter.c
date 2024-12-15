#include <string.h>
char findRemovedCharacter(char* s, char* t){
    int sn=strlen(s);
    int tn=sn-1;
    int panduan=0;
    //char a;
    for(int i=0;i<sn;i++){
        for(int j=0;j<tn;j++){
            if(s[i]==t[j]){
                panduan=1;
            }
        }
        if(panduan==0){
            return s[i];
            //a=s[i];
        }
        panduan=0;
    }
    
    //return a;
}