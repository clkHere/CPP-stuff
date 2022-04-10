struct complex
{
	int real, img;
};

struct student
{
	int roll;
	char name[25];
	char dept[10];
	char add[50];
};

struct book
{
	char auth[25];
	char title[50];
	char pub[25];
};

struct card
{
	int face;
	int shape;
	int color;
};

struct card deck[52] = { {1,0,0},{2,0,0},{3,0,0} }

