#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    int number;
    cout << "Введіть розмір вектора: ";
    cin >> number;
    
    vector <int> nums(number, 1);
    cout << "Початковий вектор: ";
    for (int i = 0; i < number; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
     while (true) {
        char choise;
        cout << "Хочете додати (+) чи видалити (-) елементи? Введіть 'done', щоб завершити: ";
        cin >> choise;
        if (choise == 'd') {
            break;
        }
        int count;
        cout << "Скільки елементів хочете додати чи видалити? ";
        cin >> count;
        if (choise == '+') {
            int start = max(nums.back(), 1); // 'обьект'.back() - повертає посилання на останній елемент вектора.
            for (int i = 0; i < count; i++) {
                nums.push_back(start + i);  // 'обьект'.push_back(m) – додає елемент зі значенням m у кінець вектору
            }
        } else if (choise == '-') {
            nums.erase(nums.end() - count, nums.end()); // обьект.erase(p) - удаляет элемент, на который указывает итератор p.
            //  обьект.end() - возвращает итератор, который указывает на следующую позицию после последнего элемента, то есть по сути на конец контейнера.
        }
        cout << "Поточний вектор: ";
        for (int i = 0; i < nums.size(); i++) { // 'обьект'.size() - повертає кількість елементів у векторі.
            cout << nums[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
    
 