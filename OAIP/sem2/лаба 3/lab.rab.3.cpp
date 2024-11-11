#include <iostream>
#include <ctime>

using namespace std;

struct Stack {
	int info;
	Stack* next;
} *top, *t;

struct N_Stack {
	int n_info;
	N_Stack* n_next;
} *k;

Stack* InStack(Stack* p, int in) {//функция добавления элементов
	Stack* t = new Stack;
	t->info = in;
	t->next = p;
	return t;
}

void View(Stack* p) {//функция просмотра стека
	Stack* t = p;
	while (t != NULL) {
		cout << " " << t->info << endl;
		t = t->next;
	}
}

void Del_All(Stack** p) {//функция удаления стека
	while (*p != NULL) {
		Stack* t = *p;
		*p = (*p)->next;
		delete t;
	}
}

N_Stack* New_Stack(Stack* p) {// функция создания стека, необходимого по заданию
	Stack* t = p->next;
	Stack* min = p;
	N_Stack* k = new N_Stack;
	while (t) { //пока t существует ищем минимальный элемент
		if (t->info < min->info) {
			min = t;
		}
		t = t->next;
	}
	if ((p == min) || (p->next == min)) { //проверяем есть ли элементы между вершиной и минимальным элементом
		cout << "Элементов между вершиной и минимальным элементом - нет" << endl;
	}
	else { //если такие элементы есть, то выводим их на экран
		Stack* i = p->next;
		while (i->info != min->info) {
			k->n_info = i->info;
			cout << " " << k->n_info;
			i = i->next;
			k->n_next = new N_Stack;
		}
		cout << endl;
	}
	return k;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	int i, in, n, kod;
	while (true) {
		cout << "\n\tСоздание - 1.\n\tДобавление - 2.\n\tПросмотр - 3.\n\tУдаление - 4.\n\tВыполнение задания - 5.\n\tExit - 0. : ";//выводим на экран меню выбора функции
		cin >> kod;
		switch (kod) {
		case 1: case 2:
			if (kod == 1 && top != NULL) { //проверяем был ли до этого создан стек
				cout << "Очистите память!" << endl;
				break;
			}
			cout << "Введите количество = ";
			cin >> n;
			srand(time(NULL));
			for (i = 1; i <= n; i++) { //записываем в стек случайные числа от -20 до 20
				in = rand() % 41 - 20;
				top = InStack(top, in);
			}
			if (kod == 1)
				cout << "Создано " << n << " элементов" << endl;
			else
				cout << "Добавлено " << n << " элементов" << endl;
			break;
		case 3:
			if (!top) {//проверяем, есть ли элементы в стеке
				cout << "Стек пуст!" << endl;
				break;
			}
			cout << "--- Стек ---" << endl;
			View(top);
			break;
		case 4:
			Del_All(&top);
			cout << "Память освобождена!" << endl;
			break;
		case 5:
			New_Stack(top);
			cout << "Данные элементы перенесены" << endl;
			break;
		case 0:
			if (top != NULL)
				Del_All(&top);
			while (k != NULL) {
				N_Stack* d = k;
				k = k->n_next;
				delete d;
			}
			return;
		}
	}
}