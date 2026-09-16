#include<stdio.h>

typedef char string[50];

void get_string(string s){ //Nhan thong tin tu ban phim
    int i=0;
    char c;
    while (1){
        s[i]=getchar();
        if (s[i]=='\n'){
            break;
        }
        if(i<49){
            i++;
        }
    }
    s[i]='\0';
}
void print_string(string s){ // In string
    i=0;
    while(1) {
        if(s[i]!='\n'){
        printf("%c",s[i])
        }
        else {
            break;
        }
        if(i<49){
            i++;
        }
    }
}
struct user {
    string ID_user;
    string data_fav_songs[100]; // Danh sach cac bai hat yeu thich
    string data_history_songs[100]; //Cac bai hat da nghe
};
struct song {
    string ID_song;
    string singer; // Ca si
    string song_writer; // nguoi sang tac
    string genre; // the loai
    int like; // luot thich
    int views; // luot nghe
}

