/*
 * This Java file has been generated by smidump 0.4.5. It
 * is intended to be edited by the application programmer and
 * to be used within a Java AgentX sub-agent environment.
 *
 * $Id: AddressMapEntryImpl.java 1458 2006-05-29 16:21:11Z strauss $
 */

/**
    This class extends the Java AgentX (JAX) implementation of
    the table row addressMapEntry defined in RMON2-MIB.
 */

import jax.AgentXOID;
import jax.AgentXSetPhase;
import jax.AgentXResponsePDU;
import jax.AgentXEntry;

public class AddressMapEntryImpl extends AddressMapEntry
{

    // constructor
    public AddressMapEntryImpl(long addressMapTimeMark,
                           int protocolDirLocalIndex,
                           byte[] addressMapNetworkAddress,
                           AgentXOID addressMapSource)
    {
        super(addressMapTimeMark,
                 protocolDirLocalIndex,
                 addressMapNetworkAddress,
                 addressMapSource);
    }

    public byte[] get_addressMapPhysicalAddress()
    {
        return addressMapPhysicalAddress;
    }

    public long get_addressMapLastChange()
    {
        return addressMapLastChange;
    }

}

