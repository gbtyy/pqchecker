/*--------------------------------------------------------------------
pqChecker, shared library plug-in for OpenLDAP server / ppolicy overlay
Checking of passwords quality.
Copyright (C) 2014, Abdelhamid MEDDEB (abdelhamid@meddeb.net)  

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
---------------------------------------------------------------------*/

#include <stdbool.h>
#include <jni.h>

#define SHMDEFAULTNBRECORDS 500
#define SHMFIELDSIZE 128
#define SHMNAME "000h01e02d04i15l21.shm"

bool shmInit(const unsigned nbRecords);
unsigned getShmSize();
bool shmPush(const char *data);
bool shmPop(char *data);
