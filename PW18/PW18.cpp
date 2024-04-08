#include <iostream>
#include <iomanip>

using namespace std;
class Player
{
public:
	string name;
	int points;
	Player() :name(""), points(0) {}
	Player(string n, int p) : name(n), points(p) {}
};

void bubbleSort(Player* arr, int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j].points > arr[j + 1].points)
			{
				Player temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "\n" << "Sorted array :" << endl;
	for (int i = 0; i < n; i++)
	{

		cout << arr[i].name << " = " << arr[i].points << "\n";
	}
}

int main()

{
	int i, j, temp;
	int num_players;
	cout << "Enter the number of players" << endl;
	cin >> num_players;

	static Player* players = new Player[num_players];
	for (i = 0; i < num_players; i++)
	{
		string name;
		int points;
		cout << "Imput name player\t";
		cin >> name;
		cout << "Imput points\t";
		cin >> points;
		players[i] = Player(name, points);

	}
	cout << "\n" << "Info:" << endl;
	for (i = 0; i < num_players; i++)
	{
		cout << "Player" << i + 1 << " : " << players[i].name << "\t Points = " << players[i].points << endl;
	}

	bubbleSort(players, num_players);
}