#include<stdio.h>
int main ()
{

    float n1, n2, n3,
          media;
    int frequencia;

    printf("Digite suas tres notas: ");
    scanf("%f %f %f", &n1,&n2,&n3);

    printf("Digite sua frequencia:");
    scanf("%d", &frequencia);

    media = (n1 + n2 + n3) / 3;

    if((media > 8) && (frequencia >= 75))
        printf("O estudante foi Aprovado Direto pois teve sua media %f e frequencia %d%%", media, frequencia);

    else if((media <=8) && (frequencia >= 75))
        printf("O estudante foi Aprovado com Distinçao pois teve sua media %f e frequencia %d%%", media, frequencia);

    else if((media >= 4) && (media < 6) && (frequencia >= 75)
            ||
            (media >= 6) && (frequencia < 75)
            ||
            (media >= 4) && (frequencia >50) && (frequencia < 75))
        printf("O estudante Vai para Final pois teve sua media %f e frequencia %d%%", media, frequencia);

    else

        printf("O estudante foi Reprovado Direto pois teve sua media %f e frequencia %d%%", media, frequencia);

    return 0;
}
