#include "ButtonFactoryTests.h"
enum IDS
{
    zero, one, two, three, four, five, six, seven, eight, nine, binary, hex, decimal, divide, mult, subtract, add, equals, mod, negative, clear
};
bool ButtonFactoryTests::Check2ButtonID()
{
    TestButton = buttonFactory.CreateTwoButton();
    if (TestButton->GetId() == 2)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::Check4ButtonID()
{
    TestButton = buttonFactory.CreateFourButton();
    if (TestButton->GetId() == 4)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::Check6ButtonID()
{
    TestButton = buttonFactory.CreateSixButton();
    if (TestButton->GetId() == 6)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::Check8ButtonID()
{
    TestButton = buttonFactory.CreateEightButton();
    if (TestButton->GetId() == 8)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckPlusButtonID()
{
    TestButton = buttonFactory.CreateAddButton();
    if (TestButton->GetId() == add)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckClearButtonID()
{
    TestButton = buttonFactory.CreateClearButton();
    if (TestButton->GetId() == clear)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckMultButtonID()
{
    TestButton = buttonFactory.CreateMultButton();
    if (TestButton->GetId() == mult)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckDivideButtonID()
{
    TestButton = buttonFactory.CreateDivideButton();
    if (TestButton->GetId() == divide)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckNegativeButtonID()
{
    TestButton = buttonFactory.CreateNegativeButton();
    if (TestButton->GetId() == negative)
    {
        return true;
    }
    return false;
}

bool ButtonFactoryTests::CheckSubtractButtonID()
{
    TestButton = buttonFactory.CreateSubtractButton();
    if (TestButton->GetId() == subtract)
    {
        return true;
    }
    return false;
}
