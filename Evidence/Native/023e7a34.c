/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c$$<RegisterCore>b__5_0
bool Dino_BusSand_App_UI_HomeEntries___c___RegisterCore_b__5_0 (Dino_BusSand_App_UI_HomeEntries___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeEntries.<>c$$<RegisterCore>b__5_0
   bool Dino_BusSand_App_UI_HomeEntries___c___RegisterCore_b__5_0
   (Dino_BusSand_App_UI_HomeEntries___c_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_HomeEntries___c___RegisterCore_b__5_0_22e7a34(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = Dino_BusSand_App_Meta_StarterOffer__get_On_220c868(0);
  if ((((uVar2 & 1) == 0) ||
      (uVar2 = Dino_BusSand_App_Meta_StarterOffer__get_Bought_220c938(), (uVar2 & 1) != 0)) ||
     (uVar2 = Dino_BusSand_App_Meta_StarterOffer__get_NonPayer_220c9a8(), (uVar2 & 1) == 0)) {
    bVar1 = false;
  }
  else {
    lVar3 = Dino_BusSand_App_Meta_StarterOffer__get_SecondsLeft_220cc80();
    bVar1 = 0 < lVar3;
  }
  return bVar1;
}

