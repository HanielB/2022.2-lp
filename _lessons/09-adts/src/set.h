typedef struct
{
  unsigned* vector;
  unsigned size;
  unsigned capacity;
} set;


void new(set* s);

void add(set* s, unsigned e);

void del(set* s, unsigned e);

int contains(set* s, unsigned e);
