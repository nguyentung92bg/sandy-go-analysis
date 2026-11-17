// Namespace: Dino.BusSand.App.Meta
public class NoAdsFeature : LiveFeature<NoAdsData>, IHallBinder // TypeDefIndex: 4087
{
	// Fields
	public const int SystemOpenId = 9;
	public const int GuidePriority = 12;
	public static bool OpenFlg; // 0x0
	public static int ShopItemId; // 0x4
	private static NoAdsFeature s_inst; // 0x8

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static NoAdsFeature I { get; }
	public static bool HasNoAds { get; }
	public static bool FirstInterTriggered { get; }

	// Methods

	// RVA: 0x22436BC Offset: 0x223F6BC VA: 0x22436BC Slot: 13
	public override string get_Key() { }

	// RVA: 0x22436FC Offset: 0x223F6FC VA: 0x22436FC Slot: 14
	public override int get_Order() { }

	// RVA: 0x2243704 Offset: 0x223F704 VA: 0x2243704
	public static NoAdsFeature get_I() { }

	// RVA: 0x22437A0 Offset: 0x223F7A0 VA: 0x22437A0
	public void .ctor() { }

	// RVA: 0x2243858 Offset: 0x223F858 VA: 0x2243858
	public static bool get_HasNoAds() { }

	// RVA: 0x2243944 Offset: 0x223F944 VA: 0x2243944
	public static bool get_FirstInterTriggered() { }

	// RVA: 0x2243A30 Offset: 0x223FA30 VA: 0x2243A30
	public bool ShouldShowHallEntry() { }

	// RVA: 0x2243AC4 Offset: 0x223FAC4 VA: 0x2243AC4
	public bool ShouldForceShow() { }

	// RVA: 0x2243B8C Offset: 0x223FB8C VA: 0x2243B8C
	public void SetFirstForceShow() { }

	// RVA: 0x2243C90 Offset: 0x223FC90 VA: 0x2243C90
	public int IncrementShowCount() { }

	// RVA: 0x2243D24 Offset: 0x223FD24 VA: 0x2243D24 Slot: 21
	public override void CollectHallCommands(HallQueue q, bool fromGame) { }

	[IteratorStateMachine(typeof(NoAdsFeature.<RunForcedPopup>d__21))]
	// RVA: 0x2243DF8 Offset: 0x223FDF8 VA: 0x2243DF8
	private IEnumerator RunForcedPopup() { }

	// RVA: 0x2243E8C Offset: 0x223FE8C VA: 0x2243E8C Slot: 22
	public void BindHall(UIPanel hud) { }

	// RVA: 0x2243E98 Offset: 0x223FE98 VA: 0x2243E98
	private static void .cctor() { }
}

