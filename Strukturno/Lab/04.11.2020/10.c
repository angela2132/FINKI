// Да се напише програма во која во даден опсег на природни броеви [m,n],
// ќе се најдат и отпечатат во нов ред сите броеви 
// за кои важи дека збирот на бројот со неговата слика
// (број кој ги има истите цифри, но во обратен редослед) 
// е помал или еднаков на двојната вредност на бројот. На крај да се отпечати и бројот на вакви броеви.

#include <stdio.h>

int main(){
    int a,b,brojac=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        int slika = 0, ph=i;
        while(ph!=0){
            slika+=ph%10;
            slika*=10;
            ph/=10;
        }
        slika/=10;
        if(i+slika<=2*i){
            brojac++;
            printf("%d\n",i);
        }
    }
    printf("Vkupno: %d",brojac);
    
}