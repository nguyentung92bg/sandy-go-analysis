// Namespace: Dino.BusSand.App.UI
public abstract class RewardPopup : UIPanel, IKitPanel // TypeDefIndex: 3620
{
	// Fields
	protected KitTopBar Bar; // 0x38
	protected bool Busy; // 0x40
	protected bool Done; // 0x41
	protected bool Ready; // 0x42
	protected RectTransform ClaimBtn; // 0x48
	protected RectTransform AdBtn; // 0x50

	// Properties
	protected abstract Vector3 FlyFrom { get; }
	protected virtual string AdSlot { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 9
	protected abstract List<KeyValuePair<int, long>> Grant(int times);

	// RVA: -1 Offset: -1 Slot: 10
	protected abstract Vector3 get_FlyFrom();

	// RVA: 0x23249AC Offset: 0x23209AC VA: 0x23249AC Slot: 11
	protected virtual string get_AdSlot() { }

	// RVA: 0x23249EC Offset: 0x23209EC VA: 0x23249EC Slot: 12
	protected virtual void OnGranted(List<KeyValuePair<int, long>> got, int times) { }

	// RVA: 0x23249F0 Offset: 0x23209F0 VA: 0x23249F0
	protected void BuildButtons(KitWindow w, float panelH, int adTimes, string claimLabel) { }

	// RVA: 0x2324FB8 Offset: 0x2320FB8 VA: 0x2324FB8
	protected void OnClaim(int times) { }

	// RVA: 0x23252DC Offset: 0x23212DC VA: 0x23252DC
	protected void OnAd(int times) { }

	// RVA: 0x2324FE8 Offset: 0x2320FE8 VA: 0x2324FE8
	private void Finish(int times) { }

	// RVA: 0x2325430 Offset: 0x2321430 VA: 0x2325430
	protected static RectTransform RewardIcon(Transform parent, KeyValuePair<int, long> r, float size, out TextMeshProUGUI amount) { }

	// RVA: 0x2325750 Offset: 0x2321750 VA: 0x2325750
	protected static void CountTimes(List<ValueTuple<TextMeshProUGUI, KeyValuePair<int, long>>> labels, int times) { }

	// RVA: 0x2325B5C Offset: 0x2321B5C VA: 0x2325B5C Slot: 7
	public override bool OnBack() { }

	// RVA: 0x2325B8C Offset: 0x2321B8C VA: 0x2325B8C
	protected void .ctor() { }
}

