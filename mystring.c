int mystrlen(char *s){
    int count = 0;  
    char *sp = s;
    while(*sp != '\0'){
        sp++;  
        count++; 
    }
    return count;   
}

char *mystrncpy(char *dest, char *src, int n){
    int i;  
    char *dp = dest;
    while(*src != '\0' && i < n){
        *dp = *src;
        dp++; src++; i++;
    }
    return dest; 
}

char *mystrcat(char *dest, char *src){
    char *dp = dest;
    //move pointer to append src after dest
    while(*dp != '\0'){
        dp++;
    }
    while(*src != '\0'){
        *dp = *src;
        dp++; src++; 
    }
    return dest;
}

int mystrcmp(char *s1, char *s2){
    while(*s1 != '\0'){
        if(*s2 == '\0') return 1; //s2 is empty
        if(*s1 < *s1) return -1; 
        if(*s1 > *s2) return 1; 
        s1++; s2++; 
    }
    if(*s2 != '\0') return -1; //everything's same but s2 is longer than s1
    return 0; 
}

char *mystrchr(char *s, char c){
    char *sp = s; 
    while(*sp != '\0'){
        if(*sp == c) return sp; 
        sp++;
    }
    if(c == 0) return sp;
    return '\0'; 
}
