// Namespace: Dino.BusSand.App.UI
public static class EventKit // TypeDefIndex: 3805
{
	// Methods

	// RVA: 0x21B6B54 Offset: 0x21B2B54 VA: 0x21B6B54
	public static string Icon(EventKind k) { }

	// RVA: 0x21B65EC Offset: 0x21B25EC VA: 0x21B65EC
	public static string Title(EventKind k) { }

	// RVA: 0x21BD1AC Offset: 0x21B91AC VA: 0x21BD1AC
	public static string[] Rules(EventKind k) { }

	// RVA: 0x21B7820 Offset: 0x21B3820 VA: 0x21B7820
	public static RectTransform RewardRow(Transform parent, string name, IList<KeyValuePair<int, long>> get, float icon, float font, float gap) { }

	// RVA: 0x21B333C Offset: 0x21AF33C VA: 0x21B333C
	public static List<KeyValuePair<int, long>> RewardOf(int rewardId) { }

	// RVA: 0x21BE228 Offset: 0x21BA228 VA: 0x21BE228
	public static RectTransform Bar(Transform parent, string name, Vector2 size, Vector2 pos, Color fill, out TextMeshProUGUI label) { }

	// RVA: 0x21BE594 Offset: 0x21BA594 VA: 0x21BE594
	public static void SetBar(RectTransform fill, float maxW, float k) { }

	// RVA: 0x21B8344 Offset: 0x21B4344 VA: 0x21B8344
	public static string EndsIn(long seconds) { }
}

