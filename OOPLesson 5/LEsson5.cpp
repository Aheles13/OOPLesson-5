#include <iostream>
#include <vector>
#include <map>




//class Client
//{
//private:
//	int _age;
//	int _id;
//
//public:
//	Client(int age, int id) : _age(age), _id(id){}
//
//	Client(Client& client)         // Конструктор копирования 
//	{
//		_age = client._age;
//		_id = client._id;
//	}
//
//	void ShowData()
//	{
//		std::cout << "Age: " << _age << '\n';
//		std::cout << "ID: " << _id << '\n';
//
//
//	}
//};

class Client
{
private:
	int _id;
	std::string _name;
	float _bill;

public:
	Client(int id, std::string name, float bill, std::map <int, Client*> &map) : _id(id), _name(name), _bill(bill)
	{
		map[_id] = this;
	}

	Client(Client& client)
	{
		_id = client._id;
		_name = client._name;
		_bill = client._bill;
	}
	void ShowData()
	{
		std::cout << "Id: " << _id << '\n';
		std::cout << "Name: " << _name << '\n';
		std::cout << "Bill: " << _bill << '\n';
	}
	
};


int main()
{
	//Client client(24, 1);
	//Client client2(client); // Будет 24,1
	//client.ShowData();
	//client2.ShowData();

	// 23 - John
	// 26 - Alex


	//std::map<int, std::string> clients = // Автоматически соритруется по возрастанию
	//{
	//	{23, "John"},
	//	{26, "Alex"},
	//	{30, "Bob"}
	//};

	//auto it = clients.begin();
		
	/*std::cout << it->first << '\n';
	std::cout << it->second << '\n';
	it++;
	std::cout << it->first << '\n';
	std::cout << it->second << '\n';
	it--;*/

	
	/*std::advance(it, 2);
	std::cout << it->first << '\n';
	std::cout << it->second << '\n';*/

	//for (; it != clients.end(); ++it)
	//{
	//	std::cout << it->first  << "\n";  // Вывод 
	//	std::cout << it->second << "\n";
	//}
	//clients.insert(std::make_pair(10, "Monika")); // Первый способ. Можем добавлять в наш массив (clients).
	//clients[55] = "Gray";

	////std::cout << clients[23] << '\n'; // Второй способ. Можем добавлять в наш массив (clients).

	//it = clients.find(23);
	//

	//clients.erase(it);            // Удаление ячейки
	//for (it = clients.begin();it != clients.end(); ++it)
	//{
	//	std::cout << it->first << "\n";  // Вывод 
	//	std::cout << it->second << "\n";
	//}


	std::map<int, Client*>clients;
	Client* client = new Client(13, "John", 987987.5f, clients);
	Client* client2 = new Client(75, "John", 345987.3f, clients);
	Client* client3 = new Client(65, "John", 12345.2f, clients);
	auto it = clients.begin();

	for (; it != clients.end(); ++it)
	{
		std::cout << "Client id - " << it->first << ":\n";
		it->second->ShowData();
		std::cout << "\n\n";
	}


	










	return 0;
}