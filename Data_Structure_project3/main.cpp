#include <iostream>
#include <string>
#include <map>

#include "IOCtr.h"

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::cerr;
using std::map;


string ui = "　　　　　　　　　　。。。。　　　　　　　　　　　　　　　　　　　　　　　。。。　　　　。。。　　　　　\n"
"　　　　　　　　　　　。。。。　　　　　　　　　　　　　　。。　　　　　　　。。。　　。。。。　　　　　\n"
"　　　　。。　　　　　　。。。　　　　　　　。　　　　　　。。。　　　　　　。。。　　。。　　　　　　　\n"
"　　　。。。。。。。。。。。。。。。。。。。。。　　　　　　。。。　　　　　。。。　。。。　　。。。　　\n"
"　　　。。。　　　　　　　　　　　　　　　。。。。　　　　　。。。　。。。。。。。。。。。。。。。。。　\n"
"　　。。。　　　　　　　　　　　　　　　。。。　　　　　　　　　　　　　　　　。。　。。。　　。　　　　\n"
"　　。。。　　　　　　　　　　　　。。。。。　　　　　　　　　　　　　。。　　。。　。。。　。。。　　　\n"
"　　　　　。。。。。。。。。。。。。。。。　　　　　　　　　　　　　　。。。　。。　。。。　。。。。　　\n"
"　　　　　　　　　。。。。　　　　　　　　　　　　　　　　　。。。　　　。。。。。　。。。。。。　　　　\n"
"　　　　　　　　。。。。。　　　　　。。。　　　　　。。。。。。。　　　。。。。。　。。。。。　　　　　\n"
"　　　　　　　。。。　。。。　　　。。。。。　　　　　　　　。。。　　　　　　。。　。。。。　　。。。　\n"
"　　　　　。。。　　　。。。。。。。。　　　　　　　　　　　。。。。。。。。。。。。。。。。。。。。。。\n"
"　　　。。。。　　　。。。。。。。。　　　　　　　　　　　　。。。　　　　　　　　　　　　　　　　　　　\n"
"　。。。。　　　　。。。　。。。。。　　　　　　　　　　　　。。。　　　。。　　　　　　　　。。　　　　\n"
"　　　　　　　。。。　　。。。。。。。　　　　　　　　　　　。。。　　　。。。。。。。。。。。。。　　　\n"
"　　　　　　。。。　　。。。。。　。。　　　　　　　　　　　。。。　　　。。。　　　　　　。。。　　　　\n"
"　　　　。。。　　　。。。。。。　。。。　　　　　　　　　　。。。　。。。。。　　　　　　。。。　　　　\n"
"　　。。。　　　　。。。。　。。。　。。。　　　　　　　　　。。。。。。。。。　　　　　　。。。　　　　\n"
"　　　　　　　　。。。　　　。。。　　。。。。　　　　　　　。。。。。　。。。。。。。。。。。。　　　　\n"
"　　　　　　。。。　　　　。。。。　　　。。。。。　　　　　。。。。　　。。。　　　　　　。。。　　　　\n"
"　　　　。。。。　　　　　。。。　　　　　。。　　　　　　　。。。　　　。。。　　　　　　。。。　　　　\n"
"　　。。。。　　　。。。。。。。　　　　　　　　　　　　　　。。。　　　。。。。。。。。。。。。　　　　\n"
"　。。　　　　　　　　。。。。　　　　　　　　　　　　　　　　　　　　　。。。　　　　　　。。。　　　　\n"
"　　　　　　　　　　　　。　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　 \n";

