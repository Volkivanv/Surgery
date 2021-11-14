//
// Created by Ivan on 14.11.2021.
//
#pragma once;
#include <iostream>


struct point{
    double x;
    double y;
};

void inputPoint(point& sp){
    std::cout << "Input point coordinates X, Y" << std::endl;
    std::cin >> sp.x >> sp.y;
}

void outputPoint(point& sp){
    std::cout << "X=" <<sp.x <<" "<<"Y="<<sp.y;
}

void scalpel(point& fp, point& sp){
    std::cout<<"Begin incision: ";
    inputPoint(fp);
    std::cout<<"End incision: ";
    inputPoint(sp);
    std::cout<<"You made incision from ";
    outputPoint(fp);
    std::cout<<" to ";
    outputPoint(sp);
    std::cout<<std::endl;
}

void hemostat(point& sp){
    std::cout<<"hemostat: ";
    inputPoint(sp);
    std::cout<<"hemostat is installed in coordinates: ";
    outputPoint(sp);
    std::cout<<std::endl;
}

void tweezers(point& sp){
    std::cout<<"tweezers: ";
    inputPoint(sp);
    std::cout<<"tweezers is installed in coordinates: ";
    outputPoint(sp);
    std::cout<<std::endl;
}

void suture(point& fp, point& sp){
    std::cout<<"Begin suture: ";
    inputPoint(fp);
    std::cout<<"End suture: ";
    inputPoint(sp);
    std::cout<<"You made suture from ";
    outputPoint(fp);
    std::cout<<" to ";
    outputPoint(sp);
    std::cout<<std::endl;
}