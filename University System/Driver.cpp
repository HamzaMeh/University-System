#include"University.h"
#include<string>
#include<Windows.h>
int main()
{

	University u;
	int choice;
	bool flag;
	string id;
	for(;true;)
	{
		cout << "***************************************************************************" << endl;
		cout <<"\t\t"<< u.getname() << " Management System" << endl;
		cout << "***************************************************************************" << endl;
		cout << "Press 0 to quit" << endl;
		cout << "Press 1 to add a person" << endl;
		cout << "Press 2 to delete a person" << endl;
		cout << "Press 3 to search a person" << endl;
		cin >> choice;
		switch (choice)
		{
	//	default:
	//		cout << "Wrong entry!" << endl;
	//		break;
		case 0:
			return 0;
		case 1:		//add bloc
			flag = true;
			while (flag)
			{
				cout << "Press 0 to go back" << endl;
				cout << "Press 1 to add a student assistant" << endl;
				cout << "Press 2 to add a staff member" << endl;
				cout << "Press 3 to add a faculty member" << endl;
				cout << "Press 4 to add a student" << endl;
				cin >> choice;
				switch (choice)
				{
				default:
					cout << "Wrong entry!" << endl;
					break;
				case 0:
					flag = false;
					break;
				case 1:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to add a research assistant" << endl;
						cout << "Press 2 to add a teaching assistant" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							u.addres();
							break;
						case 2:
							u.addtea();
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 2:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to add an academic staff member" << endl;
						cout << "Press 2 to add a library staff member" << endl;
						cout << "Press 3 to add a janitorial staff member" << endl;
						cout << "Press 4 to add a security staff member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							u.addacad();
							break;
						case 2:
							u.addlib();
							break;
						case 3:
							u.addjanit();
							break;
						case 4:
							u.addsecur();
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 3:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to add a permanent faculty member" << endl;
						cout << "Press 2 to add a visiting faculty member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							u.addperm();
							break;
						case 2:
							u.addvisit();
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 4:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to add an undergraduate student" << endl;
						cout << "Press 2 to add a masters student" << endl;
						cout << "Press 3 to add a PhD student" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							u.addunder();
							break;
						case 2:
							u.addmast();
							break;
						case 3:
							u.addphd();
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				}
				system("pause");
				system("cls");
			}
			break;
		case 2:		//delete bloc
			flag = true;
			while (flag)
			{
				cout << "Press 0 to go back" << endl;
				cout << "Press 1 to delete a student assistant" << endl;
				cout << "Press 2 to delete a staff member" << endl;
				cout << "Press 3 to delete a faculty member" << endl;
				cout << "Press 4 to delete a student" << endl;
				cin >> choice;
				switch (choice)
				{
				default:
					cout << "Wrong entry!" << endl;
					break;
				case 0:
					flag = false;
					break;
				case 1:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to delete a research assistant" << endl;
						cout << "Press 2 to delete a teaching assistant" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deleterea(id);
							break;
						case 2:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletetea(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 2:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to delete an academic staff member" << endl;
						cout << "Press 2 to delete a library staff member" << endl;
						cout << "Press 3 to delete a janitorial staff member" << endl;
						cout << "Press 4 to delete a security staff member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deleteacad(id);
							break;
						case 2:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletelib(id);
							break;
						case 3:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletejanit(id);
							break;
						case 4:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletesecur(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 3:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to delete a permanent faculty member" << endl;
						cout << "Press 2 to delete a visiting faculty member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deleteperm(id);
							break;
						case 2:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletevisit(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 4:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to delete an undergraduate student" << endl;
						cout << "Press 2 to delete a masters student" << endl;
						cout << "Press 3 to delete a PhD student" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deleteunder(id);
							break;
						case 2:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletemast(id);
							break;
						case 3:
							cout << "Enter ID of the person to be deleted: ";
							cin >> id;
							u.deletephd(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				}
				system("pause");
				system("cls");
			}
			break;
		case 3:		//search bloc
			flag = true;
			while (flag)
			{
				cout << "Press 0 to go back" << endl;
				cout << "Press 1 to search a student assistant" << endl;
				cout << "Press 2 to search a staff member" << endl;
				cout << "Press 3 to search a faculty member" << endl;
				cout << "Press 4 to search a student" << endl;
				cin >> choice;
				switch (choice)
				{
				default:
					cout << "Wrong entry!" << endl;
					break;
				case 0:
					flag = false;
					break;
				case 1:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to search a research assistant" << endl;
						cout << "Press 2 to search a teaching assistant" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchres(id);
							break;
						case 2:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchtea(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 2:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to search an academic staff member" << endl;
						cout << "Press 2 to search a library staff member" << endl;
						cout << "Press 3 to search a janitorial staff member" << endl;
						cout << "Press 4 to search a security staff member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchacad(id);
							break;
						case 2:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchlib(id);
							break;
						case 3:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchjanit(id);
							break;
						case 4:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchsecur(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 3:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to search a permanent faculty member" << endl;
						cout << "Press 2 to search a visiting faculty member" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchperm(id);
							break;
						case 2:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchvisit(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				case 4:
					flag = true;
					while (flag)
					{
						cout << "Press 0 to go to main menu" << endl;
						cout << "Press 1 to search an undergraduate student" << endl;
						cout << "Press 2 to search a masters student" << endl;
						cout << "Press 3 to search a PhD student" << endl;
						cin >> choice;
						switch (choice)
						{
						default:
							cout << "Wrong entry!" << endl;
							break;
						case 0:
							flag = false;
							break;
						case 1:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchunder(id);
							break;
						case 2:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchmast(id);
							break;
						case 3:
							cout << "Enter ID of the person to be searched: ";
							cin >> id;
							u.searchphd(id);
							break;
						}
						system("pause");
						system("cls");
					}
					break;
				}
				system("pause");
				system("cls");
			}
			break;
		}
		system("pause");
		system("cls");
	}
}