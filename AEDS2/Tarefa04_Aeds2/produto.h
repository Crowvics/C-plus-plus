#include <string>
#include <iostream>

using namespace std;

class Produto {
    public:
        Produto();
        void setCusto(float custo);
        float getCusto();

    private:
        string nome;
        float custo;
        float preco;
        int estoque;
};
