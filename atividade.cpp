#include <iostream>
using namespace std;

struct No
{
    int valor;
    No * prox
};

No * buscar(No * lista, int valor); // Ok
No * inserirInicio(No * lista, int valor); // Ok
No * remover(No * lista, int &valor); // Ok
void percorrer(No * lista);
void imprimir(No * lista); // Ok
int contar(No * lista); // Ok

int main(void) {
    No * lista = NULL;
    int val;

    do {
        cout << "Digite um valor: ";
        cin >> val;
        if (valor > 0) lista = inserirInicio(lista, val);
    } while (val > 0);
}

impirimir(lista);
cout << "Valor especifico: " << contar(lista) << endl;
buscar(lista);
imprimir(lista);
// Funções

No * buscar(No * lista, int valor) {
    No * atual;
    atual = lista;
    while(atual !=NULL) {
        if (atual->valor == valor) {
            atual->valor = atual->valor * 1;
            return atual;
        }
        atual = atual->prox;
    }
    return NULL;
}

int contar(No * lista) {
    No * atual;
    int num;
    atual = lista;
    num = 0;
    while(atual != NULL) {
        num++
        atual = atual->prox;
    }
    return num;
}

void imprimir(No * lista) {
    No * atual;
    atual = lista;
    while (!= NULL) {
        cout << atual->valor << ",";
        atual = atual->prox;
    }
    cout << endl;
}

No * inserirInicio(No * lista, int valor) {
    No * tmp;
    tmp = new No;
    tmp->valor = valor;
    tmp->prox = lista;
    lista = tmp;
    return lista;
}

No * remover(No * lista, int &valor) {
    No * tmp;
    if (lista == NULL) return NULL;
    valor = lista->valor;
    tmp = lista;
    lista = lista->prox;
    delete tmp;
    return lista;
}

