#include<iostream>
using namespace std;

class LL
{
private:
    struct node
    {
        int data;
        node *next;
    };

    struct node* start1;
    struct node* start2;


    public:
        LL()
        {
            start1=NULL;
            start2 = NULL;

        }
        void create();
        void show();
        void merge();
        // void add_at_pos(int pos);
        // void insert_end();
        // void after();
        // void before();
};


int main()
{
    LL list1;
    LL list2;

    
    list1.create();
    // cout<<"list1 is ";
    list1.show();
    // cout<<endl<<"list2 is ";
    // list2.show();
    list1.merge();
    
    list1.show();


    return 0;
}

void LL::create()
{
   
     cout<<"enter ele for list1 "<<endl;
     int n, num;
     cin>>n;
    cout << "enter elements ";
    node *temp = new node();

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (start1 == NULL)
        {

            temp->data = num;
            start1 = temp;
        }
        else
        {

            node *nn = new node();
            nn->data = num;
            temp->next = nn;
            temp = nn;
        }
    }

    cout<<"enter ele for list2 "<<endl;
     int m, numm;
     cin>>m;
    cout << "enter elements ";
    cin >> numm;
    node *temp1 = new node();

    for (int i = 0; i < m; i++)
    {
        cin >> numm;
        if (start2 == NULL)
        {

            temp1->data = numm;
            start2 = temp1;
        }
        else
        {

            node *nn = new node();
            nn->data = numm;
            temp1->next = nn;
            temp1 = nn;
        }
    }


}
void LL::show()
{
    cout<<"list1 is ";
    struct node *ptr;
    ptr=start1;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
    cout<<endl<<"list2 is ";

    struct node *ptr1;
    ptr1=start2;
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" ";
        ptr1=ptr1->next;
    }
}
void LL::merge(){

node* head1 = start1;
while(head1->next != NULL){
    head1 = head1->next;
}
head1->next = start2;

}