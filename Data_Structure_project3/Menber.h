#define Max_size 10
class Spouse{
	private:
		bool alive;
		string name;
		bool gender;
		string birth_date;
		string death_date;
		string info;
		
	public:
		Spouse();
		~Spouse();
		bool getAlive() const;
		void setAlive(bool);
		string getName() const;
		void setName(string);
		bool getGender() const;
		void setGender(bool);
		string getBirth() const;
		void setBirth(string);
		string getDeath() const;
		void setDeath(string);
		string getInfo() const;
		void setInfo(string);
};
class member{
	private:
		int gene;
		bool alive;
		string name;
		bool gender;
		string birth_date;
		string death_date;
		int children_num;
		string info;
		Spouse spouse; 
		enum identity{};
		member arr[Max_size];
		
	public:
		member();
		~member();
		
		bool getAlive() const;
		void setAlive(bool);
		string getName() const;
		void setName(string);
		bool getGender() const;
		void setGender(bool);
		string getBirth() const;
		void setBirth(string);
		string getDeath() const;
		void setDeath(string);
		string getInfo() const;
		void setInfo(string);
		int getGene() const;
		void setGene(int);
};
