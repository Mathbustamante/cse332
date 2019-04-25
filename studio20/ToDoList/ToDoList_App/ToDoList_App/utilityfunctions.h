#pragma once

#include<ctime>
/*
Author: Jon Shidal
Purpose: declare functions for dealing with tm structs, particularly for advancing the date/time represented by a particular number of days.
*/

class CalendarUtility {
public:
	static time_t compareDateTime(tm dt1, tm dt2);
};