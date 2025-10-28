#include <iostream>
using namespace std;

struct Cartinha {
    string nome_da_crianca;
    string presente_pedido;
};

struct Brinquedo {
    string nome_do_brinquedo;
    int quantidade_disponivel;
    int quantidade_pedida;
};

int main(){
    int num_cartinhas;
    int num_brinquedos;
    cin >> num_cartinhas;
    Cartinha cartinha[num_cartinhas];

    for(int i = 0; i<num_cartinhas; i++)
        cin >> cartinha[i].nome_da_crianca >> cartinha[i].presente_pedido;
    
    cin >> num_brinquedos;
    Brinquedo brinquedo[num_brinquedos];

    for (int i = 0; i<num_brinquedos; i++){
        cin >> brinquedo[i].nome_do_brinquedo >> brinquedo[i].quantidade_disponivel;
        brinquedo[i].quantidade_pedida = 0;
    }

    for (int i = 0; i < num_cartinhas; i++){
        for(int j = 0; j < num_brinquedos; j++){
            if(cartinha[i].presente_pedido == brinquedo[j].nome_do_brinquedo)
                brinquedo[j].quantidade_pedida++;
        }
    }

    for(int i = 0; i < num_brinquedos; i++)
        if(brinquedo[i].quantidade_disponivel < brinquedo[i].quantidade_pedida) cout << brinquedo[i].nome_do_brinquedo << " ";
    
    cout << endl;

    return 0;
}