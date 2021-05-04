#ifndef MARSHALLER_H
#define MARSHALLER_H

jsonValue_t* _json_marshall_value(const char* type, void* value);
char* _json_marshall(const char* type, void* value);

void* _json_unmarshall_value(const char* type, jsonValue_t* value);
void* _json_unmarshall(const char* type, const char* json);

#define json_marshall(t, v) _json_marshall(# t, (void*) v)
#define json_unmarshall(t, j) (t*) _json_unmarshall(#t, j)

#endif