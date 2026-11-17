// Namespace: Dino.BusSand.App.UI
public static class CommerceRewardFly // TypeDefIndex: 3431
{
	// Fields
	private const float BornTime = 0.26;
	private const float FlyTime = 0.4;
	private const float Stagger = 0.038;
	private const float FadeTime = 0.3;

	// Methods

	// RVA: 0x22A8D24 Offset: 0x22A4D24 VA: 0x22A8D24
	public static void Fly(IList<KeyValuePair<int, long>> rewards, Vector3 worldFrom, Action done, bool holdOnTarget = False) { }

	// RVA: 0x22A8FF4 Offset: 0x22A4FF4 VA: 0x22A8FF4
	public static Transform FindTarget(int itemId) { }

	[IteratorStateMachine(typeof(CommerceRewardFly.<Run>d__7))]
	// RVA: 0x22A8F20 Offset: 0x22A4F20 VA: 0x22A8F20
	private static IEnumerator Run(UIManager ui, List<KeyValuePair<int, long>> rewards, Vector3 from, Action done, bool holdOnTarget) { }
}

