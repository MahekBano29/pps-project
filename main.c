#include <stdio.h>

struct Package {
    float x;
    float y;
    float weight;
    int priority;
};

int main() {
    float maxweight = 15.0f; // Drone max weight limit[cite: 3]
    int n = 3;               // Number of packages[cite: 3]

    // Pre-filled package data (x, y, weight, priority)[cite: 3]
    struct Package p[] = {
        {2.0f, 3.0f, 5.0f, 1},
        {4.0f, 1.0f, 10.0f, 2},
        {6.0f, 8.0f, 20.0f, 3} // This one exceeds maxweight[cite: 3]
    };

    float curr_x = 0.0f, curr_y = 0.0f;
    float total_distance = 0.0f, total_weight = 0.0f;

    printf("--- Drone Delivery Path Planner ---\n");
    printf("Max Weight Capacity: %.2f kg\n", maxweight);

    printf("\nDelivery Sequence:\n");
    for(int i = 0; i < n; i++) {
        if(p[i].weight > maxweight) {
            printf("Package %d (Weight: %.1f kg) exceeds weight limit.\n", i + 1, p[i].weight);
            continue;
        }
    }

    return 0;
}
