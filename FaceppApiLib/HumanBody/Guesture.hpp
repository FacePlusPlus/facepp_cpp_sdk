//
//  Guesture.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef Guesture_hpp
#define Guesture_hpp

#include <stdio.h>

class Guesture {
public:
    void detectGuesture(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* Guesture_hpp */
