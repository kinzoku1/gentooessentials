add_library(st st.c)

install(TARGETS st DESTINATION lib)
install(FILES st.h DESTINATION include)
