/**
 * Batch.h
 * Invoker class which contains and calls commands
 * (able to enable undo/redo/log)
*/
#include <iostream>
#include "Batch.h"

using namespace std;

void Batch::addCommand(CalcCommand *command)
{
	m_commandList.push_back(command);
}

void Batch::executeAll()
{
	for( list<CalcCommand*>::iterator itr = m_commandList.begin(); itr != m_commandList.end(); itr++ ) {
		(*itr)->execute();
	}
}
