// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class RemoveAdsSettings // TypeDefIndex: 4154
{
	// Fields
	public bool enabled; // 0x10
	[Tooltip("TbStoreItemConfig id the offer sells (9001 = no_ads).")]
	public int storeItem; // 0x14
	[Tooltip("Round Remove Ads button on the home screen.")]
	public bool homeButton; // 0x18
	[Tooltip("Second choice in the popup: No-Ads + coins + boosters (9003 = no_ads_bundle; 0 = none).")]
	public int bundleItem; // 0x1C
	[Tooltip("First level that offers Remove Ads.")]
	[Min(1)]
	public int fromLevel; // 0x20
	[Tooltip("The popup comes after every Nth interstitial.")]
	[Min(1)]
	public int popupEveryInters; // 0x24
	[Tooltip("Popups per day at most (0 = no daily cap).")]
	[Min(0)]
	public int popupMaxPerDay; // 0x28

	// Methods

	// RVA: 0x2268B80 Offset: 0x2264B80 VA: 0x2268B80
	public void .ctor() { }
}

