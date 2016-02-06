/**
 * Handler.h
 * Handler abstract class
**/
#ifndef __HANDLER__
#define __HANDLER__
class Handler
{
	protected:
		Handler* m_successor;
	public:
	private:

	public:
		Handler();
		Handler* setNext(Handler* successor);
		virtual void handleRequest(const char* difficulty) = 0;
};

#endif	//__HANDLER__
