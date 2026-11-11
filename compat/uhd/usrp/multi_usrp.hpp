/* Windows file-sink build: just the UHD types structures.h names. */
#pragma once
#include <memory>
#include <cstddef>
#include <map>
#include <string>
#include <vector>
namespace uhd {
struct tx_metadata_t { bool start_of_burst = false, end_of_burst = false, has_time_spec = false; };
struct tx_streamer {
    typedef std::shared_ptr<tx_streamer> sptr;
    size_t send(const void *, size_t n, const tx_metadata_t &, double) { return n; }
};
}
