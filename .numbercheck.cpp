#include <iostream>
using  namespace std;

int verifNum (int a, int b, int c, int d, int e, int f){
    int soma;
    soma = a+b+c+d+e+f;
    int valor;
    
    if ((a==b and b==c) or (d==e and e==f)){
        valor = 15;
        cout << valor << endl;
    }
    else if (soma%f==0){
        cout << "Alerta" << endl;
        
    }
    else{
        cout << "Nenhuma das alternativas." << endl;
    }
    cout << "Soma: " << soma << endl;
    
    
    return valor;
    
}

int main()
{
    
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int valor;
    
    cout << "Digite o 1º número: " << endl;
    cin >> a;
    cout << "Digite o 2º número: " << endl;
    cin >> b;
    cout << "Digite o 3º número: " << endl;
    cin >> c;
    cout << "Digite o 4º número: " << endl;
    cin >> d;
    cout << "Digite o 5º número: " << endl;
    cin >> e;
    cout << "Digite o 6º número: " << endl;
    cin >> f;
    
    valor=verifNum(a, b, c, d, e, f);
    
    if (valor==15){
        cout << "Ótimo" << endl;
        
    }
    else{
        cout << "Excelente" << endl;
    }
    return 0;
}
