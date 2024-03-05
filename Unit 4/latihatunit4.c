#include <stdio.h>
int sisi;
int kPersegi(int sisi){
    return 4 * sisi;
}
int lPersegi(int sisi){
    return sisi * sisi;
}
int vKubus(int sisi){
    return sisi * sisi * sisi;
}

int main(){
    printf("masukan sisi : ");
    scanf(" %d", &sisi);
    printf("keliling persegi : %d \n", kPersegi(sisi));
    printf("luas persegi : %d \n", lPersegi(sisi));
    printf("volume kubus : %d \n", vKubus(sisi));
}