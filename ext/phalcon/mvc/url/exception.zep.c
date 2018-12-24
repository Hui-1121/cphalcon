
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalconphp.com>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Phalcon\Mvc\Url\Exception
 *
 * Exceptions thrown in Phalcon\Mvc\Url will use this class
 */
ZEPHIR_INIT_CLASS(Phalcon_Mvc_Url_Exception) {

	ZEPHIR_REGISTER_CLASS_EX(Phalcon\\Mvc\\Url, Exception, phalcon, mvc_url_exception, phalcon_exception_ce, NULL, 0);

	return SUCCESS;

}

