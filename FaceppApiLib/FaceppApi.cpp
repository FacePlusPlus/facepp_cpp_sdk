//
//  FaceppApi.cpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#include "FaceppApi.hpp"
#include "Face/FaceDetect.hpp"
#include "Face/FaceCompare.hpp"
#include "Face/FaeBeautify.hpp"
#include "Face/FaceAnalyze.hpp"
#include "Face/FaceGetDetail.hpp"
#include "Face/FaceSetUserId.hpp"

#include "FaceSet/FaceSetCreate.hpp"
#include "FaceSet/FaceSetAdd.hpp"
#include "FaceSet/FaceSetRemove.hpp"
#include "FaceSet/FaceSetSearch.hpp"
#include "FaceSet/FaceSetAddFaceAsync.hpp"
#include "FaceSet/FaceSetRemoceFaceAsync.hpp"
#include "FaceSet/FaceSetDetail.hpp"
#include "FaceSet/FaceSetUpdate.hpp"
#include "FaceSet/FaceSetDelete.hpp"
#include "FaceSet/FaceSetList.hpp"
#include "FaceSet/FaceSetGetTaskStatus.hpp"

#include "HumanBody/HumanBodyDetect.hpp"
#include "HumanBody/HumanBodySkeleton.hpp"
#include "HumanBody/HumanBodySegment.hpp"
#include "HumanBody/Guesture.hpp"

#include "OCR/OCRIDCard.hpp"
#include "OCR/OCRDriverLicense.hpp"
#include "OCR/OCRVehicle.hpp"
#include "OCR/OCRBankCard.hpp"

#include "ImagePP/ImageLicenseplate.hpp"
#include "ImagePP/MergeFace.hpp"
#include "ImagePP/RecognizeText.hpp"
#include "ImagePP/SceneAndObject.hpp"

#include "CurlPost.hpp"

FaceppApi::FaceppApi(const char * key, const char * secret){
    this->key = key;
    this->secret = secret;
};

/**
 *
 */
void FaceppApi::detect(const char *filePath) {
    FaceDetectApi detectApi = FaceDetectApi();
    detectApi.detect(key, secret, filePath);
}

void FaceppApi::compare(const char *file_1,const char *file_2) {
    FaceCompareApi compareApi  =FaceCompareApi();
    compareApi.compare(key, secret, file_1, file_2);
}

void FaceppApi::beautify(const char *file) {
    FaceBeautyfiApi beautifyApi = FaceBeautyfiApi();
    beautifyApi.beautify(key, secret, file);
}

void FaceppApi::analyze(const char *face_tokens,const char *return_attributes) {
    FaceAnalyzeApi anlyzeApi = FaceAnalyzeApi();
    anlyzeApi.analyze(key, secret, face_tokens, return_attributes);
}

void FaceppApi::getDetail(const char *face_token) {
    FaceGetDetailApi detailApi = FaceGetDetailApi();
    detailApi.getDetail(key, secret, face_token);
}

void FaceppApi::setUserId(const char *face_token, const char *user_id) {
    FaceSetUserIdApi faceApi = FaceSetUserIdApi();
    faceApi.setUserId(key, secret, face_token, user_id);
}

// FaceSet Api 组
void FaceppApi::createFaceset(const char *name) {
    FaceSetCreateApi createApi = FaceSetCreateApi();
    createApi.createFaceset(key, secret, name);
}

void FaceppApi::addFace(const char *faceset_token, const char* face_tokens) {
    FaceSetAddFaceApi api = FaceSetAddFaceApi();
    api.addFace(key, secret, faceset_token, face_tokens);
}

void FaceppApi::addFaceAsync(const char *faceset_token, const char* face_tokens) {
    FaceSetAddFaceAsyncApi api = FaceSetAddFaceAsyncApi();
    api.addFaceAsync(key, secret, faceset_token, face_tokens);
}

