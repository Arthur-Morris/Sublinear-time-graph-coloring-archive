#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <vector>
#include <time.h>
using namespace std;
//The greedy algorithm :
class vertex {
public:
    vector<int> nebours;
    vector<int> colours;
    int finalcolour;
};
int main(int argc, char** argv)
{
    char mode = 'n';
    int n = 0;
    const char* temp[12] = { "16.txt", "32.txt", "64.txt", "128.txt",
        "256.txt", "512.txt", "1024.txt", "2048.txt",
        "4096.txt", "8192.txt", "16384.txt", "32768.txt" };
    for (int x = 0; x < 12; x++) {
        cout << "starting " << temp[x] << "\n";
        ifstream input(temp[x], ifstream::in);
        input >> n;
        int deg = -1;
        input >> deg;
        srand((int)time(0));
        char edges[n][n];
        for (int i = 0; i < n; i++) {
            for (int c = 0; c < n; c++) {
                input >> edges[i][c];
                edges[i][c] -= '0';
                edges[c][i] = edges[i][c];
            }
        }
        input.close();
        for (int runs = 0; runs < 25; runs++) {
            vector<vertex> vertarr;
            // initalise vertexs
            for (int i = 0; i < n; i++) {
                vertex v;
                for (int l = 0; l < deg + 1; l++) {
                    v.colours.push_back(0);
                }
                v.finalcolour = -1;
                for(int r = 0; r < n; r++)
                {
                    if (edges[i][r]) {
                        v.nebours.push_back(r);
                    }
                }
                v.finalcolour = -1;
                vertarr.push_back(v);
            }
            clock_t start = clock();
            for (int i = 0; i < n; i++) {
                for (int c = 0; c < vertarr[i].nebours.size(); c++) {
                    if (vertarr[vertarr[i].nebours.at(c)].finalcolour != -1) {
                        vertarr[i].colours.at(
                            vertarr[vertarr[i].nebours.at(c)].finalcolour)
                            = 1;
                    }
                }
                for (int c = 0; c < vertarr[i].colours.size(); c++) {
                    if (vertarr[i].colours.at(c) == 0) {
                        vertarr[i].finalcolour = c;
                        break;
                    }
                }
            }
            clock_t end = clock();
            double time = (double)(end - start) / CLOCKS_PER_SEC;
            cout << time << "\n";
           
        }
    }
    return 0;

