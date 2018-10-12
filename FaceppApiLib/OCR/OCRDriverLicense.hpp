//
//  OCRDriverLicense.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef OCRDriverLicense_hpp
#define OCRDriverLicense_hpp

#include <stdio.h>

class OCRDriverLicense {
public:
    void detectDriverLicense(const char *api_key ,const char *api_secret,const char *filePath, const int return_score);
};

#endif /* OCRDriverLicense_hpp */
