// **********************************************************************
// This file was generated by a TAF parser!
// TAF version 2.1.5.0 by WSRD Tencent.
// Generated from `FrontServer.jce'
// **********************************************************************

package com.qq.Oss;

public final class enOssRet implements java.io.Serializable
{
    private static enOssRet[] __values = new enOssRet[2];
    private int __value;
    private String __T = new String();

    public static final int _en_Oss_RetOK = 0;
    public static final enOssRet en_Oss_RetOK = new enOssRet(0,_en_Oss_RetOK,"en_Oss_RetOK");
    public static final int _en_Oss_RetFail = 1;
    public static final enOssRet en_Oss_RetFail = new enOssRet(1,_en_Oss_RetFail,"en_Oss_RetFail");

    public static enOssRet convert(int val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].value() == val)
            {
                return __values[__i];
            }
        }
        assert false;
        return null;
    }

    public static enOssRet convert(String val)
    {
        for(int __i = 0; __i < __values.length; ++__i)
        {
            if(__values[__i].toString().equals(val))
            {
                return __values[__i];
            }
        }
        assert false;
        return null;
    }

    public int value()
    {
        return __value;
    }

    public String toString()
    {
        return __T;
    }

    private enOssRet(int index, int val, String s)
    {
        __T = s;
        __value = val;
        __values[index] = this;
    }

}
