/*
 * This Java file has been generated by smidump 0.4.5. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: HlHostControlTable.java 1458 2006-05-29 16:21:11Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table hlHostControlTable defined in RMON2-MIB.

    @version 1
    @author  smidump 0.4.5
    @see     AgentXTable
 */

import java.util.Vector;

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXResponsePDU;
import jax.AgentXSetPhase;
import jax.AgentXTable;
import jax.AgentXEntry;

public class HlHostControlTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 16, 14, 1, 1};

    // constructors
    public HlHostControlTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
        columns.addElement(new Long(11));
        columns.addElement(new Long(12));
    }

    public HlHostControlTable(boolean shared)
    {
        super(shared);

        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
        columns.addElement(new Long(11));
        columns.addElement(new Long(12));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 2: // hlHostControlDataSource
        {
            AgentXOID value = ((HlHostControlEntry)entry).get_hlHostControlDataSource();
            return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, value);
        }
        case 3: // hlHostControlNlDroppedFrames
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlNlDroppedFrames();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 4: // hlHostControlNlInserts
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlNlInserts();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 5: // hlHostControlNlDeletes
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlNlDeletes();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 6: // hlHostControlNlMaxDesiredEntries
        {
            int value = ((HlHostControlEntry)entry).get_hlHostControlNlMaxDesiredEntries();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 7: // hlHostControlAlDroppedFrames
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlAlDroppedFrames();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 8: // hlHostControlAlInserts
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlAlInserts();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 9: // hlHostControlAlDeletes
        {
            long value = ((HlHostControlEntry)entry).get_hlHostControlAlDeletes();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 10: // hlHostControlAlMaxDesiredEntries
        {
            int value = ((HlHostControlEntry)entry).get_hlHostControlAlMaxDesiredEntries();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 11: // hlHostControlOwner
        {
            byte[] value = ((HlHostControlEntry)entry).get_hlHostControlOwner();
            return new AgentXVarBind(oid, AgentXVarBind.OCTETSTRING, value);
        }
        case 12: // hlHostControlStatus
        {
            int value = ((HlHostControlEntry)entry).get_hlHostControlStatus();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        }

        return null;
    }

    public int setEntry(AgentXSetPhase phase,
                        AgentXEntry entry,
                        long column,
                        AgentXVarBind vb)
    {

        switch ((int)column) {
        case 2: // hlHostControlDataSource
        {
            if (vb.getType() != AgentXVarBind.OBJECTIDENTIFIER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((HlHostControlEntry)entry).set_hlHostControlDataSource(phase, vb.AgentXOIDValue());
        }
        case 6: // hlHostControlNlMaxDesiredEntries
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((HlHostControlEntry)entry).set_hlHostControlNlMaxDesiredEntries(phase, vb.intValue());
        }
        case 10: // hlHostControlAlMaxDesiredEntries
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((HlHostControlEntry)entry).set_hlHostControlAlMaxDesiredEntries(phase, vb.intValue());
        }
        case 11: // hlHostControlOwner
        {
            if (vb.getType() != AgentXVarBind.OCTETSTRING)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((HlHostControlEntry)entry).set_hlHostControlOwner(phase, vb.bytesValue());
        }
        case 12: // hlHostControlStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((HlHostControlEntry)entry).set_hlHostControlStatus(phase, vb.intValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

