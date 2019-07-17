#pragma once
#include "Node.hpp"
#include <algorithm>
#include <cstdio>

class DirectoryControler
{
public:
	DirectoryControler();
	~DirectoryControler();

	Node* getNode();

	Node* createDirectory(const std::string& name, Node* parent);
	bool removeDirectory(Node* dir);
	Node* renameDirectory(std::string& name, Node* dir);
	Node* moveDirectory(Node* dir, Node *parent);
	Node* copyDirectory(Node* dir, Node* parent);

private: 
	Node* m_root;
};

//DirectoryControler
//
//+createDirectory: string name, Node* parent): Node*
//-Node* m_root -> +getter()
//+removeDirectory(Node* dir):bool
//+renameDiractory(name, node* dir): Node*
//+moveDirectory(node* dir, node* parent): node*
//+copyDirectory(node* dir, node* parent) : node*