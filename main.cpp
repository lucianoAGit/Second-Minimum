#include <iostream> 
#include <iomanip> 
#include "BSTreeTemplate.h" 
using namespace std;
int main() { 
BinarySearchTree<int> t; 
int e;
cout << "Arvore " << endl; 
cout << "--------------------------------------------" << endl; 
t.print(); 
cout << "--------------------------------------------" << endl; 
cout << "Elemento? (>0 insere, <0 remove, =0 termina) "; 
cin >> e; 
while(e != 0) { system ("CLS"); //clears the screen 
if(e > 0) { 
cout << "Inserindo " << e << endl; 
t.insert(e); 
cout << boolalpha << "Busca " << t.search(e) << endl; 
} else { 
cout << "Removendo " << -e << endl; 
t.remove(-e); 
cout << boolalpha << "Busca " << t.search(-e) << endl; 
} 
cout << "Arvore " << endl; 
cout << "direcao---raiz------>>>-------folhas--------" << endl; 
t.print(); 
cout << "--------------------------------------------" << endl; 
cout << "Nos = " << t.nodes() << " Folhas = " << t.leaves() << " Altura = " << t.height() << endl; 
cout << "Min = " << t.minimum() << " Max = " << t.maximum() << endl; 
cout << "2o Min = " << t.secondMinimum() << endl; 
cout << "Elementos = " << t.toString() << endl; 
cout << "Elemento? (>0 insere, <0 remove, =0 termina) "; 
cin >> e; 
} 
cout << "Arvore Final" << endl; 
cout << "--------------------------------------------" << endl; 
t.print(); 
cout << "--------------------------------------------" << endl; 
return 0; 
}

