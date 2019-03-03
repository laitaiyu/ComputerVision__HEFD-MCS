#pragma once

#include "stdafx.h"
#include "CAlgorithm.h"


#ifdef DLLEX
#define DLL  __declspec(dllexport)     // export DLL information
#else
#define DLL  __declspec(dllimport)     // import DLL information
#endif

#define _IN_   
#define _OUT_  
#define _INOUT_


class DLL COtherAlgorithm0002
{

public:

    COtherAlgorithm0002();
    ~COtherAlgorithm0002();

    bool AlgInit (                      
        bool* _INOUT_ pbInOutInitial,   
        void* _IN_ pstInInitParameter,  
        void* _IN_ pInReserve           
        );

    bool AlgRelease (                
        void* _IN_ pInReserve,       
        void* _OUT_ pOutReserve      
        );

    bool AlgInput (                     
        unsigned char* _IN_ pucInData,  
        long _IN_ lInWidth,             
        long _IN_ lInHeight,            
        long _IN_ lInBitDepth,          
        void* _IN_ pstInInputParameter, 
        void* _IN_ pInReserve           
        );

    bool AlgProcessing (               
        void* _IN_ pInReserve,         
        void* _OUT_ pOutReserve        
        );

    bool AlgOutput (                      
        unsigned char* _OUT_ pucOutData1,  
        unsigned char* _OUT_ pucOutData2,
        double* _OUT_ dbOutTimeDiff,
        void* _OUT_ pstOutputParameter,   
        void* _OUT_ pOutReserve           
        );

private:

    void *pAlg;

};