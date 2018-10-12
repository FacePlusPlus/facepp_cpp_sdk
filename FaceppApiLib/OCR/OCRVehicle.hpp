//
//  OCRVehicle.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef OCRVehicle_hpp
#define OCRVehicle_hpp

#include <stdio.h>

class OCRVehicle {
public:
    void detectVehicle(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* OCRVehicle_hpp */
