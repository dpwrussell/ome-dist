// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `ServerErrors.ice'

#ifndef __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ServerErrors_h__
#define __omero__opt_hudson_workspace_OMERO_5_0_release_src_components_blitz_generated_omero_ServerErrors_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <Glacier2/Session.h>
#include <omero/Collections.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace IceProxy
{

}

namespace IceInternal
{

}

namespace omero
{

class ServerError : public ::Ice::UserException
{
public:

    ServerError() {}
    ServerError(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ServerError() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string serverStackTrace;
    ::std::string serverExceptionClass;
    ::std::string message;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static ServerError __ServerError_init;

class SessionException : public ::omero::ServerError
{
public:

    SessionException() {}
    SessionException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~SessionException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class RemovedSessionException : public ::omero::SessionException
{
public:

    RemovedSessionException() {}
    RemovedSessionException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~RemovedSessionException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class SessionTimeoutException : public ::omero::SessionException
{
public:

    SessionTimeoutException() {}
    SessionTimeoutException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~SessionTimeoutException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ShutdownInProgress : public ::omero::SessionException
{
public:

    ShutdownInProgress() {}
    ShutdownInProgress(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ShutdownInProgress() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class AuthenticationException : public ::Glacier2::CannotCreateSessionException
{
public:

    AuthenticationException() {}
    explicit AuthenticationException(const ::std::string&);
    virtual ~AuthenticationException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ExpiredCredentialException : public ::Glacier2::CannotCreateSessionException
{
public:

    ExpiredCredentialException() {}
    explicit ExpiredCredentialException(const ::std::string&);
    virtual ~ExpiredCredentialException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class WrappedCreateSessionException : public ::Glacier2::CannotCreateSessionException
{
public:

    WrappedCreateSessionException() {}
    WrappedCreateSessionException(const ::std::string&, bool, ::Ice::Long, const ::std::string&);
    virtual ~WrappedCreateSessionException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    bool concurrency;
    ::Ice::Long backOff;
    ::std::string type;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class InternalException : public ::omero::ServerError
{
public:

    InternalException() {}
    InternalException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~InternalException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ResourceError : public ::omero::ServerError
{
public:

    ResourceError() {}
    ResourceError(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ResourceError() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class NoProcessorAvailable : public ::omero::ResourceError
{
public:

    NoProcessorAvailable() {}
    NoProcessorAvailable(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Int);
    virtual ~NoProcessorAvailable() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int processorCount;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ConcurrencyException : public ::omero::ServerError
{
public:

    ConcurrencyException() {}
    ConcurrencyException(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual ~ConcurrencyException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Long backOff;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ConcurrentModification : public ::omero::ConcurrencyException
{
public:

    ConcurrentModification() {}
    ConcurrentModification(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual ~ConcurrentModification() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class DatabaseBusyException : public ::omero::ConcurrencyException
{
public:

    DatabaseBusyException() {}
    DatabaseBusyException(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual ~DatabaseBusyException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class OptimisticLockException : public ::omero::ConcurrencyException
{
public:

    OptimisticLockException() {}
    OptimisticLockException(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual ~OptimisticLockException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class LockTimeout : public ::omero::ConcurrencyException
{
public:

    LockTimeout() {}
    LockTimeout(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Int);
    virtual ~LockTimeout() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Int seconds;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class TryAgain : public ::omero::ConcurrencyException
{
public:

    TryAgain() {}
    TryAgain(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long);
    virtual ~TryAgain() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class MissingPyramidException : public ::omero::ConcurrencyException
{
public:

    MissingPyramidException() {}
    MissingPyramidException(const ::std::string&, const ::std::string&, const ::std::string&, ::Ice::Long, ::Ice::Long);
    virtual ~MissingPyramidException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::Ice::Long pixelsID;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ApiUsageException : public ::omero::ServerError
{
public:

    ApiUsageException() {}
    ApiUsageException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ApiUsageException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class OverUsageException : public ::omero::ApiUsageException
{
public:

    OverUsageException() {}
    OverUsageException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~OverUsageException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class QueryException : public ::omero::ApiUsageException
{
public:

    QueryException() {}
    QueryException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~QueryException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ValidationException : public ::omero::ApiUsageException
{
public:

    ValidationException() {}
    ValidationException(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ValidationException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ChecksumValidationException : public ::omero::ValidationException
{
public:

    ChecksumValidationException() {}
    ChecksumValidationException(const ::std::string&, const ::std::string&, const ::std::string&, const ::omero::api::IntStringMap&);
    virtual ~ChecksumValidationException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::omero::api::IntStringMap failingChecksums;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class FilePathNamingException : public ::omero::ValidationException
{
public:

    FilePathNamingException() {}
    FilePathNamingException(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&, const ::omero::api::IntegerList&, const ::omero::api::StringSet&, const ::omero::api::StringSet&, const ::omero::api::StringSet&);
    virtual ~FilePathNamingException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string illegalFilePath;
    ::omero::api::IntegerList illegalCodePoints;
    ::omero::api::StringSet illegalPrefixes;
    ::omero::api::StringSet illegalSuffixes;
    ::omero::api::StringSet illegalNames;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class SecurityViolation : public ::omero::ServerError
{
public:

    SecurityViolation() {}
    SecurityViolation(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~SecurityViolation() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class GroupSecurityViolation : public ::omero::SecurityViolation
{
public:

    GroupSecurityViolation() {}
    GroupSecurityViolation(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~GroupSecurityViolation() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class PermissionMismatchGroupSecurityViolation : public ::omero::SecurityViolation
{
public:

    PermissionMismatchGroupSecurityViolation() {}
    PermissionMismatchGroupSecurityViolation(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~PermissionMismatchGroupSecurityViolation() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class ReadOnlyGroupSecurityViolation : public ::omero::SecurityViolation
{
public:

    ReadOnlyGroupSecurityViolation() {}
    ReadOnlyGroupSecurityViolation(const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~ReadOnlyGroupSecurityViolation() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

class OmeroFSError : public ::omero::ServerError
{
public:

    OmeroFSError() {}
    OmeroFSError(const ::std::string&, const ::std::string&, const ::std::string&, const ::std::string&);
    virtual ~OmeroFSError() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

namespace IceProxy
{

}

namespace IceDelegate
{

}

namespace IceDelegateM
{

}

namespace IceDelegateD
{

}

#endif
