#include <iostream>
#include <string>
#include <list>
#include "Bank.h"

using namespace std;
int main()
{
	Bank* banka = new Bank(250, 250);

	for (size_t i = 0; i < 30; i++)
	{
		string karel = "Karel"; char buffer[8];
		sprintf_s(buffer, "%d", i); auto name = karel.append(buffer);

		banka->CreateClient(i, name);
	}
	for (size_t i = 0; i < 30; i++)
	{
		banka->CreateAccount(i, banka->GetClient(i));
	}
	for (size_t i = 0; i < 30; i++)
	{
		//print clients and account owners
		printf("%s\n%s\n", banka->GetClient(i)->GetName().c_str(), banka->GetAccount(i)->GetOwner()->GetName().c_str());
	}


	int id_karla = 30;
	banka->CreateClient(id_karla, "Karel");
	banka->CreateAccount(id_karla, banka->GetClient(30), 0.1);
	banka->GetAccount(id_karla)->Deposit(2000);
	banka->AddInterest();
	printf("Karel vlozil 2000 a s urokem 10%%  ma ted %.3f", banka->GetAccount(id_karla)->GetBalance());

	return 0;
}
