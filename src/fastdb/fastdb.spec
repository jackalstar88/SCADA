Summary: Fast In-Memory RDBMS
Name: fastdb
Version: 3.28
Release: 1.%{?_vendorsuffix:%{_vendorsuffix}}%{!?_vendorsuffix:%{_vendor}}
Copyright: BSD
Group: Development/Libraries
URL: http://www.fastdb.org
Source: fastdb-3.28.tar.gz
Packager: %{?_packager:%{_packager}}%{!?_packager:%{_vendor}}
Vendor: %{?_vendorinfo:%{_vendorinfo}}%{!?_vendorinfo:%{_vendor}}
Distribution: %{?_distribution:%{_distribution}}%{!?_distribution:%{_vendor}}
Prefix: %{_prefix}
BuildRoot: /var/tmp/%{name}-%{version}-%{release}-root

%description
FastDB is a highly efficient main memory database system with realtime
capabilities and convenient C++ interface.  It is optimized for
applications with dominated read access pattern.  High speed of query
execution is provided by the elimination of data transfer overhead and
a very effective locking implementation.  FastDB supports
transactions, online backup and automatic recovery after system crash.
It is an application-oriented database whose tables are constructed
using information about application classes.  Automatic scheme
evaluation based on classes and a flexible, convenient SQL-like
interface for retrieving data from the database.  Such post-relational
capabilities as non-atomic fields, nested arrays, user-defined types
and methods, direct interobject references simplifies the design of
database applications and makes them more efficient.

%prep
%setup -q -n fastdb

%build
CFLAGS="%{?cflags:%{cflags}}%{!?cflags:$RPM_OPT_FLAGS}"
CXXFLAGS="%{?cxxflags:%{cxxflags}}%{!?cflags:$RPM_OPT_FLAGS}" 
export CFLAGS CXXFLAGS
%{__make} PREFIX=%{_prefix} %{?mflags}

%install
# Make examples dir.
%{__mkdir_p} docs/examples
%{__install} -m 644 buglogin.htm clilogin.htm clitest.sql testddl.sql \
    docs/examples/
( cd examples && %{__install} -m 644 bugdb.cpp bugdb.h clidb.cpp \
    clidb.h clitest.c guess.cpp guess2.cpp \
    guess_std.cpp testdb.cpp testddl.cpp testidx.cpp \
    testiref.cpp testjoin.cpp testleak.cpp testperf.cpp testraw.cpp \
    testsync.cpp docs/examples/ )
%{makeinstall} PREFIX=$RPM_BUILD_ROOT%{_prefix} %{?mflags_install}

%clean
test "x$RPM_BUILD_ROOT" != "x" && rm -rf $RPM_BUILD_ROOT

%files
%defattr(-, root, root)
%doc CHANGES docs doxygen.cfg
%{_bindir}/subsql
%{_bindir}/cleanupsem
%{_includedir}/%{name}
%{_libdir}/libcli*
%{_libdir}/libfastdb*

%changelog
* Sun Apr 30 2006 Wensong Zhang <wensong@linux-vs.org> 3.27-1
- update to 3.27
* Wed Jul 21 2004 Mezzanine <mezzanine@kainx.org>
- Specfile auto-generated by Mezzanine

