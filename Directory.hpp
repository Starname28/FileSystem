#pragma once
#include "Node.hpp"
#include <algorithm>
#include <iostream>
class Directory :
	public Node
{
public:
	Directory(const std::string& name, Node* parent);
	~Directory() = default;

	virtual void addChild(Node* child)override;
	virtual void removeChild(Node* child)override;
	virtual void readDirectory();
	void operator= (Directory& directory);

	
};

//DirectoryControler
//
//+createDirectory: string name, Node* parent): Node*
//-Node* m_root -> +getter()
//+removeDirectory(Node* dir):bool
//+renameDiractory(name, node* dir): Node*
//+moveDirectory(node* dir, node* parent): node*
//+copyDirectory(node* dir, node* parent) : node*

//DocumentControler
//
//+createDocument(name, color, node* parent): Document*
//+move(Document* doc, node* parent):document*
//+copy
//+rename(Document* doc, name)Document*
//+delete(Document*)bool
//+read(Document* doc): string body
//+write(document* doc, string body): document *
//+append(document* doc, string body) : document *
//+changeColor(Document* doc, color): document*

//DZ
//UserControler
//-<user*>
//+creatUser(name, login, parol..)
//+login(nick, password): User*
//+logout(user*):bool
//+remove(user*):bool
//+changeName(user*) and td : user*
//+DirectoryControler *ControlerFor(User*)
