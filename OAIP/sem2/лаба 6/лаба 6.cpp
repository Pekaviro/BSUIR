#include <iostream>

using namespace std;

struct Tree {
    int info;
    Tree* left, * right;
} *root;

Tree* List(int inf) {
       Tree* t = new Tree; 
       t->info = inf;
       t->left = t->right = NULL;
       return t;
}

void Add_List(Tree* root, int key) {
    Tree* prev, * t; // prev – указатель предка нового листа
    bool find = true;
    t = root;
    while (t && find) {
        prev = t;
        if (key == t->info) {
            find = false; // Ключ должен быть уникален
            cout << "Повторяющийся ключ!";
        }
        else
            if (key < t->info) t = t->left;
            else t = t->right;
    }
    if (find) { // Нашли нужное место
        t = List(key); // Создаем новый лист
        if (key < prev->info) prev->left = t;
        else prev->right = t;
    }
}

void Make_Blns(Tree** p, int n, int k, int* a) {
    if (n == k) {
        *p = NULL;
        return;
    }
    else {
        int m = (n + k) / 2;
        *p = new Tree;
        (*p)->info = a[m];
        Make_Blns(&(*p)->left, n, m, a);
        Make_Blns(&(*p)->right, m + 1, k, a);
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    do {
        cout << "Меню:\n 1. Добавить в дерево новую запись.\n 2. Сбалансировать дерево. 3. Найти информацию по заданному ключу.\n 4. Удалить из дерева поиска информацию с заданным ключом.\n 5. Распечатать информацию прямым обходом.\n 6. Распечатать информацию обратным обходом.\n 7. Распечатать информацию в порядке возрастания ключа.\n 8. Определить число листьев на каждом уровне дерева.\n 9. Выход.";
    
        cin >> n;
        if (cin.good()) {
            switch (n) {
            case 1:
                cout << "Введите значение узла";
                int key;
                cin >> key;

                if (root == NULL)
                    root = List(key);
                else
                    Add_List(root, key);

            case 2:
               // void Make_Blns(root, 0, int k, int* a)
            }
        }
    } while (n != 0);

   
}
