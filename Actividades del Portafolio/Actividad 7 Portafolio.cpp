#include <iostream>
using namespace std;

struct Tpila{
    float elements[100];
    int top;
};
typedef struct Tpila Pila;

void initialize(Pila *s){
    s->top = -1;
}

bool empty(Pila *s){
    return s->top < 0;
}

void push(Pila *s, float e){
    if(s->top < 99){
        (s->top)++;
        s->elements[s->top] = e;
    }
}

void pop(Pila *s, float *e){
    if(s->top >= 0){
        *e = s->elements[s->top];
        (s->top)--;
    }
}

int main() {
    Pila unaPila;
    initialize(&unaPila);

    if(empty(&unaPila))
        cout << "Esta vacia" << endl;

    //Agregar un valor
    float x = 5.6;
    push(&unaPila, x);

    if(empty(&unaPila))
        cout << "Esta vacia" << endl;

    //Quitar un valor
    float y = 0;
    pop(&unaPila, &y);
    cout << "y: " << y << endl;

    if(empty(&unaPila))
        cout << "Esta vacia" << endl;

    //Agregar y quitar varios valores
    push(&unaPila, 1.2);
    push(&unaPila, 3.4);
    push(&unaPila, 7.8);

    while(!empty(&unaPila)){
        pop(&unaPila, &y);
        cout << "y: " << y << endl;
    }
    system("pause>nul");
}
