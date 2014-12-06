// In The Name Of God
// ========================================
// * File Name : Service.c
// 
// * Creation Date : 05-12-2014
//
// * Last Modified : Sat 06 Dec 2014 12:38:45 AM IRST
//
// * Created By : Parham Alvani (parham.alvani@gmail.com)
// =======================================
#include <string>

#include "Service.h"

std::string Service::getName() const{
	return mName;
}

void Service::setName(std::string name){
	mName = name;
}

std::string Service::getModel() const{
	return mModel;
}

void Service::setModel(std::string model){
	mModel = model;
}

std::string Service::getCostumerComment() const{
	return mCostumerComment;
}

void Service::setCostumerComment(std::string costumerComment){
	mCostumerComment = costumerComment;
}

std::string Service::getTechnicalComment() const{
	return mTechnicalComment;
}

void Service::setTechnicalComment(std::string technicalComment){
	mTechnicalComment = technicalComment;
}

int Service::getRunTime() const{
	return mRunTime;
}

void Service::setRunTime(int runTime){
	mRunTime = runTime;
}

int Service::getCost() const{
	return mCost;
}

void Service::setCost(int cost){
	mCost = cost;
}