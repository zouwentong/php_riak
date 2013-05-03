/*
   Copyright 2012 Trifork A/S
   Author: Kaspar Pedersen

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
#include <php.h>
#include "object.h"

zend_class_entry *riak_object_ce;

static zend_function_entry riak_object_methods[] = {
  PHP_ME(RiakObject, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
  {NULL, NULL, NULL}
};

void riak_init_object(TSRMLS_D)
{
  zend_class_entry ce;

  INIT_CLASS_ENTRY(ce, "RiakObject", riak_bucket_methods);
  riak_object_ce = zend_register_internal_class(&ce TSRMLS_CC);

  zend_declare_property_null(riak_object_ce, "key", sizeof("key")-1, ZEND_ACC_PUBLIC TSRMLS_CC);
  zend_declare_property_null(riak_object_ce, "value", sizeof("value")-1, ZEND_ACC_PUBLIC TSRMLS_CC);
}

/////////////////////////////////////////////////////////////

PHP_METHOD(RiakObject, __construct)
{
  char *key;
  int keyLen;
  zval* client;
  zval* bucket;
  if (zend_parse_parameters(ZEND_NUM_ARGS() TSRMLS_CC, "s", &client, &bucket, &key, &keyLen) == FAILURE) {
    return;
  }
  zend_update_property_stringl(riak_object_ce, getThis(), "key", sizeof("key")-1, key, keyLen TSRMLS_CC);
}