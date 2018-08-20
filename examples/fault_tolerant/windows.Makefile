# Copyright 2018 Abaco Systems
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#     http://www.apache.org/licenses/LICENSE-2.0
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.


TARGET       = fault_tolerant.exe
C_OBJS       = fault_tolerant.obj takyon_time.obj
CFLAGS       = -O2 -MD -W3 -WX -nologo -Zm200 -Zc:wchar_t- -D_CRT_SECURE_NO_WARNINGS=1 -I../../API/inc -I../../API/inc/windows -I../../utils
LDFLAGS      = /NOLOGO /INCREMENTAL:NO /MANIFEST:embed /SUBSYSTEM:console
LIBS         = ../../API/builds/windows_intel_64bit/Takyon.lib Ws2_32.lib

.SUFFIXES: .c

all: $(TARGET)

{.\}.c{}.obj::
	cl -c $(CFLAGS) -Fo $<

{..\..\utils\}.c{}.obj::
	cl -c $(CFLAGS) -Fo $<

$(TARGET): $(C_OBJS)
	link $(LDFLAGS) /OUT:$(TARGET) $(C_OBJS) $(LIBS)

clean:
	-del *~ *.obj *.pdb $(TARGET)
