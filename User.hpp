#pragma once
#include "Node.hpp"
#include <iostream>
#include <string>

class User
{
	std::string m_nickname;
	std::string m_password;
	std::string m_firstName = "No name";
	std::string m_lastName = "No surname";
	Node* root;

public:
	User(const std::string& nickname, const std::string& password);
	User(User* user);
	~User();

	std::string getFirstName()const;
	void setFirstName(const std::string& firstName);
	std::string getLastName()const;
	void setLastName(const std::string& lastName);
	std::string getPassword();
	std::string getNickname();
	void setNickname(const std::string& nickname);
	void setPassword(const std::string& password);

	bool login(const std::string& nickname, const std::string& password);
	void changePassword();
	void changeNickname();
	bool operator<(User& user);
	bool operator==(User* user);
	User& operator=(User* user);
};

