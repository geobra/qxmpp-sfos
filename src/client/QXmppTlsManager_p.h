// SPDX-FileCopyrightText: 2020 Linus Jahn <lnj@kaidan.im>
//
// SPDX-License-Identifier: LGPL-2.1-or-later

//
//  W A R N I N G
//  -------------
//
// This file is not part of the QXmpp API.
//
// This header file may change from version to version without notice,
// or even be removed.
//
// We mean it.
//

#ifndef QXMPPTLSMANAGER_H
#define QXMPPTLSMANAGER_H

#include "QXmppInternalClientExtension_p.h"

///
/// \brief The QXmppTlsManager enables the QXmppClient to use STARTTLS. It is
/// added to the client by default and can be configured using the
/// \c QXmppConfiguration class.
///
/// \ingroup Managers
///
class QXmppTlsManager : public QXmppInternalClientExtension
{
    Q_OBJECT

public:
    QXmppTlsManager();

    bool handleStanza(const QDomElement &stanza) override;
};

#endif  // QXMPPTLSMANAGER_H
