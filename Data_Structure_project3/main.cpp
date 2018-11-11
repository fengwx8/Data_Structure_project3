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



void ShowOption(){
    
    printf("0)  Show me the Family Tree.\n");
    printf("1)  I give birth to a child.\n");
    printf("2)  I have adopted a child.\n");
    printf("3)  I have adopted a relative child.\n");
    printf("4)  I have got married.\n");
    printf("5)  I divorced my wife.\n");
    printf("6)  I died.\n");
    printf("7)  I'm gonna to do gene test.\n");
    printf("8)  I'd like to append brief introduction.");


    printf("What Happens to you? $ ");
}

void Initial()
{  
/*    // if FuYao want to recover the total family tree from txt , code here.
    Member ancestor("GaoJirong", 1949, -1, Member::MARRIED, 0);
    tree = new FamilyTree(ancestor);
*/
	preprocessing();
	cout << ui;
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
/*
void InputChild(string name ,bool fromRelavtive)
{
    string child_name;int birthyear;
    string child_sex;
    printf("What's your child's name ? :"); cin>>child_name;
    printf("What's your child's birthyear ?:");cin>>birthyear;
    printf("Is your baby a boy or a girl ?: "); cin>>child_sex;
    Member *baby = new Member(child_name, birthyear, child_sex);
    tree->GiveBirth(name, child_name, birthday,); // father 's name , baby's info
//FamilyTree::GiveBirth();
    if ( fromRelavtive){
        string relative_name;
        printf("Who is the child adopted from ? :");cin>>relative_name;
        tree->RemoveChild(relative_name, bab);
    }
}*/
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
    /*printf("+----------------------------+\n");
    printf("|  The Family Tree of Gao    |\n");
    printf("+----------------------------+\n");
    
    while (true){
        string name;
        printf("What's your name ?:\t");cin>>name;
        ShowOption();
        int op; scanf("%d", &op);
        if ( op==0 ){
            tree->PrintTree();
        }   else
        if ( op==1){
            InputChild(name,0);
        }   else
        if ( op==2){
            InputChild(name,0);
        }
        if ( op==3){
            InputChild(name,1);
        }
        if ( op==4){
            string wifeName;
            printf("Please Enter your wife's name. :"); cin>>wifeName;
            tree->GetMarried(name, wifeName);
        }
        if ( op==5){
            string checker;
            printf("Did you sure ? (y/n): "); cin>>checker;
            if ( checker=="y") tree->Divorce(name);
        }  
        if ( op==6){
            tree->Die(name);
            printf("OOOOhhh ~~~ I'm sorry to hear that : ");
        }  
        if ( op==7){
            string child_name;
            printf("Which child did you want to test ? : ");
            cin>>child_name;
            double rate = rand()/32768.0;
// the men was 10% probility to be green 
            if ( rate < 0.1){
                printf("I'm sorry , the child is not yours~~. \n");
                tree->RemoveChild(name, child_name);
            }   else 
                printf("Congratulation , the child is yours !!\n");
        }
        if ( op==8){
            printf("Please write your introduction below, NO NEWLINE before the end.\n");
            string info; cin>>info;
            tree->appendIntroduction(name, info);
        }  
    }*/
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