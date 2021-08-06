<include cs50.h>
<include stdio.h>


bool triangle(float x, float y, float z);

bool triangle(float x, float y, float z)
{
    if (x <= 0 || y <= 0 || z <= 0)
    {
        return false;
    }
    if ((x + y <= z) || (x + z <= y) || (y + z <= x))
    {
        return false;
    }
    
    return true
}