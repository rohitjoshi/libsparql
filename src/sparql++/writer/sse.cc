/* This is free and unencumbered software released into the public domain. */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "sparql++/writer/sse.h"

namespace {
  struct implementation : public sparql::writer::implementation {
  public:
    virtual ~implementation() override;

    virtual void begin() override;

    virtual void finish() override;

    virtual void flush() override;
  };
}

sparql::writer::implementation*
sparql_writer_for_sse(FILE* const stream,
                      const char* const content_type,
                      const char* const charset) {
  (void)stream, (void)content_type, (void)charset;
  return new implementation(); // TODO
}

implementation::~implementation() {
  // TODO
}

void
implementation::begin() {
  // TODO
}

void
implementation::finish() {
  // TODO
}

void
implementation::flush() {
  // TODO
}
