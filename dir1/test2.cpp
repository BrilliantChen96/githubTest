#include <iostream>
using namsespace std;

int main()
{
	pit_d pid =fork();

	if(pid<0)
	{
		cout<<"创建子进程失败"<<endl;
	}
	if(pid>0)
	{
		cout<<"子进程pid："<<pid<<endl;
	}
	if(pid==0)
	{
		cout<<"这个是子进程"<<endl;
	}
		
	return 0;
}
