#ifndef DATABASE_H
#define DATABASE_H
#include "consolas.h"
#include <string>
class Database
{
	public:
		Database();
		~Database();
		Database(const Database& other);
		void operator =(const Database& other);
		void resize();
		void search(string name);
		void search_id(int id);
		void add(const consolas& con);
		void display_all();
		void remove(string name);
		void save(std::ostream& outs);
		void load(std::istream& ins);
		void sort_name();
		void sort_salary();
	private:
		void make_bigger();
		int capacity;
		consolas *data;
		int used;
};
#endif
