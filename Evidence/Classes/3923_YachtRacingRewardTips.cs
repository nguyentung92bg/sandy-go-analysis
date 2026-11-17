// Namespace: Dino.BusSand.App.UI
public class YachtRacingRewardTips // TypeDefIndex: 3923
{
	// Fields
	private const string ShowClip = "RewardTips_ShowAnim";
	public float MaxWidth; // 0x10
	public Vector2 ClickOffset; // 0x14
	private readonly RectTransform _self; // 0x20
	private readonly RectTransform _arrow; // 0x28
	private readonly RectTransform _rewardRoot; // 0x30
	private readonly RectTransform _bg; // 0x38
	private readonly TMP_Text _title; // 0x40
	private readonly GameObject _itemTemplate; // 0x48
	private readonly GameObject _addTemplate; // 0x50
	private readonly Animation _anim; // 0x58
	private readonly List<GameObject> _items; // 0x60
	private readonly List<GameObject> _adds; // 0x68

	// Properties
	public bool Valid { get; }

	// Methods

	// RVA: 0x21EB1D8 Offset: 0x21E71D8 VA: 0x21EB1D8
	public void .ctor(Transform root) { }

	// RVA: 0x21F1E14 Offset: 0x21EDE14 VA: 0x21F1E14
	public bool get_Valid() { }

	// RVA: 0x21ED9B4 Offset: 0x21E99B4 VA: 0x21ED9B4
	public void Hide() { }

	// RVA: 0x21ED678 Offset: 0x21E9678 VA: 0x21ED678
	public void SetData(RectTransform clickTarget, RectTransform parentRect, List<ActivityRewardEntry> rewards, string title) { }

	// RVA: 0x21F1E74 Offset: 0x21EDE74 VA: 0x21F1E74
	private void SpawnItems(List<ActivityRewardEntry> rewards) { }

	// RVA: 0x21F25DC Offset: 0x21EE5DC VA: 0x21F25DC
	private static void SetReward2(Transform item, ActivityRewardEntry e) { }

	// RVA: 0x21F23D0 Offset: 0x21EE3D0 VA: 0x21F23D0
	private void AdjustPosition(RectTransform parent, RectTransform clickTarget) { }
}

