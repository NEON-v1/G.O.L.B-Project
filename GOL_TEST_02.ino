#include <Wire.h>

int h, v; // X and Y axis of GOL

void setup() {
  Serial.begin(9600);

  h = 16;
  v = 16;
  int grid[h][v];
  int cells[8] = { 18, 35, 49, 50, 51 };
  int cellsCheck;

  for (int x = 0; x < h; x++) { // Initialize grid Cells with 'O'
    for (int y = 0; y < v; y++) {

      if (y + x * v == cells[cellsCheck]) {
        grid[x][y] = 1;
        cellsCheck++;
      }
      else {
        grid[x][y] = 0;
      }
    }
  }

  for (int x = 0; x < h; x++) { // Debug 
    for (int y = 0; y < v; y++) {
      Serial.print(grid[x][y]);
    }
    Serial.print("\n");
  }
}

void loop() {

}
