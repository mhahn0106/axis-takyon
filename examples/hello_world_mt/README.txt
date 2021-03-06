Description:
------------
  A very simple example to create a single path and send messages in each direction.

  This example is exclusively done for multi-threaded, where two threads are explicitly
  created; one thread for endpoint A, and one thread for endpoint B.

  Notice how this example is self synchronizing just by having A call send() first then
  recv(), and B calls recv() first then send().


Build:
------
  Mac and Linux:
    > make
    > make USE_STATIC_LIB=Yes      // Use static Takyon lib to avoid dynamic Takyon libs
  Windows:
    > nmake -f windows.Makefile


Run:
----
  Mac and Linux:
    To see the usage options:
      > ./hello

    Multi threaded (test variations that include both endpoints):
      > ./hello "Memcpy -ID 1"
      > ./hello "Memcpy -ID 1 -share"

  Windows:
    Follow the same as above, but replace "./hello" with "hello"
