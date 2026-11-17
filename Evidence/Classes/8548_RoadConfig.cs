// Namespace: Dino.BusSand.Core
public sealed class RoadConfig // TypeDefIndex: 8548
{
	// Fields
	public int GrainsPerCell; // 0x10
	public double SpeedGrainsPerTick; // 0x18
	public int CornerLengthGrains; // 0x20
	public int EntryGapGrains; // 0x24
	public int InboundTravelTicks; // 0x28
	public int SuctionDepthGrains; // 0x2C
	public int SuctionPerTick; // 0x30
	public int SuctionSampleStride; // 0x34
	public double ReturnSpeedMultiplier; // 0x38
	public double LeavingSpeedMultiplier; // 0x40
	public int LeavingRampTicks; // 0x48
	public bool SolidReturnLane; // 0x4C
	public static double SpeedScale; // 0x0

	// Methods

	// RVA: 0x2411594 Offset: 0x240D594 VA: 0x2411594
	public static RoadConfig From(RoadDef d) { }

	// RVA: 0x2411738 Offset: 0x240D738 VA: 0x2411738
	public void .ctor() { }

	// RVA: 0x2411788 Offset: 0x240D788 VA: 0x2411788
	private static void .cctor() { }
}

