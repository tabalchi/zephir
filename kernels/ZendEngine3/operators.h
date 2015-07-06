
/*
  +------------------------------------------------------------------------+
  | Zephir Language                                                        |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2015 Zephir Team (http://www.zephir-lang.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@zephir-lang.com so we can send you a copy immediately.      |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@zephir-lang.com>                     |
  |          Eduar Carvajal <eduar@zephir-lang.com>                        |
  |          Vladimir Kolesnikov <vladimir@extrememember.com>              |
  +------------------------------------------------------------------------+
*/

#ifndef ZEPHIR_KERNEL_OPERATORS_H
#define ZEPHIR_KERNEL_OPERATORS_H

#include <php.h>
#include <Zend/zend.h>

#define zephir_make_printable_zval(expr, expr_copy) zend_make_printable_zval(expr, expr_copy);

/* concatenation */
void zephir_concat_self(zval *left, zval *right);
void zephir_concat_self_str(zval *left, const char *right, int right_length);
void zephir_concat_self_long(zval *left, const long right);
void zephir_concat_self_char(zval *left, unsigned char right);

#endif
