bin_PROGRAMS = profanity
profanity_SOURCES = src/command.c src/contact.c src/history.c src/jabber.h \
	src/preferences.c src/prof_autocomplete.c src/status_bar.c \
	src/command.h src/contact.h src/history.h src/log.c src/preferences.h \
	src/prof_autocomplete.h src/title_bar.c src/windows.c src/common.c \
	src/contact_list.c src/input_win.c src/log.h src/profanity.c \
	src/prof_history.c src/ui.h src/common.h src/ contact_list.h src/jabber.c \
	src/main.c src/profanity.h src/prof_history.h src/chat_log.c \
	src/chat_log.h src/tinyurl.c src/tinyurl.h src/chat_session.c \
	src/chat_session.h src/release.c src/release.h src/muc.c \
	src/muc.h src/stanza.c src/stanza.h src/parser.c src/parser.h \
	src/theme.c src/theme.h src/window.c src/window.h src/xdg_base.c \
	src/xdg_base.h src/files.c src/files.h src/accounts.c src/accounts.h \
	src/jid.h src/jid.c

TESTS = tests/testsuite
check_PROGRAMS = tests/testsuite
tests_testsuite_SOURCES = tests/test_contact_list.c src/contact_list.c src/contact.c \
	tests/test_common.c tests/test_prof_history.c src/prof_history.c src/common.c \
	tests/test_prof_autocomplete.c src/prof_autocomplete.c tests/testsuite.c \
	tests/test_parser.c src/parser.c tests/test_jid.c src/jid.c
tests_testsuite_LDADD = -lheadunit -lstdc++

man_MANS = docs/profanity.1
