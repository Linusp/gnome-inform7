/* This file is part of GNOME Inform 7.
 * Copyright (c) 2006-2009 P. F. Chimento <philip.chimento@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef HTML_H
#define HTML_H

#include <glib.h>
#include <webkit/webkit.h>

void html_load_file(WebKitWebView *html, const gchar *filename);
void html_load_file_at_anchor(WebKitWebView *html, const gchar *file, const gchar *anchor);
void html_load_blank(WebKitWebView *html);
void html_refresh(WebKitWebView *html);

#endif
