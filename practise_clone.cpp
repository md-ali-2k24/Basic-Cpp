/*
#include <iostream>
using namespace std;

int main() {
    int age = 20;
    char alpha = 'a';
    float size = 5.5f;
    bool isTrue = true;
    cout << "I'am "<< age << " years old.";
    return 0;
}

Sum of two number :

#include <iostream>
using namespace std;

int main() {
    int num,num2,sum;
    cout<< "Enter a number : ";
    cin>>num;

    cout<< "Enter a number : ";
    cin>>num2;
    sum = num + num2;
    cout<<"The sum of the numbers : "<< sum << endl;

    return 0;

}

Array Input and Print

#include <iostream>
using namespace std;

int main() {
    int size;
    cout<<"Enter ta size of an array : ";
    cin>>size;

    cout<<"Enter the array elements: "<<endl;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The array is : ";
    for (int i=0; i<size; i++){
        cout<<arr[i];
        cout<<" ";
    }

    return 0;
}

LinearScearch
#include <iostream>
using namespace std;
int linearSearch (int size, int arr[], int targetNum){
    for (int i=0; i,size; i++){
        if (targetNum == arr[i])
        {
            cout<<"The index value of array is: "<< i <<endl;
            return 0;
        }

    }
    cout<<"Number not Found"<<endl;
}

int main() {
    int size,target;
    cout<<"Enter ta size of an array : ";
    cin>>size;

    cout<<"Enter the array elements: "<<endl;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"Enter a target number: ";
    cin>>target;

    cout<<linearSearch(size,arr,target)<<endl;

    return 0;
}


    Reverce an array#include <iostream>
using namespace std;
int reverseArray(int size, int arr[])
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size;
    cout << "Enter ta size of an array : ";
    cin >> size;

    cout << "Enter the array elements: " << endl;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    reverseArray(size, arr);
    cout << "The reverse array is: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
Sting Inputs and Print name

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string firstName, midName, lastName;
    cout << "Enter first name : ";
    cin >> firstName;
    cout << "Enter mid name : ";
    cin >> midName;
    cout << "Enter last name : ";
    cin >> lastName;

    string fullName = firstName + " " + midName + " " + lastName;

    cout << "The full name is : " << fullName << endl;

    return 0;
}


/// Calculate sum of digits of a number 

#include <iostream>
#include <vector>
using namespace std;

int sumOfDigits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int lastDigit = num % 10;
        num = num / 10;
        sum = sum + lastDigit;
    }

    return sum;
}

int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;

    cout << "The sum of digite of number is: " << sumOfDigits(num) << endl;

    return 0;
}

//// Reverse and Array

#include <iostream>
#include <vector>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int reverseAnArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    cout << "Enter a size of an array : ";
    int size;
    cin >> size;
    int array[size];

    inputArray(array,size);
    reverseAnArray(array, size);
    printArray(array, size);

    return 0;
}
    //Time coplexsity is 0(n)



Printing the SUB Arrays 

#include <iostream>
#include <vector>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    cout << "Enter a size of an array : ";
    int size;
    cin >> size;
    int array[size];

    inputArray(array, size);

    // Printing Sub Arratys
    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i < end; i++)
            {
                cout << array[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    printArray(array, size);

    return 0;
}

//Maximum Sub Array Sum
#include <iostream>
#include <vector>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    cout << "Enter a size of an array : ";
    int size;
    cin >> size;
    int array[size];

    inputArray(array, size);

    // Printing Sub Arratys  Maximum Sum
    int maxSum = INT8_MIN;
    for (int start = 0; start < size; start++){
        int currentSum = 0;
        for (int end = start; end < size; end++){
            currentSum += array[end];
            maxSum = max(currentSum,maxSum);
        }
    }
    cout <<"The maximum sub Array sum : "<<maxSum;

    return 0;
}
    //0(n2)
//Optimas way of Kadanes Algorithum
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main(){
    cout << "Enter a size of an array : ";
    int size;
    cin >> size;
    int array[size];

    inputArray(array, size);

    // Printing Sub Arratys  Maximum Sum
    int currentSum = 0, maxSum = INT_MIN;

        for (int i = 0; i < size; i++){
            currentSum += array[i];
            maxSum = max(currentSum,maxSum);

            if (currentSum < 0){
                currentSum = 0;
            }
        }

    cout <<"The maximum sub Array sum : "<<maxSum;

    return 0;
}
    //0(n)



//Return pair in sorted array with target sum


vector<int> pairSum(vector<int> numbers, int target){
    vector<int> answer;

    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            if (numbers[i]+numbers[j] == target)
            {
                answer.push_back(i);
                answer.push_back(j);

            }
            
        }
        
    }
    return answer;
}

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    cout<<ans[0] << " "<<ans[1]<<endl;

    
    return 0;
}


#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int inputArray(int array[], int size)
{
    cout << "Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
}

int printArray(int array[], int size)
{
    cout << "The reverese array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

vector<int> pairSum(vector<int> numbers, int target)
{
    vector<int> answer;

    int i = 0, j = numbers.size()-1;

    while (i < j)
    {
        int pairSum = numbers[i] + numbers[j];

        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {

            answer.push_back(i);
            answer.push_back(j);
            return answer;
        }
    }

    return answer;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    int target = 9;

    vector<int> ans = pairSum(vec, target);
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}
    //0(n)


//mazority Elements 

#include <iostream>
#include <algorithm>

using namespace std;

void inputArray(int array[], int size) {
    cout << "Enter the elements of array: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
}

void printArray(int array[], int size) {
    cout << "The array is: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int majorityElement(int array[], int size) {
    // Sort the array
    sort(array, array + size);

    // Candidate at middle (works only if majority element exists)
    return array[size / 2];
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

    // Use dynamic allocation for safety (or std::vector)
    int* array = new int[size];

    inputArray(array, size);
    printArray(array, size);

    int majority = majorityElement(array, size);
    cout << "Candidate for majority element: " << majority << endl;

    delete[] array; // Free memory
    return 0;
}
    //0(n log n)

#include <iostream>
#include <vector>
using namespace std;

// Function to find majority element using Boyer-Moore algorithm
int majorityElement(vector<int>& vect) {
    int frequency = 0, answer = 0;

    for (int i = 0; i < vect.size(); i++) {
        if (frequency == 0) {
            answer = vect[i];
        }

        if (answer == vect[i]) {
            frequency++;
        } else {
            frequency--;
        }
    }

    // Verify if it is actually a majority

    int count = 0;
    for (int num : vect) {
        if (num == answer) count++;
    }

    if (count > vect.size() / 2) {
        return answer;
    } else {
        return -1; // No majority element
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> vect(size);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> vect[i];
    }

    int result = majorityElement(vect);

    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element exists." << endl;
    }

    return 0;
}
    //0(n)


    //Contaier with most water 

    #include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height)
{
    int maxWater = 0;
    int lp = 0, rp = height.size() - 1;

    while (lp < rp)
    {
        int width = rp - lp;
        int h = min(height[lp], height[rp]);
        int currentWater = width * h;

        maxWater = max(maxWater, currentWater);

        height[lp] < height[rp] ? lp++ : rp--;
    }

    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Maximum water container: " << maxArea(height) << endl;

    return 0;
}


 //Product of Array Except self 
 #include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    // suffix
    for (int i = n - 2; i >= 0; i--) {
        suffix *= nums[i + 1]; // ith suffix
        ans[i] *= suffix;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = productExceptSelf(nums);

    cout << "Result: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

////////Linked List :
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head; // newNode is folloing the arrow
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode; // tail is folloing the arrow to newNode
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Linked List is empty" << endl;
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Linked List is empyt \n";
            return;
        }

        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void insert(int val, int position)
    {
        if (position < 0)
        {
            cout << "Invalid position" << endl;
            return;
        }
        if (position == 0)
        {
            push_front(val);
            return;
        }

        Node *temp = head;
        for (int i = 0; i < position - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position" << endl;
                return;
            }

            temp = temp->next;
        }

        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void printLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverse()
    {
        Node *previous = NULL;
        Node *current = head; // start from head
        Node *next = NULL;

        tail = head; // old head becomes new tail

        while (current != NULL)
        {
            next = current->next;
            current->next = previous;

            previous = current;
            current = next;
        }

        head = previous; // update head to new first node
    }

    int middle()
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow->data;
    }

    int middleIndex()
    {
        Node *slow = head;
        Node *fast = head;
        int index = 0;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            index++; // move index as slow moves
        }

        return index; // returns index of middle node
    }

    Node *detectCycle() //large and explaind
    {
        Node *slow = head;
        Node *fast = head;

        bool isCycle = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
        {
            return NULL;
        }

        slow = head;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }

        return slow;
    }

    Node *detectCycle() //Method 2
    {
        Node *slow = head;
        Node *fast = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            { // cycle detected
                slow = head;
                while (slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow; // starting node of cycle
            }
        }
        return NULL; // no cycle
    }
};

int main()
{
    List ll; // Creation of Linked List

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);

    ll.printLL();
    ll.pop_front();

    ll.printLL();
    ll.pop_back();

    ll.printLL();
    ll.insert(0, 3);

    ll.printLL();

    ll.reverse();
    ll.printLL();

    cout << "Scarch result : " << ll.search(0) << endl;
    cout << "The middle value of list is : " << ll.middle() << endl;

    return 0;
}


// // // Stack:
======With vector :
#include <iostream> 
#include <vector>
using namespace std;

class Stack{
    vector<int> v;

public:

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        v.pop_back();
    }

    int top(){
        return v[v.size()-1];
    }
    bool empty(){
        return v.size() == 0;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout<<s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}


// // same but Explained


//========================

#include <iostream> 
#include <vector>
using namespace std;

class Stack {
    vector<int> v;

public:
    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if (!empty()){
            v.pop_back();
        } else {
            cout << "Stack underflow!\n";
        }
    }

    int top(){
        if (!empty()){
            return v.back();
        } else {
            cout << "Stack is empty!\n";
            return -1;
        }
    }

    bool empty(){
        return v.empty(); // cleaner
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}


// // // Stcak with List:

#include <iostream> 
#include <vector>
#include <list>
using namespace std;

class Stack{
    list<int>ll;

public:

    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int top(){
        return ll.front();
    }
    bool empty(){
        return ll.size() == 0;
    }
};

int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout<<s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}

// // // Basic mode of Stack

#include <iostream> 
#include <vector>
#include <list>
#include <stack>
using namespace std;


int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    while (!s.empty())
    {
        cout<<s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    return 0;
}
    

// // // Queue

#include <iostream> 
#include <vector>
#include <list>
#include <stack>
using namespace std;

class Node {
public :
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;

public: 
    Queue(){
        head = tail = NULL;
    }

    void push(int val){
        Node* newNode = new Node(val);
        if (empty()){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop(){
        if (empty()){
            cout << "Queue is empty " <<endl;
            return;
        }else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int front(){
        if (empty()){
            cout << "Queue is empty " <<endl;
            return -1;
        }else {
            return head->data;
        }
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
     Queue q;

     q.push(10);
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);

    while (!q.empty())
    {
        cout << q.front() << "-> ";
        q.pop();
    }

    cout << "NULL"<< endl;
    
    
    return 0;
}

// // Deque

#include <iostream> 
#include <vector>
#include <list>
#include <stack>
#include <deque>
using namespace std;

int main(){
     deque<int> dq;

     dq.push_front(10);
     dq.push_front(20);
     dq.push_front(30);
     dq.push_front(40);
     dq.push_front(50);

    while (!dq.empty())
    {
        cout << dq.front() << "-> ";
        dq.pop_front();
    }

    cout << "NULL"<< endl;
    
    
    return 0;
}

// // // Bianry Tree Trevarsal
#include <iostream> 
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);   //left side
    root->right = buildTree(preorder);   //right side

    return root;
}

// Pre-order Traversal
void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// In Order Treversal
void  inOrder(Node* root){
    if (root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Post Order Treversal
void postOrder(Node* root){
    if (root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Level Order Treversal
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        if (curr == NULL){
            if(!q.empty()) {
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << curr->data << " ";

        if (curr->left != NULL){
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
        
    }

    cout << endl;
}

int main(){
vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    levelOrder(root);

    return 0;
}

// // // Bianry Tree Trevarsal
#include <iostream> 
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* buildTree(vector<int> preorder){
    idx++;

    if(preorder[idx] == -1){
        return NULL;
    }

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);   //left side
    root->right = buildTree(preorder);   //right side

    return root;
}

// Pre-order Traversal      root-> left -> right
void preOrder(Node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// In Order Treversal       left -> root-> right
void  inOrder(Node* root){
    if (root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

// Post Order Treversal     left -> right -> root 
void postOrder(Node* root){
    if (root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

// Level Order Treversal
void levelOrder(Node* root){
    queue<Node*> q;

    q.push(root);
    q.push(NULL);

    while(q.size() > 0){
        Node* curr = q.front();
        q.pop();
        if (curr == NULL){
            if(!q.empty()) {
                cout << endl;
                q.push(NULL);
                continue;
            }else{
                break;
            }
        }

        cout << curr->data << " ";

        if (curr->left != NULL){
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
        
    }

    cout << endl;
}

//Megor the hight of tree or graph
int height (Node* root){
    if(root == NULL){
        return 0;
    }

    int leftHight = height (root->left);
    int rightHight = height (root->right);
    return max (leftHight,rightHight) + 1;
}

//Count the Nodes
int countNodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }

    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return leftCount+rightCount+1;
}

//Calculate the sum of Nodes
int sumOfNodes(Node* root){
    if (root == NULL)
    {
        return 0;
    }

    int leftSum = sumOfNodes(root->left);
    int rightsum = sumOfNodes(root->right);
    return leftSum+rightsum+root->data;
    
}

int main(){
vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = buildTree(preorder);

    preOrder(root);
    cout << endl;

    inOrder(root);
    cout << endl;

    postOrder(root);
    cout << endl;

    levelOrder(root);

    cout << "The hight of the Tree is : "<<height(root)<<endl;
    cout << "The Total number of nodes : "<<countNodes(root)<<endl;
    cout << "The Total sum of nodes data : "<<sumOfNodes(root)<<endl;
    return 0;
}


// // BST Binary scarch tree 
#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) {
    if (root == NULL) {
        return new Node(val);
    }

    if (val < root->data) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

void inOrder(Node* root) {
    if (root == NULL) {
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* buildBST(vector<int> arr) {
    Node* root = NULL;

    for (int val : arr) {
        root = insert(root, val);
    }

    return root;
}

bool search(Node* root, int key) {
    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        return true;
    }

    if (root->data > key) {
        return search(root->left, key);
    } else {
        return search(root->right, key);
    }
}

Node* getInorderSuccessor(Node* root) {  // Leftmost node in right subtree
    while (root != NULL && root->left != NULL) {
        root = root->left;
    }
    return root;  // Fixed: Return the successor node
}

Node* delNode(Node* root, int key) {  // key => the key to delete
    if (root == NULL) {
        return NULL;
    }

    if (root->data > key) {
        root->left = delNode(root->left, key);
    } else if (root->data < key) {
        root->right = delNode(root->right, key);
    } else {
        // key == root->data
        if (root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {  // Fixed: Removed space in "right"
            Node* temp = root->left;
            delete root;
            return temp;
        } else {  // 2 children
            Node* IS = getInorderSuccessor(root->right);
            root->data = IS->data;
            root->right = delNode(root->right, IS->data);
        }
    }
    
    return root;  // Fixed: Always return root for the recursive cases
}

void cleanup(Node* root) {  // Optional: For memory deallocation
    if (root == NULL) return;
    cleanup(root->left);
    cleanup(root->right);
    delete root;
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    Node* root = buildBST(arr);
    inOrder(root);
    cout << endl;

    delNode(root, 5);

    inOrder(root);
    cout << endl;
    // cout << search(root, 5) << endl;  // Would now print 0 (false)

    cleanup(root);  // Optional: Clean up memory
    return 0;
}


// // //Binary Scarch

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int binaryScharch(vector<int> arr, int tar)
{
    int start = 0, end = arr.size() - 1; //Better time complexety

    while (start <= end)
    {
        int mid = start + (end-start)/2;

        if (tar > arr[mid])
        {
            start = mid+1; //After mid
        }else if (tar < arr[mid])
        {
            end = mid-1; //Befor mid
        }else {
            return mid;
        }

    }
    return -1;
}

int main()
{

    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int tar1 = 12;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // Even
    int tar2 = 0;

    // arr [] = {};
    cout<<"The result of binary sarch : "<<binaryScharch(arr1,tar1)<<endl;

    return 0;
}

// Fibonacci by recuration
#include <iostream>
#include <vector>
#include <list>
#include <queue>   // for BFS
using namespace std;

int fibonacci (int n){
    if (n == 0 || n == 1)
    {
        return n;
    }

    return fibonacci(n-1) + fibonacci(n-2);
    
}

int main() {
    cout << fibonacci(7) <<endl;

    return 0;
}

// Array is sorted or not by recurtation
#include <iostream>
#include <vector>
#include <list>
#include <queue>   // for BFS
using namespace std;

int isSorted (vector<int> arr, int n){
    if (n == 0 || n == 1)
    {
        return true;
    }
    
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << isSorted(arr,5) <<endl;

    return 0;
}

//Binary Scarch by recuration 

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int tar, int start, int end) {
    if (start > end) {
        return -1;  // base case
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == tar) {
        return mid;
    }
    else if (arr[mid] < tar) {
        return binarySearch(arr, tar, mid + 1, end);
    }
    else {
        return binarySearch(arr, tar, start, mid - 1);
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int index = binarySearch(arr, 5, 0, arr.size() - 1);

    if (index != -1)
        cout << "Found at index: " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}



#include <iostream>
#include <vector>
#include <list>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Graph {
    int V;         // number of vertices
    list<int>* l;  // adjacency list

public:
    Graph(int V) {
        this->V = V;
        l = new list<int>[V];
    }


    void addEdge(int u, int v) {
        l[u].push_back(v);  //u is connected to v
        l[v].push_back(u); //v is connected to u [ undirected graph ]
    }

    void printAdjList() {
        for (int i = 0; i < V; i++) {
            cout << i << " : ";
            for (int neigh : l[i]) {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    void bfs() {
        queue<int> Q;
        vector<bool> visited(V, false);

        Q.push(0);
        visited[0] = true;

        while (!Q.empty()) {
            int u = Q.front();
            Q.pop();

            cout << u << " ";

            for (int neigh : l[u]) {
                if (!visited[neigh]) {
                    visited[neigh] = true;
                    Q.push(neigh);
                }
            }
        }
        cout << endl;
    }

    // Depth First Search
    void dfs() {
        int src = 0;
        vector<bool> visited(V, false);
        
        dfsHelper(src,visited);
        cout << endl;
    }

    void dfsHelper(int u, vector<bool>& visited) {
        cout << u << " ";
        visited[u] = true;

        for (int neigh : l[u]) {
            if (!visited[neigh]) {
                dfsHelper(neigh, visited);
            }
        }
    }
};

// problem Solving With hashing 
vector<int> twoSum(vector<int>& arr, int tar){
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i < arr.size(); i++)
    {
        int first = arr[i];
        int second = tar - first;

        if (m.find(second) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[second]);

            break;
        }

        m[first] = i;
    }

    return ans;
}

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
    vector<int> ans;
    unordered_set<int> s;
    int n = grid.size();
    int a,b;
    int expectedSum = 0, actualSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualSum += grid[i][j];
            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i] [j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
        
    }
    expectedSum = (n*n) * (n*n +1)/2;
    b = expectedSum + a - actualSum;
    ans.push_back(b);

}

int main() {
   
    Graph g(5);
    
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    
    cout << "Adjacency List:" << endl;
    g.printAdjList();
    
    cout << "BFS Traversal: ";
    g.bfs();
    
    cout << "DFS Traversal: ";
    g.dfs();
    
    

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    vector<int> result = twoSum(arr, 5); // find two numbers whose sum = 5

    if (!result.empty()) {
        cout << "Indices: ";
        for (int idx : result) {
            cout << idx << " ";
        }
        cout << endl;

        cout << "Values: " << arr[result[0]] << " + " << arr[result[1]] << " = 5" << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    // Example grid with missing + repeated number
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 8}   // here 8 is repeated, so 9 must be missing
    };

    vector<int> result = findMissingAndRepeatedValues(grid);

    cout << "Repeated: " << result[0] << endl;
    cout << "Missing: " << result[1] << endl;
    
    return 0;
}



*/
