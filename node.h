//
// Created by Krong on 27-11-2021.
//

#ifndef ADA2_NODE_H
#define ADA2_NODE_H

class Node{
public:
    int x, y;
    int distance;
    Node(){};
    Node(int x, int y, int distance) :x(x), y(y), distance(distance);
    {}
};


#endif //ADA2_NODE_H