void Initial()
{
	cout << ui;
	cout << "散哭聞喘社惇砿尖罷周��\n";
	cout << "萩諒頁倦鞠遜?\n";
	cout << "0.倦\n"
		<< "1.頁\n";
	int order;
	cin >> order;
	if (order)
	{
		if (sign_in() == tourist)
		{
			cout << "臥涙緩繁\n";
		}
	}
}
void model_1();
void model_2();
void model_3();
int main() {

	preprocessing();
	Initial();
	int ok = 1;
	while (ok)
	{
		Initial();
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
		cout << "曜竃殻會or嶷仟鞠遜?\n";
		cout << "0.曜竃\n"
			<< "1.鞠村\n";

		cin >> ok;
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
	const FamilyTree* cur_tree = shelf[hometown];

	while (ok)
	{
		cout << username << "怛海��艇挫��\n";
		cout << "萩僉夲荷恬:\n"
			<< "0.曜竃\n"
			<< "1.潤脂\n"
			<< "2.宣脂\n"
			<< "3.伏頃徨\n"
			<< "4.卞茅頃徨\n"
			<< "5.棒蘭\n"
			<< "6.臥孀侖兆\n"
			<< "7.臥心社怛児云佚連\n"
			<< "8.俐園怛惇\n"
			<< "9.踐斑怛海\n";
		string name, birthday, marriage_date;
		Member* people = nullptr;
		int order;
		cin >> order;
		switch (order)
		{
		case 1:
			cout << "萩補秘塘甜侖兆:";
			cin >> name;
			cout << "";
			cin >> birthday;
			cout << "";
			cin >> marriage_date;
			shelf[hometown]->GetMarried(username, name, birthday, marriage_date);
			cout << "廝" << username << " " << name << "為定挫栽��\n";
			break;
		case 2:
			cout << "挫詔挫柊~\n";
			shelf[hometown]->Divorce(username);
			break;
		case 3:

			break;
		case 4:
			cout << "萩補秘頃徨侖兆:\n";
			cin >> name;
			shelf[hometown]->RemoveChild(username, name);

			break;
		case 5:
			cout << "准挨乏延\n";
			shelf[hometown]->Die(username);
			break;
		case 6:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second->Search(name);
				if (people != nullptr)
				{
					cout << people->Getmessage();
				}
				else
				{
					cout << "臥涙緩繁\n";
				}
			}
			break;
		case 7:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name]->Tree_to_String();
			else
				cout << "緩社惇音贋壓\n";
			break;
		case 8:
			cout << "怛惇議延強:\n";

			break;
		case 9:
			cout << "萩補秘和販怛海侖兆:";
			cin >> name;
			shelf[hometown]->SetPatriarch(name);
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
	const FamilyTree* cur_tree = shelf[hometown];
	while (ok)
	{
		cout << username << "��艇挫��\n";
		cout << "萩僉夲荷恬:\n"
			<< "0.曜竃\n"
			<< "1.潤脂\n"
			<< "2.宣脂\n"
			<< "3.伏頃徨\n"
			<< "4.卞茅頃徨\n"
			<< "5.棒蘭\n"
			<< "6.臥孀侖兆\n"
			<< "7.臥心社怛児云佚連\n";
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
			cout << "萩補秘塘甜侖兆:";
			cin >> name;
			cout << "";
			cin >> birthday;
			cout << "";
			cin >> marriage_date;
			shelf[hometown]->GetMarried(username, name, birthday, marriage_date);
			cout << "廝" << username << " " << name << "為定挫栽��\n";
			break;
		case 2:
			cout << "挫詔挫柊~\n";
			shelf[hometown]->Divorce(username);
			break;
		case 3:

			break;
		case 4:
			cout << "萩補秘頃徨侖兆:\n";
			cin >> name;
			shelf[hometown]->RemoveChild(username, name);

			break;
		case 5:
			cout << "准挨乏延\n";
			shelf[hometown]->Die(username);
			break;
		case 6:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second->Search(name);
				if (people != nullptr)
				{
					cout << people->Getmessage();
				}
				else
				{
					cout << "臥涙緩繁\n";
				}
			}
			break;
		case 7:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name]->Tree_to_String();
			else
				cout << "緩社惇音贋壓\n";
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
		cout << "輝念隠贋議社惇嗤:\n";
		for (auto item : shelf)
		{
			cout << "ゞ" << item.first << "〃" << endl;
		}
		cout << "萩僉夲荷恬:\n"
			<< "0.曜竃\n"
			<< "1.臥孀侖兆\n"
			<< "2.臥心社怛児云佚連\n"
			<< "3.秀羨社惇\n";
		int order = 0;
		cin >> order;
		string name;
		Member* people = nullptr;
		string temp_family, anc_family_name, anc_first_name, birthday;
		FamilyTree* new_tree = nullptr;
		switch (order)
		{
		case 0:
			ok = 0;
			break;
		case 1:
			cin >> name;
			for (auto item : shelf)
			{
				people = item.second->Search(name);
				if (people != nullptr)
				{

				}
				else
				{
					cout << "臥涙緩繁\n";
				}
			}
			break;
		case 2:
			cin >> name;
			if (shelf.count(name))
				cout << shelf[name]->Tree_to_String();
			else
				cout << "緩社惇音贋壓\n";
			break;
		case 3:
			cout << "萩補秘社怛:";
			cin >> temp_family;
			cout << "萩補秘怕枠侖箆:";
			cin >> anc_family_name;
			cout << "萩補秘怕枠兆忖:";
			cin >> anc_first_name;
			cout << "萩補秘伏晩:";
			cin >> birthday;
			new_tree = new FamilyTree(true, patriarch, anc_family_name, anc_first_name, true, birthday, false);
			shelf[temp_family] = new_tree;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}

}