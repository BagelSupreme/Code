
public class Date1 {
private int month;
private int day;
private int year;

//constructor
public Date1(int monthvalue, int dayvalue, int yearvalue)
{
month = monthvalue;
day = dayvalue;
year = yearvalue;
}
public void setMonth(int monthvalue)
{
month = monthvalue;
}

public int getMonth()
{
return month;

}
public void setDay(int dayvalue)
{
day = dayvalue;
}

public int getDay()
{
return day;
}

public void setYear(int yearvalue)
{
year = yearvalue;
}

public int getYear()
{
return year;
}

public void displayDate()
{
System.out.printf("%d/%d/%d\n", getMonth(), getDay(), getYear());
}

}
