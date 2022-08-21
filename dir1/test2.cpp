#include <iostream>
using namsespace std;

int main()
{
	pit_d pid =fork();

	if(pid<0)
	{
		cout<<"创建子进程失败"<<endl;
	}

	return 0;
}
