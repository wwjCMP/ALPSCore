/*****************************************************************************
*
* ALPS Project: Algorithms and Libraries for Physics Simulations
*
* ALPS Libraries
*
* Copyright (C) 1997-2008 by Synge Todo <wistaria@comp-phys.org>
*
* This software is part of the ALPS libraries, published under the ALPS
* Library License; you can use, redistribute it and/or modify it under
* the terms of the license, either version 1 or (at your option) any later
* version.
* 
* You should have received a copy of the ALPS Library License along with
* the ALPS Libraries; see the file LICENSE.txt. If not, the license is also
* available from http://alps.comp-phys.org/.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR 
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT 
* SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
* FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE, 
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
* DEALINGS IN THE SOFTWARE.
*
*****************************************************************************/

#ifndef PARAPACK_OPTION_H
#define PARAPACK_OPTION_H

#include "process.h"
#include <boost/date_time/posix_time/posix_time.hpp>
#include <string>
#include <vector>

namespace alps {
namespace parapack {

struct option {
  option(int argc, char** argv, int np = 1, int pid = 0);
  boost::posix_time::time_duration checkpoint_interval;
  boost::posix_time::time_duration min_check_interval;
  boost::posix_time::time_duration max_check_interval;
  boost::posix_time::time_duration time_limit;
  int procs_per_clone;
  bool check_parameter;
  bool auto_evaluate;
  bool evaluate_only;
  std::vector<std::string> jobfiles;
  bool valid;
};

struct evaluate_option {
  evaluate_option(int argc, char** argv);
  std::vector<std::string> jobfiles;
  bool valid;
};

} // end namespace parapack
} // end namespace alps

#endif // PARAPACK_OPTION_H