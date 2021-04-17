#include <iostream>
#include <string>

using namespace std;



int main(){  
  
  char _2[3] = {'A', 'B', 'C'};
  char _3[3] = {'D', 'E', 'F'};
  char _4[3] = {'G', 'H', 'I'};
  char _5[3] = {'J', 'K', 'L'};
  char _6[3] = {'M', 'N', 'O'};
  char _7[4] = {'P', 'Q', 'R', 'S'};
  char _8[3] = {'T', 'U', 'V'};
  char _9[4] = {'W', 'X', 'Y', 'Z'};

  string letra = "";
  int quantidade = 0;
  cout << "Insira a quantidade de letras: ";
  cin >> quantidade; // quantas vezes a tecla será pressionada (quantas entradas terá)
  cout << "\n\n# tecla = quantidade de vezes\n\n";
  
  string palavra = "";
  for (int q = quantidade; q > 0; q--) {  
    
    cin >> letra; // Recebe a entrada do usuário de qual tecla será usada     
    
    // Essa parte converte os números de tecla a pressionar e quantas vezes pressionar em int para usar no SwitchCase
    int tecla_a_pressionar = stoi(letra.substr(1, 1));
    int vezes_a_pressionar = stoi(letra.substr(3, 1));
    
    switch (tecla_a_pressionar) {

      case 2:        
        palavra += _2[vezes_a_pressionar - 1];
        break;
      case 3:        
        palavra += _3[vezes_a_pressionar - 1];
        break;
      case 4:
        palavra += _4[vezes_a_pressionar - 1];
        break;
      case 5:
        palavra += _5[vezes_a_pressionar - 1];     
        break;
      case 6:
        palavra += _6[vezes_a_pressionar - 1];
        break;
      case 7:
        palavra += _7[vezes_a_pressionar - 1];
        break;
      case 8:
       palavra += _8[vezes_a_pressionar - 1];
        break;
      case 9:
        palavra += _9[vezes_a_pressionar - 1];
        break;
      default:
        cout << "\n\nTá tudo errado";
    }
      
  }

  cout <<"Palavra digitada: " << palavra << endl;
  return 0;

}
    

    


    
