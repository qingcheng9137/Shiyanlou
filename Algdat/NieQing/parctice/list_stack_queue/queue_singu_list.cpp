/*************************************************************************************/
/*************************************** 2018.4.09 ***********************************/
/*****************************          Jerry Zheng           ************************/
/**************************** Beijing Insititute of Technology ***********************/
/*************************************************************************************/

/*implement a queue class using a singly linked list*/
/*no header no tail nodes*/
/*template<typename Object>
class queue
{
public:
	queue() { front = NULL; rear = NULL; }
	~queue() { while (front)deque(); }
	void enque(Object obj)
	{
		node<Object>*ptr = new node<Object>(obj, NULL);
		if (rear)
			rear = rear->next = ptr;
		else
			front = rear = ptr;
	}
	Object deque()
	{
		Object temp = front->data;
		node<Object>*ptr = front;
		if (front->next == NULL)//only 1 node
			front = rear = NULL;
		else
			front = front->next;
		delete ptr;
		return temp;
	}
private:
	node<Object>*front;
	node<Object>*rear;
};*/