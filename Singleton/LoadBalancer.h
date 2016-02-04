/**
 * LoadBalancer.h
 * Singleton class
 * Assign server considering load balance
**/
#ifndef __LOAD_BALANCER__
#define __LOAD_BALANCER__
class LoadBalancer
{
	private:
		static const int MAX_SERVER = 5;
		static LoadBalancer s_loadBalancer;
	public:
	private:
		LoadBalancer();
	public:
		static LoadBalancer* getInstance();
		int assignServer();
};

#endif	//__LOAD_BALANCER__
