// linked list implementation?
typedef struct listnode
{
   //some data
   struct listnode *next;
}listnodeT;

listnodeT *list;
listnodeT *current_node;
list = (listnodeT*)malloc(sizeof(listnodeT));
current_node = list;


    // Initialize linked list
void initialize(list_t *list)
{
    list->head = NULL;
    list->tail = NULL;
}

void add(list_t *list, int code, char name[], int cost)
{
    // set up the new node
    product_data_t *node = (product_data_t*)malloc(sizeof(product_data_t));
    node->code = code;
    node->cost = cost;
    strncpy(node->product_name, name, sizeof(node->product_name));
    node->next = NULL;

    if(list->head == NULL){ // if this is the first node, gotta point head to it
        list->head = node;
        list->tail = node;  // for the first node, head and tail point to the same node
    }else{
        tail->next = node;  // append the node
        tail = node;        // point the tail at the end
    }
}


// return a pointer to element with product code
product_data_t*  seek(list_t *list, int code){
   product_data_t* iter = list->head;
   while(iter != NULL)
       if(iter->code == code)
           return iter;
       iter = iter->next;
   }
   return NULL; // element with code doesn't exist
}


