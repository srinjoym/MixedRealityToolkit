/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_SharingProfiler_WRAP_H_
#define SWIG_SharingProfiler_WRAP_H_

class SwigDirector_LogWriter : public XTools::LogWriter, public Swig::Director {

public:
    SwigDirector_LogWriter();
    virtual ~SwigDirector_LogWriter();
    virtual void WriteLogEntry(XTools::LogSeverity severity, std::string const &message);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(int, char *);
    void swig_connect_director(SWIG_Callback0_t callbackWriteLogEntry);

private:
    SWIG_Callback0_t swig_callbackWriteLogEntry;
    void swig_init_callbacks();
};

class SwigDirector_DiscoveryClientListener : public XTools::DiscoveryClientListener, public Swig::Director {

public:
    SwigDirector_DiscoveryClientListener();
    virtual ~SwigDirector_DiscoveryClientListener();
    virtual void OnRemoteSystemDiscovered(XTools::DiscoveredSystemPtr const &remoteSystem);
    virtual void OnRemoteSystemLost(XTools::DiscoveredSystemPtr const &remoteSystem);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnRemoteSystemDiscovered, SWIG_Callback1_t callbackOnRemoteSystemLost);

private:
    SWIG_Callback0_t swig_callbackOnRemoteSystemDiscovered;
    SWIG_Callback1_t swig_callbackOnRemoteSystemLost;
    void swig_init_callbacks();
};

class SwigDirector_ProfilerStreamListener : public XTools::ProfilerStreamListener, public Swig::Director {

public:
    SwigDirector_ProfilerStreamListener();
    virtual ~SwigDirector_ProfilerStreamListener();
    virtual void OnConnected();
    virtual void OnConnectFailed();
    virtual void OnDisconnected();
    virtual void OnReceiveProfileFrame(XTools::ProfileFramePtr const &newFrame);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)();
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackOnConnected, SWIG_Callback1_t callbackOnConnectFailed, SWIG_Callback2_t callbackOnDisconnected, SWIG_Callback3_t callbackOnReceiveProfileFrame);

private:
    SWIG_Callback0_t swig_callbackOnConnected;
    SWIG_Callback1_t swig_callbackOnConnectFailed;
    SWIG_Callback2_t swig_callbackOnDisconnected;
    SWIG_Callback3_t swig_callbackOnReceiveProfileFrame;
    void swig_init_callbacks();
};


#endif
