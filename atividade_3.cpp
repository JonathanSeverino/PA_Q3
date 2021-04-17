#include <iostream>
#include <string>

using namespace std;

string frase = "";

int main(){  
  string letra = "";
  char _2[3] = {'A', 'B', 'C'};
  char _3[3] = {'D', 'E', 'F'};
  char _4[3] = {'G', 'H', 'I'};
  char _5[3] = {'J', 'K', 'L'};
  char _6[3] = {'M', 'N', 'O'};
  char _7[4] = {'P', 'Q', 'R', 'S'};
  char _8[3] = {'T', 'U', 'V'};
  char _9[4] = {'W', 'X', 'Y', 'Z'};

  int quantidade = 0;
  cout << "Insira a quantidade de letras: ";
  cin >> quantidade; // quantas vezes a tecla será pressionada (quantas entradas terá)

  for (int q = quantidade; q > 0; q--) {
    cout << "\n\n# tecla = quantidade de vezes\n\n";
    cin >> letra; // Recebe a entrada do usuário de qual tecla será usada
    
    cout << "\nTecla " << letra.substr(1, 1); //separa qual tecla será pressionada
    cout << "\nvezes " << letra.substr(3, 1); //separa quantas vezes será pressionada

    // Essa parte converte os números de tecla a pressionar e quantas vezes pressionar em int para usar no SwitchCase
    int tecla_a_pressionar = stoi(letra.substr(1, 1));
    int vezes_a_pressionar = stoi(letra.substr(3, 1));
    
    switch (tecla_a_pressionar) {
      case 2:
        cout << "\n\n" << _2[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _2[vezes_a_pressionar - 1];
        break;
      case 3:
        cout << "\n\n" << _3[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _3[vezes_a_pressionar - 1];
        break;
      case 4:
        cout << "\n\n" << _4[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _4[vezes_a_pressionar - 1];
        break;
      case 5:
        cout << "\n\n" << _5[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _5[vezes_a_pressionar - 1];        
        break;
      case 6:
        cout << "\n\n" << _6[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _6[vezes_a_pressionar - 1];
        break;
      case 7:
        cout << "\n\n" << _7[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _7[vezes_a_pressionar - 1];
        break;
      case 8:
        cout << "\n\n" << _8[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _8[vezes_a_pressionar - 1];
        break;
      case 9:
        cout << "\n\n" << _9[vezes_a_pressionar - 1] << "\n\n";
        frase = frase + _9[vezes_a_pressionar - 1];
        break;
      default:
        cout << "\n\nTá tudo errado";
    }
    cout << frase<< endl;
  
  }

  return 0;

}
    

    


    
