#include <stdio.h>

int main() {
    // Carta A
    char estadoA[20] = "Ceara";
    char cidadeA[20] = "Fortaleza";
    int populacaoA = 9268836;
    float areaA = 148886;
    float pibA = 232.2;
    int pontosA = 20;
    float densidadeA = populacaoA / areaA;
    float pibpercapitaA = populacaoA / pibA;

    // Carta B
    char estadoB[20] = "Sao Paulo";
    char cidadeB[20] = "Santos";
    int populacaoB = 44420000;
    float areaB = 248222;
    float pibB = 3.50;
    int pontosB = 30;
    float densidadeB = populacaoB / areaB;
    float pibpercapitaB = populacaoB / pibB;

    printf("=== SUPER TRUNFO ===\n");

        printf("\n--- CARTA A ---\n");
        printf("Estado: %s\n", estadoA);
        printf("Cidade: %s\n", cidadeA);
        printf("Populacao: %d\n", populacaoA);
        printf("Area: %.2f" "km²\n", areaA);
        printf("PIB: %.2f" "bilhoês de reais\n", pibA);
        printf("Pontos Turisticos: %d\n", pontosA);
        printf("Densidade Populacional: %.3f" "hab/km²\n", densidadeA);
        printf("Pib per capita: %.2f" "reais\n", pibpercapitaA);


        printf("\n--- CARTA B ---\n");
        printf("Estado: %s\n", estadoB);
        printf("Cidade: %s\n", cidadeB);
        printf("Populacao: %d\n", populacaoB);
        printf("Area: %.2f\n", areaB);
        printf("PIB: %.2f\n", pibB);
        printf("Pontos Turisticos: %d\n", pontosB);
        printf("Densidade Populacional: %.3f" "hab/km²\n", densidadeB);
        printf("Pib per capita: %.2f" "reais\n", pibpercapitaB);
    return 0;
}
