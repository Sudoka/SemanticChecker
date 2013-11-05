//------------------//
// Type Linked List //
//------------------//
struct symbolNode {
    char* id;
    struct symbolNode *next;
};

// Decalre Pointers to Linked List Head and Last Node
struct symbolNode *head = NULL;
struct symbolNode *curr = NULL;

//--------------------------------------------------------------//
// create_list Method						//
//								//
// Allocates memory for symbolNode and adds first node to list	//
//--------------------------------------------------------------//
struct symbolNode* create_list(char* id) {
    struct symbolNode *ptr = (struct test_struct*) malloc(sizeof(struct test_struct));

    if (NULL == ptr) {
        printf("\n Node creation failed \n");
        return NULL;
    }

    ptr->id = id;
    ptr->next = NULL;

    head = curr = ptr;
    return ptr;
}

//----------------------------------------------------------------------//
// add_to_list Method							//
//									//
// Allocates memor for symbolNode and add to the end of the linked list //
//----------------------------------------------------------------------//
struct symbolNode* add_to_list(char* id) {
    if (NULL == head) {
        return (create_list(val));
    }

    struct symbolNode *ptr = (struct test_struct*) malloc(sizeof(struct test_struct));

    if (NULL == ptr) {
        printf("\n Node creation failed \n");
        return NULL;
    }

    ptr->id = id;
    ptr->next = NULL;

    curr->next = ptr;
    curr = ptr;

    return ptr;
}
