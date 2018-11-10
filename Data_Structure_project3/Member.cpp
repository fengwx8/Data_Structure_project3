#include"Member.h"
#include<sstream>

using std::stringstream;

Member::Member(string inform){
	stringstream ss;
	string str;
	ss << inform;
	ss >> str;
	if(str=="��")	alive = true;
	else	alive = false;
	ss >> str;
	lastname = str;
	ss >> str;
	firstname = str;
	ss >> str;
	birth_date = str;
	ss >> str;
	death_date = str;
	unsigned long long pre;
	ss >> pre;
	password = pre;
	ss >> str;
	if(str=="��") gender = true;
	else gender = false;
	unsigned int temp;
	ss >> temp;
	for(unsigned int i=0;i<temp;++i){
		ss >> str;
		child_name.push_back(str);
	}
	ss >> str;
	if(str=="�ѻ�"){
		state = true;
		ss >> str;
		if(str=="��") spouse.setAlive(true);
		else spouse.setAlive(false);
		ss >> str;
		spouse.setName(str);
		ss >> str;
		spouse.setBirth(str);
		ss >> str;
		spouse.setDeath(str);
		ss >> str;
		if(str=="��") spouse.setGender(true);
		else spouse.setGender(false);
	} else state = false;
}
Spouse& Spouse::operator=(const Spouse& other){
	alive = other.alive;
	birth_date = other.birth_date;
	death_date = other.death_date;
	name = other.name;
	gender = other.gender;
	return *this;
}
bool Member::getAlive() const{
	return alive;
}
void Member::setAlive(bool al){
	alive = al;
}
string Member::getName() const{
	return lastname + firstname;
}
void Member::setName(string _last,string _first){
	lastname = _last;
	firstname = _first;
}
bool Member::getGender() const{
	return gender;
}
void Member::setGender(bool _gender){
	gender = _gender;
}
string Member::getBirth() const{
	return birth_date;
}
void Member::setBirth(string birth){
	birth_date = birth;
}
string Member::getDeath() const{
	return death_date;
}
void Member::setDeath(string death){
	death_date = death;
}
string Member::getInfo() const{
	string str;
	for(unsigned int i=0;i<info.size();++i){
		str+=(info[i]+'\n');
	}
	return str;
}
void Member::setInfo(string _info){
	while(_info.size()){
		unsigned int pos = _info.find('\n');
		string str = _info.substr(0,pos);
		info.push_back(str);
		_info.erase(0,pos+1);
	}
}
ofstream& operator<<(ofstream& out, Member& other) {
	string str = other.getInfo();
	out << str;
	return out;
}
ifstream& operator>>(ifstream& in,Member& other){
	string str;
	
	while(in>>str)
	other.info.push_back(str);
	return in;
}
int Member::getGene() const{
	return gene;
}
void Member::setGene(int ge){
	gene = ge;
}
void Member::setPassword(unsigned long long pass){
	password = pass;
}
unsigned long long Member::getPassword() const{
	return password;
}
string Member::Getmessage(){
	string str;
	if(alive)	str+="��\n";
	else	str+="��\n";
	str += (lastname+' '+firstname+'\n');
	str+=(birth_date+'\n'+death_date+'\n');
	stringstream ss;
	string st;
	ss << password;
	ss >> st;
	str += st;
	str += '\n';
	
	if(gender)    str+="��\n������:";
	else str+="Ů\n������:";
	int num = children.size();
	ss << num;
	ss >> st;
	str += st;
	str += '\n';
	for(unsigned int i=0;i<child_name.size();++i)
	str += (child_name[i]+'\n');
	
	if(state){
		str+="�ѻ�\n��ż:\n";
		if(spouse.getAlive())	str+="��\n";
		else	str+="��\n";
		str += (spouse.getName()+'\n');
		str += (spouse.getBirth()+'\n'+spouse.getDeath()+'\n');
		str += spouse.getGender();
	} else str += "����\n";
	return str;
}
bool Spouse::getAlive() const{
	return alive;
}
void Spouse::setAlive(bool _alive){
	alive = _alive;
}
string Spouse::getName() const{
	return name;
}
void Spouse::setName(string _name){
	name = _name;
}
bool Spouse::getGender() const{
	return gender;
}
void Spouse::setGender(bool _gender){
	gender = _gender;
}
string Spouse::getBirth() const{
	return birth_date;
}
void Spouse::setBirth(string birth){
	birth_date = birth;
}
string Spouse::getDeath() const{
	return death_date;
}
void Spouse::setDeath(string death){
	death_date = death;
}
void Member::changeName(string name){
	lastname = name;
}
vector<string> Member::getChildname(){
	return child_name;
}
void Member::marry(Spouse a){
	state = true;
	spouse = a;
}
void Member::divorce(){
	state = false;
}
Spouse Member::getSpouse() const{
	return spouse;
}
