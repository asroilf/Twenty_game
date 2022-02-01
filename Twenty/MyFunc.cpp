
#include "framework.h"
#include "MyFunct.h"
#define N 8
#define M 7

int map[N][M] = {
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0},
	{6,7,8,9,10,11,0},
	{1,3,2,4,3,1,5}
};
int sizeX = 50;
int sizeY = 45;

int maximumNumber() {
	int max = map[0][0];
	for (int i = 1; i < N; i++) {
		for (int j = 1; j < M; j++) {
			if (max < map[i][j]) {
				max = map[i][j];
			}
		}
	}
	return max;
}

void box1(HDC hdc,int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushRect1 = CreateSolidBrush(RGB(61, 196, 97));
	RECT rect1 = {j* sizeX,i* sizeY,(j+1)*sizeX,(i+1)* sizeY};
	FillRect(hdc, &rect1, hBrushRect1);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("1");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);
	DeleteObject(hBrushRect1);


}

void box2(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor2 = CreateSolidBrush(RGB(226, 237, 64));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor2);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("2");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor2);


}

void box3(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor3 = CreateSolidBrush(RGB(9, 225, 232));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor3);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("3");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX-31, (i + 1) * sizeY-35, (LPCWSTR) num, _tcslen(num));

	DeleteObject(hBrushFor3);
	DeleteObject(hNumberFont);

}

void box4(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor4 = CreateSolidBrush(RGB(28, 75, 230));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor4);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("4");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);
	DeleteObject(hBrushFor4);

}

void box5(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor5 = CreateSolidBrush(RGB(214, 0, 247));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor5);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("5");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor5);

}

void box6(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor6 = CreateSolidBrush(RGB(245, 0, 24));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor6);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("6");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor6);

}

void box7(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor7 = CreateSolidBrush(RGB(0, 132, 227));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor7);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("7");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor7);

}

void box8(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor8 = CreateSolidBrush(RGB(196, 255, 125));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor8);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("8");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor8);

}

void box9(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor9 = CreateSolidBrush(RGB(255, 145, 0));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor9);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("9");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 31, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor9);

}

void box10(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor10 = CreateSolidBrush(RGB(166, 166, 166));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor10);

	HFONT hNumberFont;
	hNumberFont = CreateFont(30,
		0, 0, 0, 0, 0, 0, 0,
		DEFAULT_CHARSET,
		0, 0, 0, 0,
		TEXT("Impact")
	);
	TCHAR num[] = _T("10");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 32, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor10);

}

void box11(HDC hdc, int i, int j, int sizeX, int sizeY) {

	HBRUSH hBrushFor11 = CreateSolidBrush(RGB(162, 255, 0));
	RECT rect1 = { j * sizeX,i * sizeY,(j + 1) * sizeX,(i + 1) * sizeY };
	FillRect(hdc, &rect1, hBrushFor11);
	HFONT hNumberFont;
	hNumberFont = CreateFont(30, 0, 0, 0, 0, 0, 0, 0, DEFAULT_CHARSET, 0,
		0, 0, 0, TEXT("Impact"));;
	TCHAR num[] = _T("11");
	SelectObject(hdc, hNumberFont);
	SetTextColor(hdc, RGB(0, 0, 0));
	TextOut(hdc, (j + 1) * sizeX - 32, (i + 1) * sizeY - 35, (LPCWSTR)num, _tcslen(num));
	DeleteObject(hNumberFont);

	DeleteObject(hBrushFor11);
}

void emptyPlaces(HDC hdc, int i, int j, int sizeX, int sizeY) {
	HBRUSH hBrushForEmpty = CreateSolidBrush(RGB(240, 235, 235));
	RECT rectEmpty = { j * sizeX, i * sizeY, (j + 1) * sizeX, (i + 1) * sizeY };
	FillRect(hdc, &rectEmpty, hBrushForEmpty);

	DeleteObject(hBrushForEmpty);
}

void Boxes(HDC hdc){

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				emptyPlaces(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 1) {
				box1(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 2) {
				box2(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] ==3) {
				box3(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 4) {
				box4(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 5) {
				box5(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 6) {
				box6(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 7) {
				box7(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 8) {
				box8(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 9) {
				box9(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 10) {
				box10(hdc, i, j, sizeX, sizeY);
			}
			else if (map[i][j] == 11) {
				box11(hdc, i, j, sizeX, sizeY);
			}
		}
	}

	HPEN hPen = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
	SelectObject(hdc, hPen);
	MoveToEx(hdc, 0, sizeY , NULL);
	LineTo(hdc, sizeX *7+5 , sizeY );
	DeleteObject(hPen);

}



void moveBoxesByTime() {
	if (map[0][0] == 0) {
		for (int i = 0; i < N - 1; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] == 0 && map[i + 1][j] != 0) {
					map[i][j] = map[i + 1][j];
					map[i + 1][j] = 0;
				}
			}
		}
		
		int maxNum = maximumNumber();
		int j = 0;
		do {
			int randomNumber = rand() % maxNum;
			if (map[N - 2][j] == randomNumber || randomNumber == 0) { map[N - 1][j] = randomNumber + 1; }
			else map[N - 1][j] = randomNumber;
			
			if (map[N - 1][j] == map[N - 2][j]) {
				map[N - 1][j] = map[N - 1][j] + 1;
				for (int i = N - 2; i > 0; i--) {
					map[i][j] = map[i - 1][j];
				}
			}
			
			j++;
		} while (j < M);
	}
}


void moveToLeft() {
	int i, j;
	i = 0;
	while (i < N) {
		j = 1;
		while (j < M) {
				if (map[i][j - 1] == 0) {
					map[i][j - 1] = 3;
					map[i][j] = 0;

				}
				else if (map[i][j - 1] == 1) {
					map[i][j - 1] = 3;
					map[i][j] = 0;


				}
			}
			j++;
		}
		i++;
}

void moveToRight() {
	int i = 0;
	while (i < N) {
		int j = M - 2;
		while (j >= 0) {
			if (map[i][j] == 3) {
				if (map[i][j + 1] == 0) {
					map[i][j + 1] = 3;
					map[i][j] = 0;

				}
				else if (map[i][j + 1] == 1) {
					map[i][j + 1] = 3;
					map[i][j] = 0;


				}
			}
			j--;
		}
		i++;
	}
}

void moveUp() {
	int i = 1;
	while (i < N) {
		int j = 0;
		while (j < M) {
			if (map[i][j] == 3) {
				if (map[i - 1][j] == 0) {
					map[i - 1][j] = 3;
					map[i][j] = 0;

				}
				else if (map[i - 1][j] == 1) {
					map[i - 1][j] = 3;
					map[i][j] = 0;


				} 
			}
			j++;
		}
		i++;
	}
} 

void moveDown() {
	int i = N - 2;
	while (i >= 0) {
		int j = 0;
		while (j < M) {
			if (map[i][j] == 3) {
				if (map[i + 1][j] == 0) {
					map[i + 1][j] = 3;
					map[i][j] = 0;
					
				}
				else if (map[i + 1][j] == 1) {
					map[i + 1][j] = 3;
					map[i][j] = 0;


				}
			}
			j++;
		}
		i--;
	}
}








