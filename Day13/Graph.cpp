#include<iostream>
using namespace std;
class Graph //graph class
{
private:
    //pointer to adjacency matrix
    bool **adjMatrix;

    //total no of vertices
    int vertices;

public:
    //constructor
    Graph(int vertices)
    {
        //store vertices
        this->vertices = vertices;

        //create roes dynamically
        for(int i=0; i<vertices;i++)
        {
            adjMatrix[i]=new bool[vertices];

            //initially no edge
            for(int j = 0; j< vertices;j++)
            {
                adjMatrix[i][j]=false;
            }
        }

    }
    //function to add a edge
    void addEdge(int source,int destination)
    {
        //since graph is undirected
        adjMatrix[source][destination] = true;
        adjMatrix[destination][source] = true;

    }
    //Display adjacency matrix
    void display()
    {
        cout<<"\nAdjacency Matric\n\n";
        for(int i=0;i<vertices;i++)
        {
            for( int j=0;j<vertices;j++)
            {
                cout<<adjMatrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    //Destructor
    ~Graph()
    {
        for(int i=0;i<vertices;i++)
        {
            delete[]adjMatrix[i];
        }
        delete[]adjMatrix;
    }
};
int main()
{
    //create graph with 6 vertices
    Graph g(6);
    //main gate <-> librabry
    g.addEdge(0,1);

    ////main gate <-> canteen
    g.addEdge(0,2);

    //library <-> academiv block
    g.addEdge(1,4);

    //canteen <-> academiv block
    g.addEdge(2,4);

    //academiv block <-> hostel
     g.addEdge(3,4);

     //hostel<->sports ground
      g.addEdge(4,5);
      g.display();


}
