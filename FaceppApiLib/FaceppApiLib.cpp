//
//  FaceppApiLib.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/29.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include <iostream>
#include "FaceppApiLib.hpp"
#include "FaceppApiLibPriv.hpp"

void FaceppApiLib::HelloWorld(const char * s)
{
    FaceppApiLibPriv *theObj = new FaceppApiLibPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void FaceppApiLibPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

