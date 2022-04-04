

#include <QtGlobal>

// Automatically generated by extract_strings_qt.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("BZX-core", "BZX Core"),
QT_TRANSLATE_NOOP("BZX-core", "The %s developers"),
QT_TRANSLATE_NOOP("BZX-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"A fee rate (in %s/kB) that will be used when fee estimation has insufficient "
"data (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Accept connections from outside (default: 1 if no -proxy or -connect/-"
"noconnect)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Accept relayed transactions received from whitelisted peers even when not "
"relaying transactions (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Amount for recipient %1% is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Cannot obtain a lock on data directory %s. %s is probably already running."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Connect only to the specified node(s); -noconnect or -connect=0 alone to "
"disable automatic connections"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Could not locate RPC credentials. No authentication cookie could be found, "
"and no rpcpassword is set in the configuration file (%s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Delete all Sigma mints and only recover those parts of the blockchain "
"through -reindex on startup"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Disabled transaction index detected.\n"
"\n"
"Exodus requires an enabled transaction index. To enable transaction "
"indexing, please use the \"-txindex\" option as command line argument or add "
"\"txindex=1\" to your client configuration file within your data directory.\n"
"\n"
"Configuration file"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Discover own IP addresses (default: 1 when listening and no -externalip or -"
"proxy)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Distributed under the MIT software license, see the accompanying file %s or "
"%s"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Do not keep transactions in the mempool longer than <n> hours (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Equivalent bytes per sigop in transactions for relay and mining (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Error loading %s: You can't enable HD on a already existing non-HD wallet"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Error reading %s! All keys read correctly, but transaction data or address "
"book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Error: The transaction was rejected! This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds!"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Extra transactions to keep in memory for compact block reconstructions "
"(default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Failed to create backup, file already exists! This could happen if you "
"restarted wallet in less than 60 seconds. You can continue if you are ok "
"with this."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for relaying, "
"mining and transaction creation (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Fees (in %s/kB) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Force relay of transactions from whitelisted peers even if they violate "
"local relay policy (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Found unconfirmed denominated outputs, will wait till they confirm to "
"continue."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Has to have at least two mint coins with at least 2 confirmation in order to "
"spend a coin"),
QT_TRANSLATE_NOOP("BZX-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"If <category> is not supplied or if <category> = 1, output all debugging "
"information."),
QT_TRANSLATE_NOOP("BZX-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"If this block is in the chain assume that it and its ancestors are valid and "
"potentially skip their script verification (0 to verify all, default: %s, "
"testnet: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Maximum allowed median peer time offset adjustment. Local perspective of "
"time may be influenced by peers forward or backward by this amount. "
"(default: %u seconds)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Maximum total fees (in %s) to use in a single wallet transaction or raw "
"transaction; setting this too low may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Optionally add the \"S\" flag to wrap the output in a pay-to-script-hash."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Optionally add the \"W\" flag to produce a pay-to-witness-pubkey-hash output"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Optionally add the \"W\" flag to produce a pay-to-witness-script-hash output"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Output only the hex-encoded transaction id of the resultant transaction."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Please add txindex=1 to your configuration file manually.\n"
"\n"
"Exodus will now shutdown."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Please add txindex=1 to your configuration file manually.\n"
"\n"
"Omni Core will now shutdown."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Please check that your computer's date and time are correct! If your clock "
"is wrong, %s will not work properly."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Please contribute if you find %s useful. Visit %s for further information "
"about the software."),
QT_TRANSLATE_NOOP("BZX-core", ""
"PrivateSend uses exact denominated amounts to send funds, you might simply "
"need to anonymize some more coins."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Prune configured below the minimum of %d MiB.  Please use a higher number."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Prune: last wallet synchronisation goes beyond pruned data. You need to -"
"reindex (download the whole blockchain again in case of pruned node)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect/-noconnect)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Randomize credentials for every proxy connection. This enables Tor stream "
"isolation (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Read extra arguments from standard input, one per line until EOF/Ctrl-D "
"(recommended for sensitive information such as passphrases)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Reduce storage requirements by enabling pruning (deleting) of old blocks. "
"This allows the pruneblockchain RPC to be called to delete specific blocks, "
"and enables automatic pruning of old blocks if a target size in MiB is "
"provided. This mode is incompatible with -txindex and -rescan. Warning: "
"Reverting this setting requires re-downloading the entire blockchain. "
"(default: 0 = disable pruning blocks, 1 = allow manual pruning via RPC, >%u "
"= automatically prune block files to stay under the specified target size in "
"MiB)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Rescans are not possible in pruned mode. You will need to use -reindex which "
"will download the whole blockchain again."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Set lowest fee rate (in %s/kB) for transactions to be included in block "
"creation. (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Sets the serialization of raw transaction or block hex returned in non-"
"verbose mode, non-segwit(0) or segwit(1) (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Support filtering of blocks and transaction with bloom filters (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"The block database contains a block which appears to be from the future. "
"This may be due to your computer's date and time being set incorrectly. Only "
"rebuild the block database if you are sure that your computer's date and "
"time are correct"),
QT_TRANSLATE_NOOP("BZX-core", ""
"The file may be write protected or you may not have the required permissions "
"to edit it.\n"),
QT_TRANSLATE_NOOP("BZX-core", ""
"The transaction amount is too small to send after the fee has been deducted"),
QT_TRANSLATE_NOOP("BZX-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("BZX-core", ""
"This is the transaction fee you may pay when fee estimates are not available."),
QT_TRANSLATE_NOOP("BZX-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit %s and cryptographic software written by Eric Young and "
"UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Total length of network version string (%i) exceeds maximum length (%i). "
"Reduce the number or size of uacomments."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Tries to keep outbound traffic under the given target (in MiB per 24h), 0 = "
"no limit (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unable to locate enough PrivateSend denominated funds for this transaction."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unable to locate enough PrivateSend non-denominated funds for this "
"transaction that are not equal 1000 BZX."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unable to locate enough funds for this transaction that are not equal 1000 "
"BZX."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unable to rewind the database to a pre-fork state. You will need to "
"redownload the blockchain"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unsupported argument -socks found. Setting SOCKS version isn't possible "
"anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Unsupported argument -whitelistalwaysrelay ignored, use -whitelistrelay and/"
"or -whitelistforcerelay."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Use UPnP to map the listening port (default: 1 when listening and no -proxy)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Use hierarchical deterministic key generation (HD) after BIP32. Only has "
"effect during wallet creation/first start"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Username and hashed password for JSON-RPC connections. The field <userpw> "
"comes in the format: <USERNAME>:<SALT>$<HASH>. A canonical python script is "
"included in share/rpcuser. The client then connects normally using the "
"rpcuser=<USERNAME>/rpcpassword=<PASSWORD> pair of arguments. This option can "
"be specified multiple times"),
QT_TRANSLATE_NOOP("BZX-core", ""
"WARNING! Failed to replenish keypool, please unlock your wallet to do so."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Wallet is locked, can't replenish keypool! Automatic backups and mixing are "
"disabled, please unlock your wallet to replenish keypool."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Wallet will not create transactions that violate mempool chain limits "
"(default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Warning: Unknown block versions being mined! It's possible unknown rules are "
"in effect"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Warning: Wallet file corrupt, data salvaged! Original %s saved as %s in %s; "
"if your balance or transactions are incorrect you should restore from a "
"backup."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Warning: incorrect parameter -walletbackupsdir, path must exist! Using "
"default path."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Whitelist peers connecting from the given IP address (e.g. 1.2.3.4) or CIDR "
"notated network (e.g. 1.2.3.0/24). Can be specified multiple times."),
QT_TRANSLATE_NOOP("BZX-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Would you like Exodus to attempt to update your configuration file "
"accordingly?"),
QT_TRANSLATE_NOOP("BZX-core", ""
"You must specify a masternodeprivkey in the configuration. Please see "
"documentation for help."),
QT_TRANSLATE_NOOP("BZX-core", ""
"You need to rebuild the database using -reindex to go back to unpruned "
"mode.  This will redownload the entire blockchain"),
QT_TRANSLATE_NOOP("BZX-core", ""
"You need to rebuild the database using -reindex-chainstate to change -txindex"),
QT_TRANSLATE_NOOP("BZX-core", ""
"Your configuration file has been updated.\n"
"\n"
"Exodus will now shutdown - please restart the client for your new "
"configuration to take effect."),
QT_TRANSLATE_NOOP("BZX-core", ""
"it has to have at least two mint coins with at least 2 confirmation in order "
"to spend a coin"),
QT_TRANSLATE_NOOP("BZX-core", ""
"masternodeaddr option is deprecated. Please use masternode.conf to manage your remote "
"masternodes."),
QT_TRANSLATE_NOOP("BZX-core", "%s - %d confirmations"),
QT_TRANSLATE_NOOP("BZX-core", "%s Daemon"),
QT_TRANSLATE_NOOP("BZX-core", "%s RPC client version"),
QT_TRANSLATE_NOOP("BZX-core", "%s corrupt, salvage failed"),
QT_TRANSLATE_NOOP("BZX-core", "%s is set very high!"),
QT_TRANSLATE_NOOP("BZX-core", "%s bitcoinzero-tx utility version"),
QT_TRANSLATE_NOOP("BZX-core", "(%d could be used only on mainnet)"),
QT_TRANSLATE_NOOP("BZX-core", "(default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "(default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "(must be %d for mainnet)"),
QT_TRANSLATE_NOOP("BZX-core", "-maxmempool must be at least %d MB"),
QT_TRANSLATE_NOOP("BZX-core", "<category> can be:"),
QT_TRANSLATE_NOOP("BZX-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("BZX-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Add Pay To n-of-m Multi-sig output to TX. n = REQUIRED, m = PUBKEYS"),
QT_TRANSLATE_NOOP("BZX-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("BZX-core", "Add address-based output to TX"),
QT_TRANSLATE_NOOP("BZX-core", "Add data-based output to TX"),
QT_TRANSLATE_NOOP("BZX-core", "Add input to TX"),
QT_TRANSLATE_NOOP("BZX-core", "Add pay-to-pubkey output to TX"),
QT_TRANSLATE_NOOP("BZX-core", "Add raw script output to TX"),
QT_TRANSLATE_NOOP("BZX-core", "Add zero or more signatures to transaction"),
QT_TRANSLATE_NOOP("BZX-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("BZX-core", "Already have that input."),
QT_TRANSLATE_NOOP("BZX-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Amount for recipient %1% is too small to pay the fee"),
QT_TRANSLATE_NOOP("BZX-core", "Amount for recipient %1% is too small"),
QT_TRANSLATE_NOOP("BZX-core", "Amount limit is exceed max money"),
QT_TRANSLATE_NOOP("BZX-core", "Anonymous communication with TOR - Quickstart (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Append comment to the user agent string"),
QT_TRANSLATE_NOOP("BZX-core", "Attempt to recover private keys from a corrupt wallet on startup"),
QT_TRANSLATE_NOOP("BZX-core", "Automatic backups disabled"),
QT_TRANSLATE_NOOP("BZX-core", "Automatically create Tor hidden service (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Bad change address"),
QT_TRANSLATE_NOOP("BZX-core", "Block creation options:"),
QT_TRANSLATE_NOOP("BZX-core", "Block index is outdated, reindex required\n"),
QT_TRANSLATE_NOOP("BZX-core", "Can not choose coins within limit."),
QT_TRANSLATE_NOOP("BZX-core", "Can't find random Masternode."),
QT_TRANSLATE_NOOP("BZX-core", "Can't mix while sync in progress."),
QT_TRANSLATE_NOOP("BZX-core", "Can't mix: no compatible inputs found!"),
QT_TRANSLATE_NOOP("BZX-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("BZX-core", "Cannot resolve -%s address: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("BZX-core", "Chain selection options:"),
QT_TRANSLATE_NOOP("BZX-core", "Change index out of range"),
QT_TRANSLATE_NOOP("BZX-core", "Collateral not valid."),
QT_TRANSLATE_NOOP("BZX-core", "Commands:"),
QT_TRANSLATE_NOOP("BZX-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("BZX-core", "Connect to JSON-RPC on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("BZX-core", "Connection options:"),
QT_TRANSLATE_NOOP("BZX-core", "Copyright (C) %i-%i"),
QT_TRANSLATE_NOOP("BZX-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("BZX-core", "Could not parse masternode.conf"),
QT_TRANSLATE_NOOP("BZX-core", "Create hex-encoded BZX transaction"),
QT_TRANSLATE_NOOP("BZX-core", "Create new, empty TX."),
QT_TRANSLATE_NOOP("BZX-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("BZX-core", "Delete input N from TX"),
QT_TRANSLATE_NOOP("BZX-core", "Delete output N from TX"),
QT_TRANSLATE_NOOP("BZX-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("BZX-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("BZX-core", "Done loading"),
QT_TRANSLATE_NOOP("BZX-core", "ERROR! Failed to create automatic backup"),
QT_TRANSLATE_NOOP("BZX-core", "Enable publish hash block in <address>"),
QT_TRANSLATE_NOOP("BZX-core", "Enable publish hash transaction in <address>"),
QT_TRANSLATE_NOOP("BZX-core", "Enable publish raw block in <address>"),
QT_TRANSLATE_NOOP("BZX-core", "Enable publish raw transaction in <address>"),
QT_TRANSLATE_NOOP("BZX-core", "Enable transaction replacement in the memory pool (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Entries are full."),
QT_TRANSLATE_NOOP("BZX-core", "Error connecting to Masternode."),
QT_TRANSLATE_NOOP("BZX-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("BZX-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("BZX-core", "Error loading %s"),
QT_TRANSLATE_NOOP("BZX-core", "Error loading %s: Wallet corrupted"),
QT_TRANSLATE_NOOP("BZX-core", "Error loading %s: Wallet requires newer version of %s"),
QT_TRANSLATE_NOOP("BZX-core", "Error loading %s: You can't disable HD on a already existing HD wallet"),
QT_TRANSLATE_NOOP("BZX-core", "Error loading block database"),
QT_TRANSLATE_NOOP("BZX-core", "Error opening block database"),
QT_TRANSLATE_NOOP("BZX-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("BZX-core", "Error"),
QT_TRANSLATE_NOOP("BZX-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("BZX-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("BZX-core", "Error: It cannot delete coin serial number in wallet"),
QT_TRANSLATE_NOOP("BZX-core", "Error: Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("BZX-core", "Failed to create backup, error: %s"),
QT_TRANSLATE_NOOP("BZX-core", "Failed to delete backup, error: %s"),
QT_TRANSLATE_NOOP("BZX-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("BZX-core", "Failed to parse host:port string"),
QT_TRANSLATE_NOOP("BZX-core", "Failed to write coin serial number into wallet"),
QT_TRANSLATE_NOOP("BZX-core", "Fee (in %s/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Found enough users, signing ( waiting %s )"),
QT_TRANSLATE_NOOP("BZX-core", "Found enough users, signing ..."),
QT_TRANSLATE_NOOP("BZX-core", "Get help for a command"),
QT_TRANSLATE_NOOP("BZX-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("BZX-core", "Importing..."),
QT_TRANSLATE_NOOP("BZX-core", "Imports blocks from external blk000??.dat file on startup"),
QT_TRANSLATE_NOOP("BZX-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Incompatible mode."),
QT_TRANSLATE_NOOP("BZX-core", "Incompatible version."),
QT_TRANSLATE_NOOP("BZX-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("BZX-core", "Information"),
QT_TRANSLATE_NOOP("BZX-core", "Initialization sanity check failed. %s is shutting down."),
QT_TRANSLATE_NOOP("BZX-core", "Input is not valid."),
QT_TRANSLATE_NOOP("BZX-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("BZX-core", "Insufficient funds."),
QT_TRANSLATE_NOOP("BZX-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid address"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid amount for -%s=<amount>: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid amount for -fallbackfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid amount for -mininput=<amount>: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid amount"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid port detected in masternode.conf"),
QT_TRANSLATE_NOOP("BZX-core", "Invalid script detected."),
QT_TRANSLATE_NOOP("BZX-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Keep the transaction memory pool below <n> megabytes (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Keypool ran out, please call keypoolrefill first"),
QT_TRANSLATE_NOOP("BZX-core", "Last PrivateSend was too recent."),
QT_TRANSLATE_NOOP("BZX-core", "Last successful PrivateSend action was too recent."),
QT_TRANSLATE_NOOP("BZX-core", "Line: %d"),
QT_TRANSLATE_NOOP("BZX-core", "List commands"),
QT_TRANSLATE_NOOP("BZX-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Load JSON file FILENAME into register NAME"),
QT_TRANSLATE_NOOP("BZX-core", "Loading Masternode payment cache..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading banlist..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading block index..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading fulfilled requests cache..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("BZX-core", "Loading masternode cache..."),
QT_TRANSLATE_NOOP("BZX-core", "Location of the auth cookie (default: data dir)"),
QT_TRANSLATE_NOOP("BZX-core", "Lock is already in place."),
QT_TRANSLATE_NOOP("BZX-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Make the wallet broadcast transactions"),
QT_TRANSLATE_NOOP("BZX-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Missing input transaction information."),
QT_TRANSLATE_NOOP("BZX-core", "Mixing in progress..."),
QT_TRANSLATE_NOOP("BZX-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "No Masternodes detected."),
QT_TRANSLATE_NOOP("BZX-core", "No compatible Masternode found."),
QT_TRANSLATE_NOOP("BZX-core", "No errors detected."),
QT_TRANSLATE_NOOP("BZX-core", "No matching denominations found for mixing."),
QT_TRANSLATE_NOOP("BZX-core", "No recipients"),
QT_TRANSLATE_NOOP("BZX-core", "Node relay options:"),
QT_TRANSLATE_NOOP("BZX-core", "Non-standard public key detected."),
QT_TRANSLATE_NOOP("BZX-core", "Not compatible with existing transactions."),
QT_TRANSLATE_NOOP("BZX-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("BZX-core", "Not enough funds to anonymize."),
QT_TRANSLATE_NOOP("BZX-core", "Not in the Masternode list."),
QT_TRANSLATE_NOOP("BZX-core", "One of minted coin does not found in the chain"),
QT_TRANSLATE_NOOP("BZX-core", "One of the minted coin is invalid"),
QT_TRANSLATE_NOOP("BZX-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("BZX-core", "Options:"),
QT_TRANSLATE_NOOP("BZX-core", "Parsing Exodus transactions..."),
QT_TRANSLATE_NOOP("BZX-core", "Pass named instead of positional arguments (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("BZX-core", "Port: %d"),
QT_TRANSLATE_NOOP("BZX-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Print this help message and exit"),
QT_TRANSLATE_NOOP("BZX-core", "Print version and exit"),
QT_TRANSLATE_NOOP("BZX-core", "PrivateSend is idle."),
QT_TRANSLATE_NOOP("BZX-core", "PrivateSend request complete:"),
QT_TRANSLATE_NOOP("BZX-core", "PrivateSend request incomplete:"),
QT_TRANSLATE_NOOP("BZX-core", "Problem with coin selection for re-mint while spending."),
QT_TRANSLATE_NOOP("BZX-core", "Problem with coin selection for spend."),
QT_TRANSLATE_NOOP("BZX-core", "Prune cannot be configured with a negative value."),
QT_TRANSLATE_NOOP("BZX-core", "Prune mode is incompatible with -txindex."),
QT_TRANSLATE_NOOP("BZX-core", "Pruning blockstore..."),
QT_TRANSLATE_NOOP("BZX-core", "RPC server options:"),
QT_TRANSLATE_NOOP("BZX-core", "Rebuild chain state and block index from the blk*.dat files on disk"),
QT_TRANSLATE_NOOP("BZX-core", "Rebuild chain state from the currently indexed blocks"),
QT_TRANSLATE_NOOP("BZX-core", "Recipient %1% has invalid amount"),
QT_TRANSLATE_NOOP("BZX-core", "Reducing -maxconnections from %d to %d, because of system limitations."),
QT_TRANSLATE_NOOP("BZX-core", "Register Commands:"),
QT_TRANSLATE_NOOP("BZX-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Required amount exceed value spend limit"),
QT_TRANSLATE_NOOP("BZX-core", "The required amount exceeds spend limit"),
QT_TRANSLATE_NOOP("BZX-core", "Rescan the block chain for missing wallet transactions on startup"),
QT_TRANSLATE_NOOP("BZX-core", "Rescanning..."),
QT_TRANSLATE_NOOP("BZX-core", "Rewinding blocks..."),
QT_TRANSLATE_NOOP("BZX-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("BZX-core", "See signrawtransaction docs for format of sighash flags, JSON objects."),
QT_TRANSLATE_NOOP("BZX-core", "Select JSON output"),
QT_TRANSLATE_NOOP("BZX-core", "Send command to %s (with named arguments)"),
QT_TRANSLATE_NOOP("BZX-core", "Send command to %s"),
QT_TRANSLATE_NOOP("BZX-core", "Send commands to node running on <ip> (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("BZX-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Send transactions with full-RBF opt-in enabled (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Session not complete!"),
QT_TRANSLATE_NOOP("BZX-core", "Session timed out."),
QT_TRANSLATE_NOOP("BZX-core", "Set TX lock time to N"),
QT_TRANSLATE_NOOP("BZX-core", "Set TX version to N"),
QT_TRANSLATE_NOOP("BZX-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Set maximum BIP141 block weight (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Set register NAME to given JSON-STRING"),
QT_TRANSLATE_NOOP("BZX-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("BZX-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("BZX-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("BZX-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Specify data directory"),
QT_TRANSLATE_NOOP("BZX-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("BZX-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("BZX-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Start %s Daemon"),
QT_TRANSLATE_NOOP("BZX-core", "Starting network threads..."),
QT_TRANSLATE_NOOP("BZX-core", "Submitted following entries to masternode: %u / %d"),
QT_TRANSLATE_NOOP("BZX-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
QT_TRANSLATE_NOOP("BZX-core", "Submitted to masternode, waiting in queue %s"),
QT_TRANSLATE_NOOP("BZX-core", "Synchronization failed"),
QT_TRANSLATE_NOOP("BZX-core", "Synchronization finished"),
QT_TRANSLATE_NOOP("BZX-core", "Synchronization pending..."),
QT_TRANSLATE_NOOP("BZX-core", "Synchronizing masternode payments..."),
QT_TRANSLATE_NOOP("BZX-core", "Synchronizing masternodes..."),
QT_TRANSLATE_NOOP("BZX-core", "The source code is available from %s."),
QT_TRANSLATE_NOOP("BZX-core", "The spend coin transaction failed to verify"),
QT_TRANSLATE_NOOP("BZX-core", "The transaction amount is too small to pay the fee"),
QT_TRANSLATE_NOOP("BZX-core", "The wallet will avoid paying less than the minimum relay fee."),
QT_TRANSLATE_NOOP("BZX-core", "This command requires JSON registers:"),
QT_TRANSLATE_NOOP("BZX-core", "This help message"),
QT_TRANSLATE_NOOP("BZX-core", "This is experimental software."),
QT_TRANSLATE_NOOP("BZX-core", "This is not a Masternode."),
QT_TRANSLATE_NOOP("BZX-core", "This is the minimum transaction fee you pay on every transaction."),
QT_TRANSLATE_NOOP("BZX-core", "This is the transaction fee you will pay if you send a transaction."),
QT_TRANSLATE_NOOP("BZX-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Timeout during HTTP requests (default: %d)"),
QT_TRANSLATE_NOOP("BZX-core", "Too many %f denominations, removing."),
QT_TRANSLATE_NOOP("BZX-core", "Tor control port password (default: empty)"),
QT_TRANSLATE_NOOP("BZX-core", "Tor control port to use if onion listening enabled (default: %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction amounts must not be negative"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction created successfully."),
QT_TRANSLATE_NOOP("BZX-core", "Transaction fees are too high."),
QT_TRANSLATE_NOOP("BZX-core", "Transaction has too long of a mempool chain"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction must have at least one recipient"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction not valid."),
QT_TRANSLATE_NOOP("BZX-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("BZX-core", "Transaction too large"),
QT_TRANSLATE_NOOP("BZX-core", "Trying to spend an already spent serial #, try again."),
QT_TRANSLATE_NOOP("BZX-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("BZX-core", "Unable to bind to %s on this computer. %s is probably already running."),
QT_TRANSLATE_NOOP("BZX-core", "Unable to convert denomination to integer."),
QT_TRANSLATE_NOOP("BZX-core", "Unable to start HTTP server. See debug log for details."),
QT_TRANSLATE_NOOP("BZX-core", "Unable to update configuration file at"),
QT_TRANSLATE_NOOP("BZX-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("BZX-core", "Unknown response."),
QT_TRANSLATE_NOOP("BZX-core", "Unknown state: id = %u"),
QT_TRANSLATE_NOOP("BZX-core", "Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("BZX-core", "Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("BZX-core", "Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("BZX-core", "Update hex-encoded BZX transaction"),
QT_TRANSLATE_NOOP("BZX-core", "Upgrade wallet to latest format on startup"),
QT_TRANSLATE_NOOP("BZX-core", "Usage:"),
QT_TRANSLATE_NOOP("BZX-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Use the test chain"),
QT_TRANSLATE_NOOP("BZX-core", "User Agent comment (%s) contains unsafe characters."),
QT_TRANSLATE_NOOP("BZX-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("BZX-core", "Value more than PrivateSend pool maximum allows."),
QT_TRANSLATE_NOOP("BZX-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("BZX-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("BZX-core", "Very low number of keys left: %d"),
QT_TRANSLATE_NOOP("BZX-core", "Wait for RPC server to start"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet debugging/testing options:"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet is locked."),
QT_TRANSLATE_NOOP("BZX-core", "Wallet locked"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet locked, unable to create transaction!"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet needed to be rewritten: restart %s to complete"),
QT_TRANSLATE_NOOP("BZX-core", "Wallet options:"),
QT_TRANSLATE_NOOP("BZX-core", "Warning"),
QT_TRANSLATE_NOOP("BZX-core", "Warning: unknown new rules activated (versionbit %i)"),
QT_TRANSLATE_NOOP("BZX-core", "Wasn't able to create wallet backup folder %s!"),
QT_TRANSLATE_NOOP("BZX-core", "Whether to operate in a blocks only mode (default: %u)"),
QT_TRANSLATE_NOOP("BZX-core", "Will retry..."),
QT_TRANSLATE_NOOP("BZX-core", "Your entries added successfully."),
QT_TRANSLATE_NOOP("BZX-core", "Your transaction was accepted into the pool!"),
QT_TRANSLATE_NOOP("BZX-core", "Zapping all Sigma mints from wallet..."),
QT_TRANSLATE_NOOP("BZX-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("BZX-core", "ZeroMQ notification options:"),
QT_TRANSLATE_NOOP("BZX-core", "Masternode cache is empty, skipping payments cache..."),
QT_TRANSLATE_NOOP("BZX-core", "Masternode queue is full."),
QT_TRANSLATE_NOOP("BZX-core", "Masternode:"),
QT_TRANSLATE_NOOP("BZX-core", "it cannot write coin serial number into wallet"),
QT_TRANSLATE_NOOP("BZX-core", "no mixing available."),
QT_TRANSLATE_NOOP("BZX-core", "prevtxs=JSON object"),
QT_TRANSLATE_NOOP("BZX-core", "privatekeys=JSON object"),
QT_TRANSLATE_NOOP("BZX-core", "see debug.log for details."),
QT_TRANSLATE_NOOP("BZX-core", "the coin spend has been used"),
QT_TRANSLATE_NOOP("BZX-core", "the selected mint coin is an invalid coin"),
QT_TRANSLATE_NOOP("BZX-core", "the spend coin transaction did not verify"),
QT_TRANSLATE_NOOP("BZX-core", "version"),
};
