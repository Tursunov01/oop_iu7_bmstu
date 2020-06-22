#ifndef EDGE_H
#define EDGE_H

class Edge{
public:
    Edge(unsigned startPointId, unsigned endPointId);
    virtual ~Edge();

    unsigned getStartPointId() const;
    unsigned getEndtPointId() const;

private:
    unsigned startPointId { 0 };
    unsigned endPointId { 0 };
};

#endif // EDGE_H
