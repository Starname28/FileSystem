#include "stdafx.h"
#include "DocumentControler.hpp"


DocumentControler::DocumentControler()
{
}


DocumentControler::~DocumentControler()
{
}

Document * DocumentControler::createDocument(const std::string & name, const std::string & color, Node * parent)
{
	Document* doc;
	doc->setParent(parent);
	doc->setName(name);
	doc->setColor(color);
	return doc;
}

Document * DocumentControler::move(Document * doc, Node * parent)
{
	deleteDocument(doc->getParent());
	doc->setParent(parent);
	return doc;
}

Document * DocumentControler::copy(Document * doc, Node * parent)
{
	doc->setParent(parent);
	return doc;
}

Document * DocumentControler::rename(Document * doc, const std::string & name)
{
	doc->setName(name);
	return doc;
}

bool DocumentControler::deleteDocument(Node * doc)
{
	doc->getParent()->removeChild(doc);
	return true;
}

std::string DocumentControler::read(Document * doc)
{
	return doc->getBody();
}


Document * DocumentControler::write(Document * doc, const std::string & body)
{
	doc->setBody(body);
	return doc;
}

Document * DocumentControler::append(Document * doc, const std::string & body)
{
	doc->appBody(body);
	return doc;
}

Document * DocumentControler::changeColor(Document * doc, const std::string & color)
{
	doc->setColor(color);
	return doc;
}