void FaceppApi::removeFace(const char *api_key, const char *api_secret, const char *faceset_token, const char *face_tokens) {
    FaceSetRemoveApi api = FaceSetRemoveApi();
    api.removeFace(key, secret, faceset_token, face_tokens);
}

void FaceppApi::removeFaceAsync(const char *faceset_token, const char* face_tokens) {
    FaceSetRemoveFaceAsync api = FaceSetRemoveFaceAsync();
    api.removeFaceAsync(key, secret, faceset_token, face_tokens);
}

void FaceppApi::search(const char *filePath, const char *faceset_token) {
    FaceSetSearch api = FaceSetSearch();
    api.search(key, secret, filePath, faceset_token);
}

void FaceppApi::getFaceSetDetail(const char *faceset_token) {
    FaceSetDetailApi api = FaceSetDetailApi();
    api.getDetail(key, secret, faceset_token);
}

void FaceppApi::updateFaceSet(const char *faceset_token, const char* new_name) {
    FaceSetUpdate api = FaceSetUpdate();
    api.update(key, secret, faceset_token, new_name);
}

void FaceppApi::detelteFaceSet(const char *faceset_token, int check_empty) {
    FaceSetDeleteApi api = FaceSetDeleteApi();
    api.detelte(key, secret, faceset_token, check_empty);
}

void FaceppApi::getFaceSetList(const char *api_key ,const char *api_secret) {
    FaceSetListApi api = FaceSetListApi();
    api.getFaceSetList(key, secret);
}

void FaceppApi::getTaskStatus(const char *api_key, const char *api_secret, const char *task_id) {
    FaceSetGetTaskStatus api = FaceSetGetTaskStatus();
    api.getTaskStatus(key, secret, task_id);
}

// 人体检测 Api 组
void FaceppApi::detectBody(const char *filePath, const char *return_attributes) {
    HumanBodyDetectApi api = HumanBodyDetectApi();
    api.detectBody(key, secret, filePath, return_attributes);
}

void FaceppApi::detectSkeleton(const char *filePath) {
    HumanBodySkeleton api = HumanBodySkeleton();
    api.detectSkeleton(key, secret, filePath);
}

void FaceppApi::humanbodySegment(const char *filePath) {
    HumanBodySegment api = HumanBodySegment();
    api.humanbodySegment(key, secret, filePath);
}

void FaceppApi::detectGuesture(const char *filePath) {
    Guesture api = Guesture();
    api.detectGuesture(key, secret, filePath);
}

// 证件识别 Api 组
void FaceppApi::detectIdCard(const char *filePath, const int legality) {
    OCRIDCardApi api = OCRIDCardApi();
    api.detectIdCard(key, secret, filePath, legality);
}

void FaceppApi::detectDriverLicense(const char *filePath, const int return_score) {
    OCRDriverLicense api = OCRDriverLicense();
    api.detectDriverLicense(key, secret, filePath, return_score);
}

void FaceppApi::detectVehicle(const char *filePath) {
    OCRVehicle api = OCRVehicle();
    api.detectVehicle(key, secret, filePath);
}

void FaceppApi::detectBankCard(const char *filePath) {
    OCRBankCard api = OCRBankCard();
    api.detectBankCard(key, secret, filePath);
}

// 图像识别 Api 组
void FaceppApi::detectLicensePlate(const char *filePath) {
    LicensePlate api = LicensePlate();
    api.detectLicensePlate(key, secret, filePath);
}

void FaceppApi::mergeFace(const char *template_file, const char *merge_file, const int merge_rate) {
    MergeFaceApi api = MergeFaceApi();
    api.mergeFace(key, secret, template_file, merge_file, merge_rate);
}

void FaceppApi::recognizetext(const char *filePath) {
    RecognizeTextApi api = RecognizeTextApi();
    api.recognizetext(key, secret, filePath);
}

void FaceppApi::detectSceneAndObject(const char *filePath) {
    SceneAndObject api = SceneAndObject();
    api.detectSceneAndObject(key, secret, filePath);
}

