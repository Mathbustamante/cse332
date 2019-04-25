#include "pch.h"
#include "utilityfunctions.h"
#include<time.h>

/** This function advances a tm struct. It will compare starting date/time of 2 events.
* Param is 2 dates/times need be compared
* Return value: 0 - equal, a positive number if first date/time occurse after, a negative number if first date/time occurse before
*/
time_t CalendarUtility::compareDateTime(tm dt1, tm dt2) {
	if (dt1.tm_year == dt2.tm_year && dt1.tm_mon == dt2.tm_mon && dt1.tm_mday == dt2.tm_mday &&
		dt1.tm_hour == dt2.tm_hour && dt1.tm_min == dt2.tm_min)
		return 0;
	return mktime(&dt1) - mktime(&dt2);
}