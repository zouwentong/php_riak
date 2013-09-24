/*
   Copyright 2013 Trifork A/S
   Author: Kaspar Bach Pedersen

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef RIAK_BUCKET__PROPERTIES__H__
#define RIAK_BUCKET__PROPERTIES__H__

extern zend_class_entry *riak_bucket_properties_ce;
extern zend_class_entry *riak_module_function_ce;
extern zend_class_entry *riak_commit_hook_ce;
extern zend_class_entry *riak_commit_hook_list_ce;

void riak_bucket_props_init(TSRMLS_D);
void riak_bucket_props_init(TSRMLS_D);

PHP_METHOD(RiakBucketProperties, __construct);

PHP_METHOD(RiakBucketProperties, getNValue);
PHP_METHOD(RiakBucketProperties, setNValue);
PHP_METHOD(RiakBucketProperties, getAllowMult);
PHP_METHOD(RiakBucketProperties, setAllowMult);
PHP_METHOD(RiakBucketProperties, getLastWriteWins);
PHP_METHOD(RiakBucketProperties, setLastWriteWins);
PHP_METHOD(RiakBucketProperties, getOldVClock);
PHP_METHOD(RiakBucketProperties, setOldVClock);
PHP_METHOD(RiakBucketProperties, getYoungVClock);
PHP_METHOD(RiakBucketProperties, setYoungVClock);
PHP_METHOD(RiakBucketProperties, getSmallVClock);
PHP_METHOD(RiakBucketProperties, setSmallVClock);
PHP_METHOD(RiakBucketProperties, getBigVClock);
PHP_METHOD(RiakBucketProperties, setBigVClock);
PHP_METHOD(RiakBucketProperties, getR);
PHP_METHOD(RiakBucketProperties, setR);
PHP_METHOD(RiakBucketProperties, getPR);
PHP_METHOD(RiakBucketProperties, setPR);
PHP_METHOD(RiakBucketProperties, getW);
PHP_METHOD(RiakBucketProperties, setW);
PHP_METHOD(RiakBucketProperties, getDW);
PHP_METHOD(RiakBucketProperties, setDW);
PHP_METHOD(RiakBucketProperties, getPW);
PHP_METHOD(RiakBucketProperties, setPW);
PHP_METHOD(RiakBucketProperties, getRW);
PHP_METHOD(RiakBucketProperties, setRW);

PHP_METHOD(RiakBucketProperties, getBasicQuorum);
PHP_METHOD(RiakBucketProperties, setBasicQuorum);
PHP_METHOD(RiakBucketProperties, getNotFoundOk);
PHP_METHOD(RiakBucketProperties, setNotFoundOk);
PHP_METHOD(RiakBucketProperties, getSearchEnabled);
PHP_METHOD(RiakBucketProperties, setSearchEnabled);
PHP_METHOD(RiakBucketProperties, setBackend);
PHP_METHOD(RiakBucketProperties, getBackend);
PHP_METHOD(RiakBucketProperties, setPreCommitHookList);
PHP_METHOD(RiakBucketProperties, getPreCommitHookList);
PHP_METHOD(RiakBucketProperties, setPostCommitHookList);
PHP_METHOD(RiakBucketProperties, getPostCommitHookList);
PHP_METHOD(RiakBucketProperties, setCHashKeyFun);
PHP_METHOD(RiakBucketProperties, getCHashKeyFun);
PHP_METHOD(RiakBucketProperties, setLinkFun);
PHP_METHOD(RiakBucketProperties, getLinkFun);

PHP_METHOD(RiakModuleFunction, __construct);
PHP_METHOD(RiakModuleFunction, getModule);
PHP_METHOD(RiakModuleFunction, setModule);
PHP_METHOD(RiakModuleFunction, getFunction);
PHP_METHOD(RiakModuleFunction, setFunction);

PHP_METHOD(RiakCommitHook, __construct);
PHP_METHOD(RiakCommitHook, getJsName);
PHP_METHOD(RiakCommitHook, getErlModule);
PHP_METHOD(RiakCommitHook, getErlFunction);
PHP_METHOD(RiakCommitHook, isJavascript);
PHP_METHOD(RiakCommitHook, isErlang);

PHP_METHOD(RiakCommitHookList, __construct);
PHP_METHOD(RiakCommitHookList, offsetExists);
PHP_METHOD(RiakCommitHookList, offsetGet);
PHP_METHOD(RiakCommitHookList, offsetSet);
PHP_METHOD(RiakCommitHookList, offsetUnset);
PHP_METHOD(RiakCommitHookList, count);
PHP_METHOD(RiakCommitHookList, getIterator);

#endif
