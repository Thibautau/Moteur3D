//
// Created by thiba on 17/02/2025.
//

#ifndef MESH_H
#define MESH_H
#include <vector>

#include "IMesh.h"


class Mesh : public IMesh
{
private:

    std::vector<double> m_vectOfVertices;
    int m_iNbVertices;

public:
    Mesh();
    ~Mesh() = default;

    /**
     * Constructor by copy
     * @param in_vectOfVertices vector of vertices
     * @param in_iNbVertices number of vertices in the Mesh
     */
    Mesh(const std::vector<double>& in_vectOfVertices, int in_iNbVertices);

    /**
     * Constructor by copy
     * @param in_otherMesh The Mesh to make a copy of
     */
    Mesh(const Mesh& in_otherMesh);

    /**
     *  Returns a copy of m_vectOfVertices
     * @return a copy of m_vectOfVertices.
     */
    [[nodiscard]] std::vector<double> getVectorOfVerticesByCopy() const;

    /**
     *  Returns m_vectOfVertices but you can't modify it
     * @return m_vectOfVertices.
     */
    [[nodiscard]] const std::vector<double>& getVectorOfVerticesByRef() const;

    /**
     * 
     * @return m_iNbVertices
     */
    [[nodiscard]] int getNbOfVertices() const;
};



#endif //MESH_H
