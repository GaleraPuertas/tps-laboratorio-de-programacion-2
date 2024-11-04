#include <iostream>
#include <vector>

using namespace std;

class CNumeros {
public:
  
    vector<int> obtenerNumerosPerfectos(int N) {
        vector<int> perfectos;
        for (int i = 1; i <= N; ++i) {
            if (esNumeroPerfecto(i)) {
                perfectos.push_back(i);
            }
        }
        return perfectos;
    }

private:

    bool esNumeroPerfecto(int num) {
        if (num <= 1) {
            return false;
        }
        int sumaDivisores = 1; 
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                sumaDivisores += i;
                if (i != num / i) {
                    sumaDivisores += num / i;
                }
            }
        }
        return sumaDivisores == num;
    }
};

int main() {
    int N;
    cin >> N;

    CNumeros numeros;
    vector<int> perfectos = numeros.obtenerNumerosPerfectos(N);

    for (int num : perfectos) {
        cout << num << endl;
    }

    return 0;
}



