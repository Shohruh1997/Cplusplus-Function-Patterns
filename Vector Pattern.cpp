//List
struct Node
{
	//List consists of to variables: first data as int and pointer to next container of data
	int data;
	Node* next;
	//Constructor if there is not first container then data is equal to 0 and our pointer points to NULL
	Node(int data = 0, Node* next = nullptr)
	{
		//in other case after adding data we connect two container by next pointer
		this->data = data;
		this->next = next;
	}
};
struct vector
{
	Node* head;
	int Size;
	vector()
	{
		Size = 0;
		head = nullptr;
	}
	//Constructor creates vector with n size, in eahc container data = 0
	vector(int n)
	{
		//Here are cases when size = 0 and our head pointer points to nullptr
		if (Size != 0)
			Size = 0;
		if (head != nullptr)
			head = nullptr;
		while (n != 0)
		{
			head = new Node(0, head);
			//Increase vector size after adding new container
			Size++;
			n--;
		}
	}
	//Constructor creates vector with n size, in eahc container data = val
	vector(int n, int val)
	{
		if (Size != 0)
			Size = 0;
		if (head != nullptr)
			head = nullptr;
		while (n != 0)
		{
			head = new Node(val, head);
			Size++;
			n--;
		}
	}
	//Adds data to vector's end
	void push_back(int data)
	{
		if (head == nullptr)
		{
			head = new Node(data);
		}
		else
		{
			Node* current = this->head;
			//Works until reaching end of vector
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = new Node(data);
		}
		Size++;
	}
	//Deletes last container of vector
	void pop_back()
	{

		Node* current = this->head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		delete current->next;
		current->next = current;
		Size--;
	}
	//Gets i number container under 
	int get(int i)
	{
		int counter = 0;
		Node* current = this->head;
		while (current != nullptr)
		{
			if (counter == i)
			{
				return current->data;
			}
			current = current->next;
			counter++;
		}
	}
	//Return vector's Size
	int size()
	{
		return this->Size;
	}
};
