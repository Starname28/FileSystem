#include "stdafx.h"
#include "User.hpp"


User::User(const std::string & nickname, const std::string & password) : m_nickname(nickname), m_password(password)
{
}

User::~User()
{
}

std::string User::getFirstName() const
{
	return m_firstName;
}

void User::setFirstName(const std::string& firstName)
{
	m_firstName = firstName;
}

std::string User::getLastName() const
{
	return m_lastName;
}

void User::setLastName(const std::string & lastName)
{
	m_lastName = lastName;
}

bool User::login(const std::string & nickname, const std::string & password)
{
	return (nickname == m_nickname && password == m_password)? true : false;
}

void User::changePassword()
{
	std::string nickname;
	std::string password , newPassword;
	std::cout << "Enter nickname and password again: " << std::endl;

	std::cin >> nickname;
	std::cin >> password;
	if (login(nickname, password))
	{
		std::cin >> newPassword;
		m_password = newPassword;
	}
	else
	{
		std::cout << "False nickname or password" << std::endl << " Try again: ";
		changePassword();
	}
}

void User::changeNickname()
{
	std::string nickname, newNickname;
	std::string password;
	std::cout << "Enter nickname and password again: " << std::endl;

	std::cin >> nickname;
	std::cin >> password;
	if (login(nickname, password))
	{
		std::cin >> newNickname;
		m_nickname = newNickname;
	}
	else
	{
		std::cout << "False nickname or password" << std::endl << " Try again: ";
		changeNickname();
	}
}
