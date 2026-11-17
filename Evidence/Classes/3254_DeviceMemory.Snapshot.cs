// Namespace: 
public struct DeviceMemory.Snapshot // TypeDefIndex: 3254
{
	// Fields
	public long AvailMb; // 0x0
	public long TotalMb; // 0x8
	public long ThresholdMb; // 0x10
	public bool Low; // 0x18

	// Properties
	public bool Known { get; }
	public static DeviceMemory.Snapshot Unknown { get; }

	// Methods

	// RVA: 0x214FA58 Offset: 0x214BA58 VA: 0x214FA58
	public bool get_Known() { }

	// RVA: 0x21502DC Offset: 0x214C2DC VA: 0x21502DC
	public static DeviceMemory.Snapshot get_Unknown() { }

	// RVA: 0x21502EC Offset: 0x214C2EC VA: 0x21502EC Slot: 3
	public override string ToString() { }
}

