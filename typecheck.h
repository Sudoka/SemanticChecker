#define IMPLICIT 0
#define EXPLICIT 1

#define MAX_SYMBOLS 1000

int lastTypeNum = 13;

struct type_symbol {
	char* id;
	int declType;
	int typeNum;
}

struct var_symbol {
	char* id;
	int declType;
	int typeNum;
}

struct type_symbol type_symbol_table[1000];
struct var_symbol var_symbol_table[1000];

int lookup_type(struct type_declNode* typeDecl);
int lookup_var(struct var_declNode* varDecl);
