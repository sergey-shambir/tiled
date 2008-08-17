/*
 * Tiled Map Editor (Qt)
 * Copyright 2008 Tiled (Qt) developers (see AUTHORS file)
 *
 * This file is part of Tiled (Qt).
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA 02111-1307, USA.
 */

#include "mapwriterinterface.h"

#ifndef XMLMAPWRITER_H
#define XMLMAPWRITER_H

#include <QObject>
#include <QString>

namespace Tiled {
namespace Internal {

/**
 * A writer for Tiled's .tmx map format.
 */
class XmlMapWriter : public MapWriterInterface
{
public:
    bool write(const Map *map, const QString &fileName);

    QString name() const { return QObject::tr("XML map writer (*.tmx)"); }

    QString errorString() const { return mError; }

private:
    QString mError;
};

} // namespace Internal
} // namespace Tiled

#endif // MAPWRITERINTERFACE_H
