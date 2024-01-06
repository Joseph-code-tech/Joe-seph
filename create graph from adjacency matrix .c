// Define the number of vertices
#define N 5

// Create an adjacency matrix
int adj_matrix [N] [N] = {{0, 1, 0, 0, 1},
                          {1, 0, 1, 1, 0},
                          {0, 1, 0, 1, 0},
                          {0, 1, 1, 0, 1},
                          {1, 0, 0, 1, 0}};

// A function to print the adjacency matrix
void print_matrix () {
  for (int i = 0; i < N; i++) {
  printf("%d: ", i);
    for (int j = 0; j < N; j++) {
      printf("%d ", adj_matrix [i] [j]);
    }
    printf("\n");
  }
}

// A function to create a graph from the matrix
void create_graph () {
  // You can use any graph library or data structure that suits your needs
  // For simplicity, we will just print the edges of the graph
  printf("The edges of the graph are:\n");
  for (int i = 0; i < N; i++) {
       
    for (int j = i + 1; j < N; j++) {
      if (adj_matrix [i] [j] == 1) {
        printf("(%d, %d)\n", i, j);
      }
    }
  }
}

// The main function
int main () {
  // Print the adjacency matrix
  printf("The adjacency matrix is:\n");
  print_matrix ();

  // Create the graph from the matrix
  create_graph ();

  return 0;
}
