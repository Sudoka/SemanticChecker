void semantic_error(int error);

void semantic_analyzer(struct programNode* program);

void body_check(struct bodyNode* body);
void var_section_check(struct var_decl_sectionNode* var_decl_section);
void type_section_check(struct type_decl_sectionNode* type_decl_section);

void unify(int t1, int t2);
void lookup();
void insert();
