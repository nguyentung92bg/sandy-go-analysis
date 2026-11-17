// Namespace: Dino.BusSand.App
public static class Iap // TypeDefIndex: 3339
{
	// Fields
	public static IIapProvider Provider; // 0x0
	public const int ItemTypeNoAds = 9;
	public static Func<int, bool> CustomDelivery; // 0x8
	[CompilerGenerated]
	private static Action<int> Purchased; // 0x10
	[CompilerGenerated]
	private static Action<int> Restored; // 0x18
	public static string LastFailReason; // 0x20
	public static string LastFailCode; // 0x28
	public static Iap.StorePriceLookup StorePrice; // 0x30
	public const string PendingReason = "purchase_pending";
	public const string OwnedReason = "already_owned_restored";
	public const string CancelledReason = "user_cancelled";

	// Properties
	public static bool QuietFail { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2179E50 Offset: 0x2175E50 VA: 0x2179E50
	public static void add_Purchased(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x2179F44 Offset: 0x2175F44 VA: 0x2179F44
	public static void remove_Purchased(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x217A038 Offset: 0x2176038 VA: 0x217A038
	public static void add_Restored(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x217A12C Offset: 0x217612C VA: 0x217A12C
	public static void remove_Restored(Action<int> value) { }

	// RVA: 0x217A220 Offset: 0x2176220 VA: 0x217A220
	public static double PriceUsd(int storeItemId) { }

	// RVA: 0x217A374 Offset: 0x2176374 VA: 0x217A374
	public static void Restore(Action<bool> done) { }

	// RVA: 0x217A53C Offset: 0x217653C VA: 0x217A53C
	public static int PurchasedCount(int storeItemId) { }

	// RVA: 0x217A6E8 Offset: 0x21766E8 VA: 0x217A6E8
	public static bool CanPurchase(int storeItemId) { }

	// RVA: 0x217A7D4 Offset: 0x21767D4 VA: 0x217A7D4
	private static void Deliver(int storeItemId, Dictionary<string, object> row, string pid) { }

	// RVA: 0x217B060 Offset: 0x2177060 VA: 0x217B060
	public static bool DeliverUnclaimed(string productId) { }

	// RVA: 0x217BBBC Offset: 0x2177BBC VA: 0x217BBBC
	private static void MarkStarted(string pid) { }

	// RVA: 0x217B758 Offset: 0x2177758 VA: 0x217B758
	private static void DeliverRestored(int storeItemId, Dictionary<string, object> row, string pid) { }

	// RVA: 0x217BD74 Offset: 0x2177D74 VA: 0x217BD74
	public static bool get_QuietFail() { }

	// RVA: 0x217BE78 Offset: 0x2177E78 VA: 0x217BE78
	public static void BuyStoreItem(int storeItemId, Action<bool> done) { }

	// RVA: 0x217C52C Offset: 0x217852C VA: 0x217C52C
	private static void .cctor() { }
}

