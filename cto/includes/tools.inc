<?php

/**
 * @file
 * Common tools for CTO modules.
 */


// @ignore sniffer_commenting_inlinecomment_spacingafter:file
// @ignore sniffer_functions_discouragedfunctions_discouraged:file


/**
 * Traces function calls.
 */
function cto_trace_funct() {
  $trace = debug_backtrace();
  if (isset($trace[1])) {
    dpm($trace[1]['function']);
  }
}
