#include "stdafx.h"
#include "DirectoryControler.h"


DirectoryControler::DirectoryControler()
{
}


DirectoryControler::~DirectoryControler()
{
}

Node * DirectoryControler::getNode()
{
	return m_root;
}

Node * DirectoryControler::createDirectory(const std::string & name, Node * parent)
{
	Node* newDirectory;
	newDirectory->setParent(parent);
	newDirectory->setName(name);
	return newDirectory;
}

bool DirectoryControler::removeDirectory(Node * dir)
{

	dir->getParent()->removeChild(dir);
	return true;
}

Node * DirectoryControler::renameDirectory(std::string & name, Node * dir)
{
	dir->setName(name);
	return dir;
}

Node * DirectoryControler::moveDirectory(Node * dir, Node * parent)
{
	 removeDirectory(dir->getParent());
	dir->setParent(parent);
	return dir;
}

Node * DirectoryControler::copyDirectory(Node * dir, Node * parent)
{
	dir->setParent(parent);
	return dir;
}
