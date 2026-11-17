// Namespace: Dino.BusSand.App.Meta
public static class Economy // TypeDefIndex: 3968
{
	// Fields
	public const int GoNextLevelMax = 10;
	private static readonly int[] FailIndex; // 0x0
	private static readonly int[] ReviveBusCount; // 0x8

	// Properties
	public static int RevivesUsed { get; }
	public static int RevivePrice { get; }
	public static int ReviveAds { get; }
	public static bool CanRevive { get; }

	// Methods

	// RVA: 0x2202A00 Offset: 0x21FEA00 VA: 0x2202A00
	public static int UnlockLevel(int item) { }

	// RVA: 0x2202AB0 Offset: 0x21FEAB0 VA: 0x2202AB0
	public static bool IsRemoved(int item) { }

	// RVA: 0x2203854 Offset: 0x21FF854 VA: 0x2203854
	public static int CampaignUnlockLevel(int item) { }

	// RVA: 0x2203C80 Offset: 0x21FFC80 VA: 0x2203C80
	private static int FallbackUnlockLevel(int item) { }

	// RVA: 0x2203CA8 Offset: 0x21FFCA8 VA: 0x2203CA8
	public static int ShopId(int item) { }

	// RVA: 0x2203D48 Offset: 0x21FFD48 VA: 0x2203D48
	public static int ShopPrice(int shopId, out int currency) { }

	// RVA: 0x2203F6C Offset: 0x21FFF6C VA: 0x2203F6C
	public static int ItemPrice(int item) { }

	// RVA: 0x2203FD8 Offset: 0x21FFFD8 VA: 0x2203FD8
	public static bool BuyShop(int shopId, int count = 1) { }

	// RVA: 0x2204864 Offset: 0x2200864 VA: 0x2204864
	public static int WinCoins(LevelType t) { }

	// RVA: 0x220486C Offset: 0x220086C VA: 0x220486C
	public static bool GoNextLevelDirectly(int newLevel) { }

	// RVA: 0x220487C Offset: 0x220087C VA: 0x220487C
	public static int get_RevivesUsed() { }

	// RVA: 0x220499C Offset: 0x220099C VA: 0x220499C
	public static int get_RevivePrice() { }

	// RVA: 0x22049F0 Offset: 0x22009F0 VA: 0x22049F0
	public static int get_ReviveAds() { }

	// RVA: 0x2204A44 Offset: 0x2200A44 VA: 0x2204A44
	public static bool get_CanRevive() { }

	// RVA: 0x2204AA8 Offset: 0x2200AA8 VA: 0x2204AA8
	public static int ReviveBuses() { }

	// RVA: 0x2204C3C Offset: 0x2200C3C VA: 0x2204C3C
	public static void OnLevelEnter(int level) { }

	// RVA: 0x2204D18 Offset: 0x2200D18 VA: 0x2204D18
	public static void OnReviveWait() { }

	// RVA: 0x2204DB4 Offset: 0x2200DB4 VA: 0x2204DB4
	public static void OnReviveSuccess() { }

	// RVA: 0x2204E58 Offset: 0x2200E58 VA: 0x2204E58
	public static void OnTryAgainReached() { }

	// RVA: 0x2204EFC Offset: 0x2200EFC VA: 0x2204EFC
	private static void .cctor() { }
}

