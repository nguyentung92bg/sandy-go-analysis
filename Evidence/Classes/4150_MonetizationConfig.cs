// Namespace: Dino.BusSand.App.Meta
[CreateAssetMenu(menuName = "Bus Sand/Monetization Config", fileName = "MonetizationConfig")]
public sealed class MonetizationConfig : ScriptableObject // TypeDefIndex: 4150
{
	// Fields
	public const string ResourcePath = "Config/MonetizationConfig";
	[Header("Ads: the Databuckets rule "ads_monetization" may override these")]
	public InterstitialSettings interstitial; // 0x18
	public RewardedSettings rewarded; // 0x20
	[Header("IAP offers: Unity only")]
	public RemoveAdsSettings removeAds; // 0x28
	public StarterSettings starter; // 0x30
	public PlayOnSettings playOn; // 0x38
	public OfferPacingSettings offers; // 0x40
	[Header("Editor only: preview a remote payload (ignored in builds)")]
	[TextArea(3, 14)]
	[Tooltip("Paste the JSON the "ads_monetization" rule returns to see the game with it in the Editor. Empty = Unity values.")]
	public string editorRemoteJson; // 0x48
	[TextArea(3, 14)]
	[Tooltip("Paste the JSON the "economy" rule returns (booster coin prices, revive, win coins, gifts; Docs/remote/economy_schema.md) to see the game with it in the Editor. Empty = TbMonetization values.")]
	public string editorEconomyJson; // 0x50

	// Methods

	// RVA: 0x2268790 Offset: 0x2264790 VA: 0x2268790
	public void .ctor() { }
}

