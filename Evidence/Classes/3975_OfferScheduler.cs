// Namespace: Dino.BusSand.App.Meta
public static class OfferScheduler // TypeDefIndex: 3975
{
	// Fields
	private static int s_thisArrival; // 0x0
	private static bool s_carry; // 0x4

	// Properties
	public static bool Allowed { get; }
	public static int ShownToday { get; }
	public static bool CanShowPopup { get; }

	// Methods

	// RVA: 0x220C3E8 Offset: 0x22083E8 VA: 0x220C3E8
	public static bool get_Allowed() { }

	// RVA: 0x220C500 Offset: 0x2208500 VA: 0x220C500
	public static int get_ShownToday() { }

	// RVA: 0x220C644 Offset: 0x2208644 VA: 0x220C644
	public static bool get_CanShowPopup() { }

	// RVA: 0x220C6BC Offset: 0x22086BC VA: 0x220C6BC
	public static void OnHomeArrival() { }

	// RVA: 0x220C70C Offset: 0x220870C VA: 0x220C70C
	public static void Count(bool beforeHome = False) { }

	// RVA: 0x220C814 Offset: 0x2208814 VA: 0x220C814
	public static void ResetForTests() { }
}

