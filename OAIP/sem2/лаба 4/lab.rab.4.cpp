#include <iostream>

using namespace std;

struct Stack {
	int info;
	Stack* next, * prev;
} *top, * down, * t;

struct N_Stack {
	int n_info;
	N_Stack* n_next;
} *n_top, * k;

void CreateStack(Stack** begin, Stack** down, int in) { //������� �������� ������� ��������
	t = new Stack;
	t->info = in;
	t->next = t->prev = NULL;
	*begin = *down = t;
}

void InStack(int kod, Stack** begin, Stack** down, int in) {//������� ���������� ���������
	t = new Stack;
	t->info = in;
	if (kod == 0) {
		t->prev = NULL;
		t->next = *begin;
		(*begin)->prev = t;
		*begin = t;
	}
	else {
		t->next = NULL;
		t->prev = *down;
		(*down)->next = t;
		*down = t;
	}
}

void View(int kod, Stack* t) {//������� ��������� ��������� ������
	while (t != NULL) {
		cout << t->info << endl;
		if (kod == 0) t = t->next;
		else t = t->prev;
	}
}

void Del_All(Stack** p) {//������� �������� �����
	while (*p != NULL) {
		Stack* t = *p;
		*p = (*p)->next;
		delete t;
	}
}

N_Stack* New_Stack(Stack* p) {// ������� �������� �����, ������������ �� �������
	Stack* t = p->next;
	Stack* min = p;
	N_Stack* k = new N_Stack;
	while (t) { //���� t ���������� ���� ����������� �������
		if (t->info < min->info) {
			min = t;
		}
		t = t->next;
	}
	if ((p == min) || (p->next == min)) { //��������� ���� �� �������� ����� �������� � ����������� ���������
		cout << "��������� ����� �������� � ����������� ��������� - ���" << endl;
	}
	else { //���� ����� �������� ����, �� ������� �� �� �����
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
	int in, n, kod, kod1;
	while (true) {
		cout << "\n\t�������� - 1.\n\t���������� - 2.\n\t�������� - 3.\n\t�������� - 4.\n\t���������� ������� - 5.\n\tExit - 0. : ";//������� �� ����� ���� ������ �������
		cin >> kod;
		switch (kod) {
		case 1:
			if (top != NULL) {
				cout << "�������� ������!" << endl;
				break;
			}
			cout << "�������� ������� �������� = ";
			cin >> in;
			CreateStack(&top, &down, in);
			cout << "������ ������ ������� ������� = " << top->info << endl;
			break;
		case 2:
			cout << "�������� � ������ - 0, �������� � ����� - 1 : ";
			cin >> kod1;
			cout << "���������� ����������� ���������: ";
			cin >> n;
			for (int i = 1; i <= n; i++) {
				cout << "������� = ";
				cin >> in;
				InStack(kod1, &top, &down, in);
			}
			if (kod1 == 0)
				t = top;
			else
				t = down;
			if (kod1 == 0)
				cout << "� ������ ��������� " << n << " ��������";
			else
				cout << "� ����� ��������� " << n << " ��������";
			break;
		case 3:
			if (!top) {//���������, ���� �� �������� � �����
				cout << "������� �����!" << endl;
				break;
			}
			cout << "�������� � ������ - 0, �������� � ����� - 1 : ";
			cin >> kod1;
			if (kod1 == 0) {
				t = top;
				cout << "--- ������ ������� ---" << endl;
			}
			else {
				t = down;
				cout << "--- ����� ������� ---" << endl;
			}
			View(kod1, t);
			break;
		case 4:
			Del_All(&top);
			cout << "������ �����������!" << endl;
			break;
		case 5:
			New_Stack(top);
			cout << "������ �������� ����������" << endl;
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