#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <string>
#include "Database.h"
using namespace std;

Database::Database()
{
	used = 0;
	capacity = 5;
	data = new consolas[capacity];
}
Database::Database(const Database& other)
{
	used = other.used;
	capacity = other.capacity;
	data = new consolas[capacity];
	copy(other.data,other.data+used,data);
}
Database::~Database()
{
	delete[]data; //deletes pointer that has went out scope
}
void Database::operator =(const Database& other)
{
	if(&other == this)
        {
                return;
        }
        delete[]data;
        capacity = other.capacity;
        used = other.used;
        data = new consolas[capacity];
        copy(other.data,other.data+used,data);
}
void Database::make_bigger()
{
	consolas * tmp;
	tmp = new consolas[capacity+5];
	copy(data, data+used,tmp);
	delete []data;
	data = tmp;
	capacity +=5;
}
/*void Database::search(string name){
	int num_found = 0;
	for(int i=0; i<used;i++)
	{
		if(data[i].get_name() == name)
		{
			cout << "Found Employee!" << endl;
			data[i].output(cout);
			num_found+=1;
		}
	}
	if(num_found == 0)
	{
		cout << "No Employee by that name" << endl;
	}}*/

/*void Database::search_id(int id){
	int num_found = 0;
	for(int i=0; i<used;i++)
	{
		if(data[i].get_id_number() == id)
		{
			cout << "Employee Found!" << endl;
			data[i].output(cout);
			num_found++;
		}
	}
	if(num_found == 0)
	{
		cout << "No employee with that ID number!" << endl;
	}}*/
void Database::add(const consolas& con)
{
	if(used >= capacity)
	{
		make_bigger();
	}
	data[used] = con;
	used++;
}
/*void Database::display_all(){
	for(int i=0;i<used;i++)
	{
		data[i].output(cout);
	}}*/
/*void Database::remove(string name){
	for(int i=0; i < used; i++)
	{
		if(data[i].get_name() == name)
 		{
			data[i] = data[used-1];
			used--;
		}
	}}*/
void Database::save(std::ostream& outs)
{
	sort_name();
	for(int i=0; i<used; i++)
	{
		outs << data[i];
	}
}
void Database::load(std::istream& ins)
{
	consolas tmp;
	while(ins >> tmp)
	{
		if(used >= capacity)
		{
			make_bigger();
		}
		data[used] = tmp;
		used++;
	}
}
void Database::sort_name(){
	bool done = false;
	consolas tmp;
	while(!done)
	{
		done = true;
		for(int i=0;i<used-1;i++consolas){	
			if(data[i].getmodelo() > data[i+1].getmodelo())
			{
				done = false;
				tmp = data[i];
				data[i] = data[i+1];
				data[i+1] = tmp;
			}	
		}	
	}	
}
/*void Database::sort_salary(){
	bool done = false;
	Employee tmp;
	while(!done)
	{
		done = true;
		for(int i=0;i<used-1;i++)
		{
			if(data[i].get_salary() < data[i+1].get_salary())
			{
				done = false;
				tmp = data[i];
				data[i] = data[i+1];
				data[i+1] = tmp;
			}	
		}	
	}	}*/
