#include <stdio.h>
#include <string.h>

typedef struct character{
    char MC[30];
}Char;

typedef struct manhwa{
    char judul[50];
    char genre[30];
    char penulis[30];
    int episode;
    Char character;
}Manhwa;

// function struct
void cekEpisode(Manhwa m[], int size){
    printf("=======================================\n");
    printf("|| Cek Jumlah Episode Manhwa:\n");
    for(int i = 0; i < size; i++){
        if(m[i].episode > 200){
            printf("|| Manhwa %s memiliki banyak episode: %d\n", m[i].judul, m[i].episode);
        } else {
            printf("|| Manhwa %s memiliki sedikit episode: %d\n", m[i].judul, m[i].episode);
        }
    }
}

int main(){
    Manhwa m[] = {
        {"Nano Machine", "Action, Murim", "Han-Joong-Wueol-Ya", 287, .character={"Cheon Yeo Woon"}},
        {"Legend Of Heavenly Chaos Demon", "Action, Murim", "Han-Joong-Wueol-Ya", 96, .character={"Mok Gyeongwoon"}},
        {"Absolute Sword Sense", "Action, Murim", "Han-Joong-Wueol-Ya", 157, .character={"So Woonhwi"}},
    };
    int length = sizeof(m)/sizeof(m[0]);
    fgets(m[2].judul, sizeof m[2].judul, stdin);
    fgets(m[2].genre, sizeof m[2].genre, stdin);
    fgets(m[2].penulis, sizeof m[2].penulis, stdin);
    fgets(m[2].character.MC, sizeof m[2].character.MC, stdin);
    scanf("%d", &m[2].episode);
    
    printf("=======================================\n");
    printf("List Manhwa:\n");
    for(int i = 0; i < length; i++){
        printf("|| Judul Manhwa   : %s\n", m[i].judul);
        printf("|| Karakter Utama : %s\n\n", m[i].character.MC);
        printf("|| Genre          : %s\n", m[i].genre);
        printf("|| Penulis        : %s\n", m[i].penulis);
        printf("|| Jumlah Episode : %d\n", m[i].episode);
    }
    

    cekEpisode(m, length);
    Manhwa manhwa_baru;
    strcpy(manhwa_baru.judul, "Noblesse");
    strcpy(manhwa_baru.genre, "Action, Supernatural");
    strcpy(manhwa_baru.penulis, "Son Jeho");
    strcpy(manhwa_baru.character.MC, "Son Jeho");
    manhwa_baru.episode = 540;

    printf("=======================================\n");
    printf("|| Manhwa Terbaru:\n");
    printf("|| Judul Manhwa   : %s\n", manhwa_baru.judul);
    printf("|| Karakter Utama : %s\n", manhwa_baru.character.MC);
    printf("|| Genre          : %s\n", manhwa_baru.genre);
    printf("|| Penulis        : %s\n", manhwa_baru.penulis);
    printf("|| Jumlah Episode : %d\n", manhwa_baru.episode);
    printf("=======================================\n");


    return 0;
}