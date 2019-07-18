#pragma once
#include "User.hpp"
#include "Node.hpp"
#include "DirectoryControler.h"
#include <string>
#include <map>
class UserControler
{
public:
	UserControler(User *user, const std::vector<Node*>& vec);
	~UserControler();

	std::map <User*, std::vector<Node*>> getMap()const;
	void setMap(User* user, const std::vector<Node*>& vec);


	void createUser(const std::string& firstName, const std::string& lastName,
		const std:: string& nickname, const std::string& password);
	User* login(const std::string& nickname, const std::string& password);
	bool logout(User* user);
	bool remove(User* user);
	User* changeFirstName(User* user, const std::string& name);
	User* changeLastName(User* user, const std::string& name);
	User* changeNickname(User * user);
	User* changePassword(User * user);
	std::vector<Node *> controlerFor(User* user);
private:
	std::map <User*, std::vector<Node*>> m_userMap;
};

//DZ
//UserControler
//-<user*>
//+creatUser(name, login, parol..)
//+login(nick, password): User*
//+logout(user*):bool
//+remove(user*):bool
//+changeName(user*) and td : user*
//+DirectoryControler *ControlerFor(User*)