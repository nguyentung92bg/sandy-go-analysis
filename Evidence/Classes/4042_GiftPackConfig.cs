// Namespace: Dino.BusSand.App.Meta
public class GiftPackConfig // TypeDefIndex: 4042
{
	// Fields
	public int ID; // 0x10
	public int IconDiscount; // 0x14
	public int ShopItemId; // 0x18
	public int KeepActiveAfterPurchase; // 0x1C
	public int MaxPurchaseCount; // 0x20
	public int ActiveDelayTime; // 0x24
	public int EndCoolDownMinute; // 0x28
	public int EndCoolDownDay; // 0x2C
	public int CooldownMinute; // 0x30
	public int CooldownDay; // 0x34
	public int ContinuePriority; // 0x38
	public int Priority; // 0x3C
	public int IsEnabled; // 0x40
	public int CycleType; // 0x44
	public int IsFirstCycleTimeEnabled; // 0x48
	public int IsCycleTimeEnabled; // 0x4C
	public int ThemeCycleMode; // 0x50
	public GiftPackType PackType; // 0x54
	public GiftPackPopMode PopupMode; // 0x58
	public string PackId; // 0x60
	public string TriggerCondition; // 0x68
	public string FirstTriggerCondition; // 0x70
	public string CycleStartTime; // 0x78
	public string CycleEndTime; // 0x80
	public string PackThemeIds; // 0x88
	public string UIPath; // 0x90
	public string IconPath; // 0x98
	public string TitleKey; // 0xA0
	public string DescKey; // 0xA8

	// Methods

	// RVA: 0x2231754 Offset: 0x222D754 VA: 0x2231754
	public static GiftPackConfig FromRow(Dictionary<string, object> r) { }

	// RVA: 0x2231DD0 Offset: 0x222DDD0 VA: 0x2231DD0
	private static int I(Dictionary<string, object> r, string k) { }

	// RVA: 0x2231DEC Offset: 0x222DDEC VA: 0x2231DEC
	private static string S(Dictionary<string, object> r, string k) { }

	// RVA: -1 Offset: -1
	private static T ParseEnum<T>(object v, T fallback) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x276CD14 Offset: 0x2768D14 VA: 0x276CD14
	|-GiftPackConfig.ParseEnum<Int32Enum>
	|
	|-RVA: 0x276CE84 Offset: 0x2768E84 VA: 0x276CE84
	|-GiftPackConfig.ParseEnum<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x2231DC8 Offset: 0x222DDC8 VA: 0x2231DC8
	public void .ctor() { }
}

