// Namespace: Dino.BusSand.App.Meta
public class DailyChallengeFeature : LiveFeature<DailyChallengeData> // TypeDefIndex: 4032
{
	// Fields
	private DailyChallengeModel _m; // 0x18

	// Properties
	public override string Key { get; }
	public override int Order { get; }
	public static DailyChallengeFeature I { get; }
	public DailyChallengeModel Model { get; }
	public bool Unlocked { get; }
	public int TodayLevel { get; }
	public bool CanPlay { get; }
	public int DoneThisMonth { get; }
	public bool AnyClaimable { get; }

	// Methods

	// RVA: 0x222F78C Offset: 0x222B78C VA: 0x222F78C Slot: 13
	public override string get_Key() { }

	// RVA: 0x222F7CC Offset: 0x222B7CC VA: 0x222F7CC Slot: 14
	public override int get_Order() { }

	// RVA: 0x222F7D4 Offset: 0x222B7D4 VA: 0x222F7D4
	public static DailyChallengeFeature get_I() { }

	// RVA: 0x222F838 Offset: 0x222B838 VA: 0x222F838
	public DailyChallengeModel get_Model() { }

	// RVA: 0x222F980 Offset: 0x222B980 VA: 0x222F980
	public bool get_Unlocked() { }

	// RVA: 0x222FA60 Offset: 0x222BA60 VA: 0x222FA60
	public int get_TodayLevel() { }

	// RVA: 0x222FA88 Offset: 0x222BA88 VA: 0x222FA88
	public bool get_CanPlay() { }

	// RVA: 0x222FB24 Offset: 0x222BB24 VA: 0x222FB24
	public int get_DoneThisMonth() { }

	// RVA: 0x222FB4C Offset: 0x222BB4C VA: 0x222FB4C
	public List<KeyValuePair<int, long>> CompleteToday() { }

	// RVA: 0x222FC18 Offset: 0x222BC18 VA: 0x222FC18
	public int MilestoneState(int i) { }

	// RVA: 0x222FC50 Offset: 0x222BC50 VA: 0x222FC50
	public List<KeyValuePair<int, long>> ClaimMilestone(int i) { }

	// RVA: 0x222FD2C Offset: 0x222BD2C VA: 0x222FD2C
	public bool get_AnyClaimable() { }

	// RVA: 0x222FDCC Offset: 0x222BDCC VA: 0x222FDCC
	public void .ctor() { }
}

