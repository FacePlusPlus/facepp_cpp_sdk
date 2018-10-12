//
//  OCRIDCard.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef OCRIDCard_hpp
#define OCRIDCard_hpp

#include <stdio.h>

class OCRIDCardApi {
public:
    void detectIdCard(const char *api_key ,const char *api_secret,const char *filePath, const int legality);
};

#endif /* OCRIDCard_hpp */
