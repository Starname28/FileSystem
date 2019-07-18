#include "stdafx.h"
#include "UserControler.hpp"

UserControler::UserControler(User *user, const std::vector<Node*>& vec)
{
	for (auto& memberMap : m_userMap)
	{
		memberMap.first->setFirstName(user->getFirstName());
		memberMap.first->setLastName(user->getLastName());
		memberMap.first->setNickname(user->getNickname());
		memberMap.first->setPassword(user->getPassword());

		memberMap.second = vec;
	}
}

UserControler::~UserControler()
{
}

std::map<User*, std::vector<Node*>> UserControler::getMap()const
{
	return m_userMap;
}

void UserControler::setMap(User * user, const std::vector<Node*>& vec)
{
	for (auto& memberMap : m_userMap)
	{
		memberMap.first->setFirstName(user->getFirstName());
		memberMap.first->setLastName(user->getLastName());
		memberMap.first->setNickname(user->getNickname());
		memberMap.first->setPassword(user->getPassword());

		memberMap.second = vec;
	}
}


void UserControler::createUser(const std::string & firstName, const std::string & lastName, const std::string & nickname, const std::string & password)
{
	User user(nickname, password);
	user.setFirstName(firstName);
	user.setLastName(lastName);
}

User * UserControler::login(const std::string & nickname, const std::string & password)
{
	User* user;
	user->login(nickname, password);
	return user;
}

bool UserControler::logout(User * user)
{
	auto it = m_userMap.begin();
	for (auto& member : m_userMap)
	{
		if (user == member.first)
		{
			m_userMap.erase(it);
			return true;
		}
		++it;
	}
	return false;
}

bool UserControler::remove(User * user)
{
	auto it = m_userMap.begin();
	while(it==m_userMap.end())
	{
		m_userMap.erase(it);
		++it;
	}
	return true;
}

User * UserControler::changeFirstName(User * user, const std::string& firstName)
{
	user->setFirstName(firstName);
	return user;
}

User * UserControler::changeLastName(User * user, const std::string& lastName)
{
	user->setLastName(lastName);
	return user;
}

User * UserControler::changeNickname(User * user)
{
	user->changeNickname();
	return user;
}

User * UserControler::changePassword(User * user)
{
	user->changePassword;
	return user;
}

std::vector<Node *> UserControler::controlerFor(User * user)
{
	for (const auto& member : m_userMap)
	{
		if (user == member.first)
		{
			return member.second;
		}
	}
}
