#ifndef CRYPTO_H
#define CRYPTO_H

#include <stdio.h>
#include <openssl/sha.h>

/**
 * SHA-256 Digest Length
 */
#define SHA256_DIGEST_LENGTH 32
/**
 * SHA-512 Digest Length
 */
#define SHA512_DIGEST_LENGTH 64
/**
 * Argon-2 Digest Length
 */
#define ARGON2_DIGEST_LENGTH 32

#ifdef _cplusplus
extern "C" {
#endif

/**
 * 
 * Enumerated types for implemented algorithms from the openSSL framework. These are 
 * SHA_256, SHA_512, and Argon2. Users will be allowed to choose between them in case they prefer one over the other.
 * 
 */
typedef enum {

	HASH_SHA256,
	HASH_SHA512,
	HASH_ARGON2

} hash_alg_t;

/**
 *
 * Generic cryptographic hash function that converts a cstring into a hash.
 *
 * @param input Pointer to data to hash
 * @param input_len Length of data
 * @param alg Specified hash algorithm
 * @param output Pointer to buffer to receive hash (string must be large enough)
 *
 */
int crypto_hash(const uint8_t *input, size_t input_len, hash_alg_t alg, uint8_t *output);

#ifdef _cplusplus
}
#endif

#endif // CRYPTO_H
