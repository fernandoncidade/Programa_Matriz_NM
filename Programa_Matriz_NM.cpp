/*1. (maxcols) Faça um programa que leia do usuário uma matriz N × M (N e M definidos via
diretiva #define) e preencha um vetor de M elementos, tal que a posição i do vetor contenha o
maior valor da coluna i da matriz. Ao final, o programa deve imprimir o vetor*/

#include <iostream>
using namespace std;

#define M 2
#define N 2

void lerMatriz (int Mat[][M]){
    for (int l=0; l < N; l++)
        for (int c=0; c < M; c++)
            cin >> Mat[l][c];
}

void vetMaiorcoluna (int Mat[][M],int Vet[]){   //insere em Vet o maior valor de cada coluna nas linhas i do vetor
    Vet[0]=Mat[0][0];
    for (int i=0; i < N; i++){
        for (int j=0; j < M; j++){
            if(Vet[i]<= Mat[j][i]) Vet[i]=Mat[i][j];
        }
    }
}

void imprimirVet (int Vet[]){
    for (int l=0; l < M; l++){
        cout << Vet[l] <<"  ";
    }
}

int main(){
    int Mat[N][M];
    int Vet[M];
    cout<<"digite  a matriz: "<<endl;
    lerMatriz(Mat);
    vetMaiorcoluna(Mat,Vet);
    cout<<"o vetor eh: ";
    imprimirVet(Vet);
    return 0;
}
