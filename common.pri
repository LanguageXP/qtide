# included by main.pro and lib.pro

VERSION = 1.6.2

JQTBUILD = "full"
JQTFAT = $$(JQTFAT)
JQTSLIM = $$(JQTSLIM)
!isEmpty(JQTFAT) JQTBUILD = "fat"
!isEmpty(JQTSLIM) JQTBUILD = "slim"

DEFINES += JQTVERSION=\\\"jqtversion:$$JQTBUILD/$$VERSION/$$[QT_VERSION]:\\\"
