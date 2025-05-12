#include <iostream>
#include <locale>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    // Constantes ajustáveis (como em jogos profissionais)
    const int DANO_BASE = 10;
    const int BONUS_MAX = 5;
    const int CHANCE_CRITICO = 15; // 15%

    // Cálculos
    int bonus = rand() % (BONUS_MAX + 1); // 0-5
    bool critico = (rand() % 100) < CHANCE_CRITICO;
    int danoTotal = critico ? (DANO_BASE + bonus) * 2 : DANO_BASE + bonus;

    // Saída detalhada
    cout << "\n  --- Sistema de Dano --- " << endl;
    cout << "Dano base: " << DANO_BASE << endl;
    cout << "Bônus: " << bonus << endl;
    if (critico) cout << "CRÍTICO! ";
    cout << "Dano total: " << danoTotal << endl;

    return 0;
}