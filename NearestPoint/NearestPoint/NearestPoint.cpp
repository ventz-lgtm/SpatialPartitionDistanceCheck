// NearestPoint.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <ctime>
#include "LinearPointCollection.h"

using namespace std;

int main()
{
	cout << "Begin" << endl;
	cin.ignore();

	int numOfPoints = 10000000;

	LinearPointCollection linearCollection;
	linearCollection.CreatePoints(numOfPoints);
	linearCollection.InitializeCollection();

	long double startTime = std::time(0);
	Vector3* pClosestPoint = linearCollection.GetClosestPoint(new Vector3(0.f, 0.f, 0.f));
	long double endTime = std::time(0);
	long double difference = endTime - startTime;

	cout << "Closest point found (" << pClosestPoint->x << ", " << pClosestPoint->y << ", " << pClosestPoint->z << ")" << endl;
	cout << "Linear closest point took " << difference << "ms" << endl;
	cin.ignore();

    return 0;
}