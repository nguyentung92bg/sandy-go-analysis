// Namespace: Dino.BusSand.App
public static class DeviceMemory // TypeDefIndex: 3255
{
	// Fields
	public const long LowRamTotalMb = 3200;
	public const long LowRamAvailMb = 400;
	public const long SkipInterstitialAvailMb = 250;
	public static Nullable<DeviceMemory.Snapshot> Override; // 0x0
	private static AndroidJavaObject s_am; // 0x28
	private static AndroidJavaObject s_info; // 0x30
	private static bool s_failed; // 0x38

	// Methods

	// RVA: 0x214FA18 Offset: 0x214BA18 VA: 0x214FA18
	public static bool IsLowRam(DeviceMemory.Snapshot s) { }

	// RVA: 0x214FA78 Offset: 0x214BA78 VA: 0x214FA78
	public static bool TooLowForInterstitial(DeviceMemory.Snapshot s) { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x214FAAC Offset: 0x214BAAC VA: 0x214FAAC
	private static void ResetStatics() { }

	// RVA: 0x214FAFC Offset: 0x214BAFC VA: 0x214FAFC
	public static DeviceMemory.Snapshot Read() { }
}

