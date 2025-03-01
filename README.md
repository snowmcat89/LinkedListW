# LinkedListsW
just a simple linkedList made wih pure `C++`
the diagram will show how it's work:
![specialDraw drawio (2)](https://github.com/user-attachments/assets/ac16bd52-82b5-4293-aa07-480e2415c72f)

# explication 
as we see, have the diagram that shows how `Nodes` work exactly, we firstly make a `head` pointer, which points to first Node made, it's will be firstly intialized with the value `nullptr`
the STRUCTURE is made like this:
```cpp
typedef struct Node {
	std::int16_t val;
	struct Node* nextNd;
	Node(std::int16_t v, struct Node* nxtNd): val(v),nextNd(nxtNd){}
}Node, *PNode;
```
`val` represent the values that we put on
> [!IMPORTANT]
> Notice that on the diagram, i puted for each `val` as with `int` instead of `std::int16_t`, well...i didn't want just to make the diagram big
