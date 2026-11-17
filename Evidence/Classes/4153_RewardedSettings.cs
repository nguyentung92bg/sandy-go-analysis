// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class RewardedSettings // TypeDefIndex: 4153
{
	// Fields
	[Tooltip("Rewarded ads each continue of an attempt costs (index = continues used; 0 = coins only). A list longer than the coin price list (3) also gives the attempt that many continues (10 at most).")]
	[RemoteRange(0, 3)]
	public int[] reviveAds; // 0x10
	[Tooltip("Seconds a rewarded request waits behind "Please wait..." for an ad still loading (0 = fail at once).")]
	[Min(0)]
	[RemoteRange(0, 30)]
	public int loadWaitSec; // 0x18
	[Tooltip("Completed! popup offers the rewarded multiplier.")]
	public bool winAdEnabled; // 0x1C
	[Tooltip("First level with the rewarded multiplier.")]
	[Min(1)]
	[RemoteRange(1, 500)]
	public int winAdFromLevel; // 0x20
	[Tooltip("Multiplier bar segments, left to right (all the same = one fixed button).")]
	[RemoteRange(1, 5)]
	public int[] winMultipliers; // 0x28
	[Tooltip("Milliseconds for the needle to cross the bar once.")]
	[Min(100)]
	[RemoteRange(300, 5000)]
	public int winNeedleMs; // 0x30
	[Tooltip("Win chest reward multiplier for a rewarded ad.")]
	[Min(1)]
	[RemoteRange(1, 5)]
	public int winChestAdMultiplier; // 0x34
	[Tooltip("Daily gift reward multiplier for a rewarded ad.")]
	[Min(1)]
	[RemoteRange(1, 5)]
	public int dailyGiftAdMultiplier; // 0x38

	// Methods

	// RVA: 0x2268A84 Offset: 0x2264A84 VA: 0x2268A84
	public void .ctor() { }
}

