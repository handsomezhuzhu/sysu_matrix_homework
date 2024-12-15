void formatWord(char *str){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] = str[0] - 32;
    }
}
void getFullName(char *name, char *first_name, char *last_name){
    for(int i = 0; first_name[i] != '\0'; i++){
        name[i] = first_name[i];

    }
    name[strlen(first_name)] = ' ';
    for(int i = 0; last_name[i] != '\0'; i++){
        name[strlen(first_name) + i+1] = last_name[i];
    }
}