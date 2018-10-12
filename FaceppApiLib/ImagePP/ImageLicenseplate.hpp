//
//  ImageLicenseplate.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef ImageLicenseplate_hpp
#define ImageLicenseplate_hpp

#include <stdio.h>

class LicensePlate {
public:
    void detectLicensePlate(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* ImageLicenseplate_hpp */
