// Namespace: Dino.BusSand.App.Meta
public static class GiftPackTrack // TypeDefIndex: 4063
{
	// Fields
	public const string SrcHall = "大厅入口";
	public const string SrcShop = "商城点击";
	public const string SrcContinue = "复活界面跳转";
	public const string SrcSystem = "系统弹窗";
	public const string SrcNoCoins = "金币不足";
	public const string SrcBeforeInter = "插屏前弹窗";
	public const string ClickPay = "支付";
	public const string ClickClose = "关闭";

	// Methods

	// RVA: 0x223E540 Offset: 0x223A540 VA: 0x223E540
	public static string SkuType(int itemType) { }

	// RVA: 0x223E618 Offset: 0x223A618 VA: 0x223E618
	private static Dictionary<string, object> Row(int storeItemId) { }

	// RVA: 0x223E688 Offset: 0x223A688 VA: 0x223E688
	public static string Sku(int storeItemId) { }

	// RVA: 0x223E700 Offset: 0x223A700 VA: 0x223E700
	public static string SkuTypeOf(int storeItemId) { }

	// RVA: 0x223E760 Offset: 0x223A760 VA: 0x223E760
	public static string SkuLabel(int storeItemId) { }

	// RVA: 0x223E85C Offset: 0x223A85C VA: 0x223E85C
	public static int PriceDiscount(int storeItemId) { }

	// RVA: 0x223E8EC Offset: 0x223A8EC VA: 0x223E8EC
	public static Dictionary<string, object> Item(int id, long n) { }

	// RVA: 0x223EA80 Offset: 0x223AA80 VA: 0x223EA80
	public static List<object> StoreItems(int storeItemId) { }

	// RVA: 0x223ED60 Offset: 0x223AD60 VA: 0x223ED60
	public static void GiftShow(GiftPackTrack.Gift g) { }

	// RVA: 0x223FAA0 Offset: 0x223BAA0 VA: 0x223FAA0
	public static void GiftClick(GiftPackTrack.Gift g, string clickName) { }

	// RVA: 0x223FB44 Offset: 0x223BB44 VA: 0x223FB44
	public static void IapAction(string scene, int storeItemId, string label) { }

	// RVA: 0x2240154 Offset: 0x223C154 VA: 0x2240154
	public static GiftPackTrack.Gift BreakIce(GiftPackFeature f, int packId, string source) { }

	// RVA: 0x22402C0 Offset: 0x223C2C0 VA: 0x22402C0
	public static GiftPackTrack.Gift Golden(GiftPackFeature f, int packId, string source) { }

	// RVA: 0x223C028 Offset: 0x2238028 VA: 0x223C028
	public static void GoldStageAdvance(GiftPackFeature f, int packId, int stage, int changeType, int firstUnlockStage, int fromStage, int toStage) { }

	// RVA: 0x223CF94 Offset: 0x2238F94 VA: 0x223CF94
	public static void GoldRewardGet(GiftPackFeature f, int packId, int stage, int changeType, int coins) { }
}

