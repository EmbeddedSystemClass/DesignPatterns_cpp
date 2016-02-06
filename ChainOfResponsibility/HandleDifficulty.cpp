/**
 * HandleDifficulty.cpp
 * Concrete Handler class to handle difficulty
**/
#include <iostream>
#include <stdlib.h>
#include "HandleDifficulty.h"

using namespace std;

HandleDifficulty::HandleDifficulty(int level)
{
	m_level = level;
}

void HandleDifficulty::handleRequest(const char* difficulty)
{
	int numDifficulty = atoi(difficulty);
	if( numDifficulty > m_level ) {
		if( m_successor == NULL ) {
			cout << "cannot handle Difficulty Lv. " << numDifficulty << " at " << m_level << endl;
		} else {
			m_successor->handleRequest(difficulty);
		}
	} else {
		/* this class handles the request */
		cout << "Difficulty Lv. " << numDifficulty << " was handled at " << m_level << endl;
	}
}

