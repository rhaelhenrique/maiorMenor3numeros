#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int a, b, c, menor, maior;
    float media;
    float media2;
    int mediana;
    
    printf("Com este algoritmo vamos descobrir qual de 3 números é o maior e qual é o menor, as médias e a mediana. \n");
    
    printf("Digite um número para A: \n");
    scanf("%d", &a);
    printf("Digite um número para B: \n");
    scanf("%d", &b);
    printf("Digite um número para C: \n");
    scanf("%d", &c);
    
    if (a>b){
    if(a>c)
      maior = a;
      else
        maior = c;
    }
    else {
    if(b>c)
      maior = b;
      else
        maior = c;
    }
    
    if(a<b){
    if(a<c)
      menor = a;
    else
      menor = c;
    }
    else {
    if(b<c)
      menor = b;
      else
        menor = c;
    }
    
    if (maior == a && menor == b){
      mediana = c;
    }
    
    if (maior == a && menor == c){
      mediana = b;
    }
    
    if (maior == b && menor == c){
      mediana = a;
    }
    
    if (maior == b && menor == a){
     mediana = c;
    }
    
    if (maior == c && menor == a){
      mediana = b;
    }
    
    if (maior == c && menor == b){
      mediana = a;
    }
    
    media = (a + b + c) / 3.0;
    media2 = (maior + menor) / 2.0;
    
    printf("Ok, valores encontrados: \n");
    printf("Menor %d \nMaior %d \n", menor, maior);
    printf("Média dos 3: %.2f \n", media);
    printf("Média de Maior e Menor: %.2f \n", media2);
    printf("A mediana é: %d", mediana);
    
    
    return (0);
}