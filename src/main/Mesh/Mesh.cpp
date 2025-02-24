//
// Created by thiba on 17/02/2025.
//

#include "Mesh.h"


Mesh::Mesh()
{
    m_iNbVertices = 0;
    m_vectOfVertices = {};
}

Mesh::Mesh(const std::vector<double>& in_vectOfVertices, int in_iNbVertices)
{
    m_iNbVertices = in_iNbVertices;
    m_vectOfVertices = in_vectOfVertices;
}

Mesh::Mesh(const Mesh& in_otherMesh)
{
    m_iNbVertices = in_otherMesh.m_iNbVertices;
    m_vectOfVertices = in_otherMesh.m_vectOfVertices;
}

std::vector<double> Mesh::getVectorOfVerticesByCopy() const
{
    return m_vectOfVertices;
}

const std::vector<double> &Mesh::getVectorOfVerticesByRef() const
{
    return m_vectOfVertices;
}

int Mesh::getNbOfVertices() const
{
    return m_iNbVertices;
}
