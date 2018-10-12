//
//  OCRBankCard.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef OCRBankCard_hpp
#define OCRBankCard_hpp

#include <stdio.h>

class OCRBankCard {
public:
    void detectBankCard(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* OCRBankCard_hpp */
