
typedef struct book
{
	int id;
	char* name[50];
	char* author[50];
	int no_of_copies;
	int pages;
	int ISBN;
	struct book* next;
}book;

static book* head = NULL;