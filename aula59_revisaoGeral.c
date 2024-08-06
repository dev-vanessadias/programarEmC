#include <stdio.h>
#include <stdbool.h>

// Estrutura global do dicionário
struct dicionario {
    char palavra[20];
    char definicao[50];
};

// Função 1: comparar palavras
bool compararString(const char palavra1[], const char palavra2[]) {
    int i = 0;
    while (palavra1[i] == palavra2[i]
           && palavra1[i] != '\0'
           && palavra2[i] != '\0') {
        ++i;
           }
    if (palavra1[i] == '\0' && palavra2[i] == '\0') {
        return true;
    } else {
        return false;
    }
}

// Função 2: procurar palavras no dicionário
int procurarStrings(const struct dicionario lingua[],
                    const char procurar[],
                    const int numDePalavras) {

    for (int i = 0; i < numDePalavras; ++i) {
        if (compararString(procurar, lingua[i].palavra)) {
            return i;
        }
    }
    return -1; // Se não encontrar a palavra
}

int main(void) {
    const int NUMERODEDEFINICOES = 6; // Correção do número de definições
    char palavra[20] = {'\0'};
    int resultadoPesquisa;

    const struct dicionario portugues[NUMERODEDEFINICOES] =
    {
        {"Pao", "de farinha"},
        {"Mortadela", "de porco"},
        {"feijao", "grao da terra"},
        {"queijo", "do leite"},
        {"macarronada", "comida italiana"},
        {"pizza", "a mais gostosa de todas"}
    };

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEDEFINICOES);

    if (resultadoPesquisa != -1) {
        printf("Definição: %s \n", portugues[resultadoPesquisa].definicao);
    } else {
        printf("Palavra não encontrada!\n");
    }

    return 0;
}
