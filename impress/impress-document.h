
/* pdfdocument.h: Implementation of EvDocument for impresss
 * Copyright (C) 2005, Jonathan Blandford <jrb@gnome.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __IMPRESS_DOCUMENT_H__
#define __IMPRESS_DOCUMENT_H__

#include "ev-document.h"

G_BEGIN_DECLS

#define IMPRESS_TYPE_DOCUMENT             (impress_document_get_type ())
#define IMPRESS_DOCUMENT(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), IMPRESS_TYPE_DOCUMENT, ImpressDocument))
#define IMPRESS_IS_DOCUMENT(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), IMPRESS_TYPE_DOCUMENT))

typedef struct _ImpressDocument ImpressDocument;

ImpressDocument *impress_document_new      (void);
GType         impress_document_get_type (void) G_GNUC_CONST;
     
G_END_DECLS

#endif /* __IMPRESS_DOCUMENT_H__ */
