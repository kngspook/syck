require 'mkmf'

[ 'gram.c', 'gram.h', 'handler.c', 'node.c', 'syck.c', 'syck.h', 'token.c' ].each { |codefile|
    `cp ../../lib/#{codefile} #{codefile}`
}
have_header( "st.h" )
create_makefile( "syck" )

