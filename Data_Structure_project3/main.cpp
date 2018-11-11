#include <iostream>
#include <string>
#include <map>

#include "IOCtr.h"
#include "FamilyTree.h"
#include "Member.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::map;



void Initial()
{  
	preprocessing();
	cout << ui;
	if (shelf.empty())
	{
		cout << "���½�һ������:\n";
		cout << "���������:";
		string temp_family;
		cin >> temp_family;
		cout << "����������:";
		string anc_name;
		cin >> anc_name;

	}
	cout << "�Ƿ��½\n"
		<< "0.��\n"
		<< "1.��\n";
	int order;
	cin >> order;
	if (order)
	{
		if (sign_in() == tourist)
		{
			cout << "���޴���\n";
		}
	}
}
void model_1();
void model_2();
void model_3();
int main(){

    Initial();
	int ok = 1;
	while(ok)
	switch (authority)
	{
	case patriarch:
		model_1();
		break;
	case clansman:
		model_2();
		break;
	case tourist:
		model_3();
		break;
	default:

		break;
	}
	if (save_all())
		cout << "Bye!\n";
	else
		cerr << "Error!\n";
    return 0;
}
void model_1()
{
	int ok = 1;
	const FamilyTree& cur_tree = shelf[hometown];

	while (ok)
	{
		cout << username << "�峤�����ã�\n";
		cout << "��ѡ�����:\n"
			<< "0.�˳�\n"
			<< "1.���\n"
			<< "2.���\n"
			<< "3.������\n"
			<< "4.�Ƴ�����\n"
			<< "5.����\n"
			<< "6.��������\n"
			<< "7.�鿴���������Ϣ\n"
			<< "8.�ޱ�����\n"
			<< "9.�����峤\n";
		string name, birthday, marriage_date;
		Member* people = nullptr;
		int order;
		cin >> order;
		switch (order)
		{
		case 1:
			cout << "��������ż����:";
			cin >> name;
			cout << "";
			cin >> birthday;
			cout << "";
			cin >> marriage_date;
			shelf[hometown].GetMarried(username, name, birthday, marriage_date);
			cout << "ף" << username << " " << name << "����úϣ�\n";
			break;
		case 2:
			cout << "�þۺ�ɢ~\n";
			shelf[hometown].Divorce(username);
			break;
		case 3:

			break;
		case 4:
			cout << "�����뺢������:\n";
			cin >> name;
			shelf[hometown].RemoveChild(username,name);

			break;
		case 5:
			cout << "�ڰ�˳��\n";
			shelf[hometown].Die(username);
			break;
		case 6:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second.Search(name);
				if (people != nullptr)
				{
					cout << people->Getmessage();
				}
				else
				{
					cout << "���޴���\n";
				}
			}
			break;
		case 7:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name].getMessage();
			else
				cout << "�˼��ײ�����\n";
			break;
		case 8:
			cout << "���׵ı䶯:\n";

			break;
		case 9:
			cout << "�����������峤����:";
			cin >> name;
			shelf[hometown].SetPatriarch(name);
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
}
void model_2()
{
	int ok = 1;
	const FamilyTree& cur_tree = shelf[hometown];
	while (ok)
	{
		cout << username << "�����ã�\n";
		cout << "��ѡ�����:\n"
			<< "0.�˳�\n"
			<< "1.���\n"
			<< "2.���\n"
			<< "3.������\n"
			<< "4.�Ƴ�����\n"
			<< "5.����\n"
			<< "6.��������\n"
			<< "7.�鿴���������Ϣ\n";
		string name, birthday, marriage_date;
		Member* people = nullptr;
		int order;
		cin >> order;
		switch (order)
		{
		case 0:
			ok = 0;
			break;
		case 1:
			cout << "��������ż����:";
			cin >> name;
			cout << "";
			cin >> birthday;
			cout << "";
			cin >> marriage_date;
			shelf[hometown].GetMarried(username, name, birthday, marriage_date);
			cout << "ף" << username << " " << name << "����úϣ�\n";
			break;
		case 2:
			cout << "�þۺ�ɢ~\n";
			shelf[hometown].Divorce(username);
			break;
		case 3:

			break;
		case 4:
			cout << "�����뺢������:\n";
			cin >> name;
			shelf[hometown].RemoveChild(username,name);

			break;
		case 5:
			cout << "�ڰ�˳��\n";
			shelf[hometown].Die(username);
			break;
		case 6:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second.Search(name);
				if (people != nullptr)
				{
					cout << people->Getmessage();
				}
				else
				{
					cout << "���޴���\n";
				}
			}
			break;
		case 7:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name].getMessage();
			else
				cout << "�˼��ײ�����\n";
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}

}
void model_3()
{
	int ok = 1;
	while (ok)
	{
		cout << "��ǰ����ļ�����:\n";
		for (auto item : shelf)
		{
			cout << "��" << item.first << "��" << endl;
		}
		cout << "��ѡ�����:\n"
			<< "0.�˳�\n"
			<< "1.��������\n"
			<< "2.�鿴���������Ϣ\n";
		int order = 0;
		cin >> order;
		string name;
		Member* people = nullptr;
		switch (order)
		{
		case 0:
			ok = 0;
		case 1:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second.Search(name);
				if (people != nullptr)
				{

				}
				else
				{
					cout << "���޴���\n";
				}
			}
			break;
		case 2:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name].getMessage();
			else
				cout << "�˼��ײ�����\n";
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}

}