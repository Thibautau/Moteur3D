//
// Created by thiba on 18/02/2025.
//

#ifndef PROJECTION_H
#define PROJECTION_H



class Projection {
private:
    // https://www.youtube.com/watch?v=ih20l3pJoeU&list=LL&index=3&t=1610s for more info
    static double m_dFNear;
    static double m_dFFar;
    static double m_dFov;

public:
    static bool projectPointOnPlane(double in_iXToProject, double in_iYToProject, double in_iZToProject, int in_iPlaneHeight, int in_iPlaneWidth, double& out_iXProjected, double& out_iYProjected, double& out_iZProjected);

    static double tanDegree(double in_dDegree);
};



#endif //PROJECTION_H
