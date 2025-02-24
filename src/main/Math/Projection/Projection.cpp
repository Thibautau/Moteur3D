//
// Created by thiba on 18/02/2025.
//

#include "Projection.h"
#include <cmath>  // Pour tan() et M_PI

double Projection::m_dFNear = 0.1;
double Projection::m_dFFar = 1000.0;
double Projection::m_dFov = 90.0;

bool Projection::projectPointOnPlane(double in_iXToProject, double in_iYToProject, double in_iZToProject, int in_iPlaneHeight, int in_iPlaneWidth, double& out_iXProjected, double& out_iYProjected, double& out_iZProjected)
{
    // https://www.youtube.com/watch?v=ih20l3pJoeU&list=LL&index=3&t=1610s for more infos

    double dScreenRation = in_iPlaneHeight / in_iPlaneWidth;
    double dFovRad = (1.0 / tanDegree(m_dFov * 0.5));

    double tabdProjectionMatrix[4][4] = {};
    tabdProjectionMatrix[0][0] = dScreenRation * in_iXToProject;
    tabdProjectionMatrix[1][1] = dFovRad;
    tabdProjectionMatrix[2][2] = m_dFFar / (m_dFFar - m_dFNear);
    tabdProjectionMatrix[3][2] = (-m_dFFar * m_dFNear) / (m_dFFar - m_dFNear);
    tabdProjectionMatrix[2][3] = 1.0;
    tabdProjectionMatrix[3][3] = 0.0;

    return true;
}

double Projection::tanDegree(double in_dDegree)
{
    return tan(in_dDegree * M_PI / 180.0);
}