#include <stdio.h>
#include <stdlib.h>
#define UNREACHABLE -1
#define EDGE_LENGTH 6
#define MAX_EDGES 10000

typedef struct  Edge {
    int point_x,point_y;
}Edge;

typedef struct Node {
    Edge edges[MAX_EDGES];
    int n_edges;
}Node;

int bf_search(int s, int e, int n, Node* nodes) {
    int min_length = UNREACHABLE, index = 0, q_size = 1;
    int visited[1000] = {0};
    int queue[n], distances[n];
    queue[0] = s;
    visited[s] = 1;
    distances[0] = 0;
    while(q_size > 0) {
        s = queue[index];
        int distance = distances[index++];
        if(index == n) index = 0;
        q_size--;
        //printf("%d %d\n",s, distance);
        for(int i = 0;i < nodes[s].n_edges;i++) {
            if(!visited[nodes[s].edges[i].point_y]) { 
                if(nodes[s].edges[i].point_y == e) {
                    if(min_length == UNREACHABLE || distance + EDGE_LENGTH < min_length) {
                        min_length = distance + EDGE_LENGTH;
                    }
                }
                else {
                    visited[nodes[s].edges[i].point_y] = 1;
                    queue[index + q_size] = nodes[s].edges[i].point_y;
                    distances[index + q_size++] = distance + EDGE_LENGTH;
                }
            }
        }   
    }
    return min_length;
}

void find_distances(int n,int s, Node* nodes) {
    int s_index = s - 1;
    for(int i = 0;i < n;i++) {
        if(i != s_index) {
            //bf_search(s_index,i,n,nodes);
            //printf("\n");
            printf("%d ", bf_search(s_index,i,n,nodes));
        }
    }
}

void init_nodes(int n, Node* nodes) {
    for(int i = 0;i < n;i++) nodes[i].n_edges = 0;
}

void arrange_edges(int m, Node* nodes) {
    for(int i = 0;i < m;i++){
        int x, y;
        scanf("%d %d", &x, &y);
        Edge edge_x = {.point_x = x -1, .point_y = y -1};
        Edge edge_y = {.point_x = y -1, .point_y = x -1};
        nodes[x - 1].edges[nodes[x - 1].n_edges++] = edge_x;
        nodes[y - 1].edges[nodes[y - 1].n_edges++] = edge_y;
    }
}

void print_graph(int n, Node* nodes) {
    for(int i = 0;i < n;i++) {
        printf("Nodo %d: %d vertices\n",i + 1, nodes[i].n_edges);
        for(int j = 0;j < nodes[i].n_edges;j++) {
            printf("%d %d\n",nodes[i].edges[j].point_x,nodes[i].edges[j].point_y);
        }
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    while(T-- > 0) {
        Node* nodes;
        //Edge* edges;
        int n,m, s;
        scanf("%d %d",&n,&m);
        nodes = (Node*)malloc(n * sizeof(Node));
        init_nodes(n, nodes);
        arrange_edges(m,nodes);
        //print_graph(n,nodes);
        scanf("%d", &s);
        find_distances(n,s,nodes);
        printf("\n");
    }
    return 0;
}

