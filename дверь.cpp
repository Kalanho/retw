#include <iostream>
using namespace std;
void fil(bool a[]) {// функция принимает массив doors, который хранит состояние дверей
    for (int i = 1; i <= 100; i++) {// проходим по всем дверям
        for (int j = i; j <= 100; j += i) {// проходим по дверям с шагом i
            a[j - 1] = !a[j - 1]; // меняем состояние двери
        }
    }
}

int main() {
    bool a[100] = { false }; // создаем массив состояний дверей(изначально все закрыты)
   fil(a);//вызываем функцыю

    cout << "Open doors:";

    for (int i = 0; i < 100; i++) {
        if (a[i]) {
            cout << " " << i + 1;
        }
    }

    cout << endl;
    return 0;
}
