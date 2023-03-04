#include <ctime>
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int m, n, k;
	cin >> m >> n >> k;
	int a[m][n] = {};
	int check = 0;
	string b[m][n];
		for (int i=0; i<m; i++)
		{
			for (int j=0; j<n; j++)
			{
				b[i][j] = char(219);
			}
		}
	// tao bomb
	for (int i=0; i<k; i++)
	{
		int c = rand()%(m-1-0+1)+0;
		int b = rand()%(n-1-0+1)+0;
		while (a[c][b] != 0)
		{
			c = rand()%(m-1-0+1)+0;
		    b = rand()%(n-1-0+1)+0;
		}
		a[c][b] = -1;
	}
	
	for (int i=0; i<m; i++)
	{
		for (int j=0; j<n; j++)
		{
			if (a[i][j] == 0)
			{
				for (int k=-1; k<=1; k++)
				{
					for (int q=-1; q<=1; q++)
					{
						if ( i+k<=n-1 && j+q<=m-1 && i+k>=0 && j+q>=0 && a[i+k][j+q]==-1)
						{
							a[i][j]++;
						}
					}
				}
			}
		}
	}	
	while (check==0)
	{
		int y, x;
		cout << "Moi ban chon toa do y: ";
		cin >> y;
		cout << "Moi ban chon toa do x: ";
		cin >> x;
		if (a[y][x] == -1)
		{
			check = 1;
			cout << "You're Die!";
		}
		else
		{
			if (a[y][x] !=0)
			{
				b[y][x] = char(a[y][x] + 48);
				for (int i=0; i<m; i++)
				{
					for (int j=0; j<n; j++)
					{
						cout << b[i][j] << " ";
					}
					cout << endl;
					cout << endl;
				}
			}
			else
			{
				for (int i=0; i<m; i++)
				{
					for (int j=0; j<n; j++)
					{
						if (a[i][j] == 0)
						{
							b[i][j] = '0';
						}
					}
				}
				for (int i=0; i<m; i++)
				{
					for (int j=0; j<n; j++)
					{
						cout << b[i][j] << " ";
					}
					cout << endl;
					cout << endl;
				}
			}
		}
	}
}
