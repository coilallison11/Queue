//****************************************************************************************************
//
//         File:                        qDriver.cpp
//
//         Student:                     Allison Coil
//
//         Assignment:                  Program  # 7
//
//         Course Name:                 Data Structures   I
//
//         Course Number:               COSC 3050 - 01
//
//         Due:                         Mar 19, 2021
//
//
//         This program demonstrates the use of the Queue class.
//		   
//
//****************************************************************************************************

#include <iostream>
using namespace std;

//****************************************************************************************************

#include "queue.h"

//****************************************************************************************************

int main ()
{
	Queue <int> myQ;
	int removed,
		front,
		rear;

	if ( myQ.isEmpty () )
	{
		cout << "The queue is empty." << endl << endl;
	}
	else
	{
		cout << "The queue is not empty." << endl << endl;
	}

	if ( myQ.isFull () )
	{
		cout << "The queue is full." << endl << endl;
	}
	else
	{
		cout << "The queue is not full." << endl << endl;
	}

	if ( myQ.dequeue (removed) )
	{
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to dequeue." << endl << endl;
	}

	if ( myQ.viewFront (front) )
	{
		cout << endl << "Front value: " << front << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the front value." << endl << endl;
	}

	if ( myQ.viewRear (rear) )
	{
		cout << endl << "Rear value: " << rear << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the rear value." << endl << endl;
	}

	if ( myQ.enqueue (5) )
	{
		cout << "The value 5 was added to the queue.";
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to enqueue the value 5." << endl << endl;
	}

	if ( myQ.enqueue (2) )
	{
		cout << "The value 2 was added to the queue.";
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to enqueue the value 2." << endl << endl;
	}

	if ( myQ.enqueue (8) )
	{
		cout << "The value 8 was added to the queue.";
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << endl;
	}
	else
	{
		cout << "Unable to enqueue the value 8." << endl << endl;
	}

	if ( myQ.isEmpty () )
	{
		cout << "The queue is empty." << endl << endl;
	}
	else
	{
		cout << "The queue is not empty." << endl << endl;
	}

	if ( myQ.isFull () )
	{
		cout << "The queue is full." << endl << endl;
	}
	else
	{
		cout << "The queue is not full." << endl << endl;
	}

	if ( myQ.viewFront (front) )
	{
		cout << endl << "Front value: " << front << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the front value." << endl << endl;
	}

	if ( myQ.viewRear (rear) )
	{
		cout << endl << "Rear value: " << rear << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the rear value." << endl << endl;
	}

	if ( myQ.dequeue (removed) )
	{
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to dequeue." << endl << endl;
	}

	if ( myQ.dequeue (removed) )
	{
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to dequeue." << endl << endl;
	}

	if ( myQ.viewFront (front) )
	{
		cout << endl << "Front value: " << front << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the front value." << endl << endl;
	}

	if ( myQ.viewRear (rear) )
	{
		cout << endl << "Rear value: " << rear << endl << endl;
	}
	else
	{
		cout << "Unable to retrieve the rear value." << endl << endl;
	}

	if ( myQ.dequeue (removed) )
	{
		cout << endl << "NumValues: " << myQ.getNumValues ();
		cout << endl << "Value removed: " << removed << endl << endl;
	}
	else
	{
		cout << "Unable to dequeue." << endl << endl;
	}

	if ( myQ.isEmpty () )
	{
		cout << "The queue is empty." << endl << endl;
	}
	else
	{
		cout << "The queue is not empty." << endl << endl;
	}

	return 0;
}

//****************************************************************************************************

/*
The queue is empty.

The queue is not full.

Unable to dequeue.

Unable to retrieve the front value.

Unable to retrieve the rear value.

The value 5 was added to the queue.
NumValues: 1

The value 2 was added to the queue.
NumValues: 2

The value 8 was added to the queue.
NumValues: 3

The queue is not empty.

The queue is not full.


Front value: 5


Rear value: 8


NumValues: 2
Value removed: 5


NumValues: 1
Value removed: 2


Front value: 8


Rear value: 8


NumValues: 0
Value removed: 8

The queue is empty.
*/