// Namespace: Dino.BusSand.App.Meta
[Serializable]
public sealed class InterstitialSettings // TypeDefIndex: 4152
{
	// Fields
	[Tooltip("Master switch: no interstitial at all when off.")]
	public bool enabled; // 0x10
	[Tooltip("Levels passed before any interstitial.")]
	[Min(0)]
	[RemoteRange(1, 500)]
	public int startLevel; // 0x14
	[Tooltip("Seconds between two interstitials.")]
	[Min(0)]
	[RemoteRange(30, 600)]
	public int cooldownSec; // 0x18
	[Tooltip("The first interstitial of a session also waits the cooldown, counted from the launch.")]
	public bool firstWaitsCooldown; // 0x1C
	[Tooltip("Level results (win, final fail, quit) since the last interstitial.")]
	[Min(0)]
	[RemoteRange(1, 10)]
	public int levelGap; // 0x20
	[Tooltip("No interstitial this many seconds after a rewarded ad.")]
	[Min(0)]
	[RemoteRange(0, 300)]
	public int afterRewardedSec; // 0x24
	[Tooltip("The first N sessions of a player have no interstitial.")]
	[Min(0)]
	[RemoteRange(0, 10)]
	public int noInterSessions; // 0x28
	[Tooltip("No interstitial in the session of a player back after 3+ days away.")]
	public bool returningSessionOff; // 0x2C
	[Tooltip("Install days with the soft rules: win slot only, never the first level of a session, session play time.")]
	[Min(0)]
	[RemoteRange(0, 14)]
	public int protectDays; // 0x30
	[Tooltip("Session seconds needed on protected install day N (index N-1).")]
	[RemoteRange(0, 1800)]
	public int[] protectSessionSec; // 0x38
	[Tooltip("Protected install days also keep level_start / level_restart off (win slot only). Off: owner 2026-10-29, the pre-level placements run from install day 1.")]
	public bool protectPreLevel; // 0x40
	[Tooltip("After a won level (placement level_end).")]
	public bool onWin; // 0x41
	[Tooltip("Before a new level (placement level_start).")]
	public bool onLevelStart; // 0x42
	[Tooltip("Before a try again / reset (placement level_restart).")]
	public bool onRetry; // 0x43

	// Methods

	// RVA: 0x22689B8 Offset: 0x22649B8 VA: 0x22689B8
	public void .ctor() { }
}

